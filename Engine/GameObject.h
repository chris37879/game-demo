#ifndef GAMEENGINE_GAMEOBJECT_H
#define GAMEENGINE_GAMEOBJECT_H

#include <stdint.h>
#include <vector>
#include "Components/Component.h"

namespace ge {
    class GameObject {
    public:
        uint64_t getId();
        GameObject(uint64_t id);
        GameObject();
        std::vector<Component> components;
        void update();

    private:
        static uint64_t nextId;
        uint64_t id;
        void construct(uint64_t id);
    };
}


#endif //GAMEENGINE_GAMEOBJECT_H
