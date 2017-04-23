#include "GameObject.h"

uint64_t ge::GameObject::nextId = 1;

ge::GameObject::GameObject(uint64_t id) {
    construct(id);
    components = std::vector<Component>();
}

ge::GameObject::GameObject() {
    construct(nextId++);
}

uint64_t ge::GameObject::getId() {
    return this->id;
}

void ge::GameObject::construct(uint64_t id) {
    this->id = id;
}

void ge::GameObject::update() {
    //no-op
}

