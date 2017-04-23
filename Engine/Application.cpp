#include <thread>
#include <iostream>
#include "Application.h"

ge::Application::Application(string gameName) {
    engine = new Engine(gameName);
}

void ge::Application::run() {

    std::thread gameThread([=] {
        std::cout << "Game Started" << std::endl;
        while(this->engine->isRunning()) {
            update();
            draw();
        }
    });

    std::cout << "Engine Started" << std::endl;

    engine->run();

    gameThread.join();

}

void ge::Application::update() {

}

void ge::Application::draw() {

}
