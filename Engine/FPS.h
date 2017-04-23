//
// Created by Chris Hendrickson on 4/11/2017.
//

#ifndef GAMEENGINE_FPS_H
#define GAMEENGINE_FPS_H

#include <SFML/System/Clock.hpp>

namespace ge {
    class FPS {
    public:
        FPS() : frame(0), fps(0) {}

        void update();

        const unsigned int getFPS() const { return fps; }

    private:
        unsigned int frame;
        unsigned int fps;
        sf::Clock clock;
    };
}

#endif //GAMEENGINE_FPS_H
