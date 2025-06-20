#include "menus.hpp"

bool Menus::isFinal() const {
    return false;
}

void Menus::enter() {
    InterfaceState* mainMenu = new MainMenuState();
    _ism = new InterfaceStateMachine(mainMenu);

    while(!shouldStop()) {
        _ism->update();
        _ism->draw();
    } 
}

State* Menus::update() {}

void Menus::exit() {}