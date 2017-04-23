//
// Created by Chris Hendrickson on 4/22/17.
//

#ifndef GAME_APP_H
#define GAME_APP_H

#include "Engine.h"

namespace ge {

    class Application {
    public:
        Application(string gameName);
        virtual void run();

    protected:
        Engine *engine;

    private:
        void update();
        void draw();
    };

}


#endif //GAME_APP_H
