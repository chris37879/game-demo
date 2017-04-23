#ifndef GAME_COMPONENT_H
#define GAME_COMPONENT_H


#include <string>

using namespace std;

class Component {
public:
    Component(string name);
    string getName();
    void setName(string value);
    void update();
private:
    string name;
};


#endif //GAME_COMPONENT_H
