#include "Component.h"

Component::Component(string name) {
    setName(name);
}

string Component::getName() {
    return name;
}

void Component::setName(string value) {
    name = value;
}

void Component::update() {

}
