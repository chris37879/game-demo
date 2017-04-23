#include "Engine.h"
#include <iostream>

ge::Engine::Engine(std::string windowTitle) {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 4;

    fps = FPS();

    renderWindow.create(sf::VideoMode::getDesktopMode(), windowTitle, sf::Style::Default, settings);

    showFPSCounter = true;

    renderWindow.setVerticalSyncEnabled(true);

    if (!font.loadFromFile("./Resources/Fonts/Source Code Pro/SourceCodePro-Regular.ttf")) {
        std::cerr << "Failed to load Source Code Pro Regular" << std::endl;
    }

    gameObjects = std::vector<GameObject>();

    // Setup the FPS Counter Display
    fpsCounterDisplay = sf::Text();
    fpsCounterDisplay.setFont(font);
    fpsCounterDisplay.setCharacterSize(30);
    fpsCounterDisplay.setFillColor(sf::Color::White);
    fpsCounterDisplay.setOutlineColor(sf::Color::Black);
    fpsCounterDisplay.setOutlineThickness(1.0f);
}

void ge::Engine::run() {
    running = true;
    while(renderWindow.isOpen()) {
        sf::Event event;
        while (renderWindow.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    renderWindow.close();
                    break;
                default:
                    break;
            }
        }

        renderWindow.clear(sf::Color::Black);
        update();
        draw();
        renderWindow.display();
    }
    running = false;
}

void ge::Engine::update() {
    if (showFPSCounter) {
        fps.update();
        fpsCounterDisplay.setString("FPS: " + std::to_string(fps.getFPS()));
    }

    for(auto &gameObject : gameObjects) {
        gameObject.update();
        for(auto &component : gameObject.components) {
            component.update();
        }
    }
}

void ge::Engine::draw() {
    if (showFPSCounter) {
        renderWindow.draw(fpsCounterDisplay);
    }

    for(auto &gameObject : gameObjects) {
    }
}

bool ge::Engine::isRunning() {
    return running;
}
