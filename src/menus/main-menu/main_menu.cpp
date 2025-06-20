#include "main_menu.hpp"
#include "raylib.h"

MainMenuState::MainMenuState() {}
MainMenuState::~MainMenuState() {}

bool MainMenuState::shouldDraw() const {
    return true;
}

bool MainMenuState::isFinal() const {
    return false;
}

void MainMenuState::enter() {}

InterfaceState* MainMenuState::update() {
    WaitTime(0.1);
    this->_backgroundColor.r = (this->_backgroundColor.r + 1) % 255;
    this->_backgroundColor.g = (this->_backgroundColor.g + 2) % 255;
    this->_backgroundColor.b = (this->_backgroundColor.b + 3) % 255;

    return nullptr;
}

void MainMenuState::draw() const {
    ClearBackground(this->_backgroundColor);
}

void MainMenuState::exit() {
    TraceLog(LOG_DEBUG, "Exited state");
}