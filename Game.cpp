#include "Game.h"

Game::Game() : Application("Game Demo") {

}

void Game::run() {

    ge::GameObject go1 = ge::GameObject();
    go1.components.push_back(Component("Test 1"));
    go1.components.push_back(Component("Test 2"));
    go1.components.push_back(Component("Test 3"));

    ge::GameObject go2 = ge::GameObject();
    go2.components.push_back(Component("Test 1"));
    go2.components.push_back(Component("Test 2"));
    go2.components.push_back(Component("Test 3"));

    ge::GameObject go3 = ge::GameObject();
    go3.components.push_back(Component("Test 1"));
    go3.components.push_back(Component("Test 2"));
    go3.components.push_back(Component("Test 3"));

    engine->gameObjects.push_back(go1);
    engine->gameObjects.push_back(go2);
    engine->gameObjects.push_back(go3);

    ge::Application::run();
}
