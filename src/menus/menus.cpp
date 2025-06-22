#include "menus.hpp"

bool Menus::isFinal() const {
    return false;
}

void Menus::enter() {
    _renderer = new Renderer();
    InterfaceState* mainMenu = new MainMenuState(_renderer);
    _ism = new InterfaceStateMachine(mainMenu);
    _ism->run();
}

State* Menus::update() {return nullptr;}

void Menus::exit() {}