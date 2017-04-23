#include "FPS.h"

void ge::FPS::update() {
    if(clock.getElapsedTime().asSeconds() >= 1.0f) {
        fps = frame;
        frame = 0;
        clock.restart();
    }

    ++frame;
}