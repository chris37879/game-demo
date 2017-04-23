#ifndef GAMEENGINE_ENGINE_H
#define GAMEENGINE_ENGINE_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "FPS.h"
#include "GameObject.h"

namespace ge {
    class Engine {
    public:
        bool showFPSCounter;
        Engine(std::string windowTitle);
        void run();
        std::vector<GameObject> gameObjects;
        bool isRunning();
    private:
        sf::RenderWindow renderWindow;
        FPS fps;
        sf::Text fpsCounterDisplay;
        sf::Font font;
        void update();
        void draw();
        bool running;
    };
}


#endif //GAMEENGINE_ENGINE_H
