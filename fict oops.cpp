#include <SFML/Graphics.hpp>
#include <cmath>
#include <vector>

const float GRAVITY = 300.0f;  // Gravity force
const float HEXAGON_RADIUS = 200.0f;
const float BALL_RADIUS = 10.0f;
const float ROTATION_SPEED = 30.0f; // Degrees per second
const float ELASTICITY = 0.8f; // Energy loss on bounce

struct Ball {
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float x, float y) {
        shape.setRadius(BALL_RADIUS);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(BALL_RADIUS, BALL_RADIUS);
        shape.setPosition(x, y);
        velocity = {0, 0}; // Start with no initial speed
    }

    void update(float dt) {
        velocity.y += GRAVITY * dt;  // Apply gravity
        shape.move(velocity * dt);
    }

    void bounce(sf::Vector2f normal) {
        float dot = velocity.x * normal.x + velocity.y * normal.y;
        velocity -= 2 * dot * normal * ELASTICITY; // Reflect with energy loss
    }
};

sf::Vector2f rotatePoint(sf::Vector2f point, float angle) {
    float rad = angle * 3.14159265f / 180.0f;
    return {point.x * cos(rad) - point.y * sin(rad), point.x * sin(rad) + point.y * cos(rad)};
}

std::vector<sf::Vector2f> getHexagonEdges(float angle) {
    std::vector<sf::Vector2f> edges;
    for (int i = 0; i < 6; ++i) {
        float theta = 60.0f * i;
        edges.push_back(rotatePoint({HEXAGON_RADIUS * cos(theta * 3.14159265f / 180.0f),
                                     HEXAGON_RADIUS * sin(theta * 3.14159265f / 180.0f)}, angle));
    }
    return edges;
}

sf::Vector2f getNormal(sf::Vector2f a, sf::Vector2f b) {
    sf::Vector2f edge = b - a;
    return {-edge.y, edge.x} / sqrt(edge.x * edge.x + edge.y * edge.y);
}

void handleCollision(Ball &ball, std::vector<sf::Vector2f> &edges, sf::Vector2f center) {
    for (size_t i = 0; i < edges.size(); ++i) {
        sf::Vector2f p1 = edges[i] + center;
        sf::Vector2f p2 = edges[(i + 1) % edges.size()] + center;
        sf::Vector2f normal = getNormal(p1, p2);

        // Check distance from ball to edge
        sf::Vector2f toBall = ball.shape.getPosition() - p1;
        float dist = toBall.x * normal.x + toBall.y * normal.y;

        if (dist < BALL_RADIUS) {
            ball.bounce(normal);
            ball.shape.setPosition(ball.shape.getPosition() + normal * (BALL_RADIUS - dist));
        }
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rotating Hexagon with Gravity Ball");
    window.setFramerateLimit(60);

    sf::ConvexShape hexagon;
    hexagon.setPointCount(6);
    hexagon.setFillColor(sf::Color::Transparent);
    hexagon.setOutlineColor(sf::Color::White);
    hexagon.setOutlineThickness(2);

    Ball ball(400, 200);
    sf::Vector2f hexagonCenter(400, 300);
    float rotationAngle = 0.0f;

    sf::Clock clock;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        float dt = clock.restart().asSeconds();
        rotationAngle += ROTATION_SPEED * dt;
        std::vector<sf::Vector2f> edges = getHexagonEdges(rotationAngle);

        ball.update(dt);
        handleCollision(ball, edges, hexagonCenter);

        window.clear();

        for (size_t i = 0; i < edges.size(); ++i) {
            hexagon.setPoint(i, edges[i] + hexagonCenter);
        }
        window.draw(hexagon);
        window.draw(ball.shape);

        window.display();
    }

    return 0;
}
