#include "main_menu.hpp"
#include "raylib.h"

MainMenuState::MainMenuState(Renderer* renderer): _renderer(renderer) {}
MainMenuState::~MainMenuState() {}

bool MainMenuState::shouldDraw() const {
    return true;
}

bool MainMenuState::shouldStop() const {
    return WindowShouldClose();
}

bool MainMenuState::isFinal() const {
    return false;
}

void MainMenuState::enter() {
    _backgroundTexture = LoadTexture("res/images/placeholder_background.jpg");
}

InterfaceState* MainMenuState::update() {
    return nullptr;
}

void MainMenuState::draw() const {
    ClearBackground(this->_backgroundColor);
    _renderer->renderTexture2D(_backgroundTexture,
                               RenderPosition::CENTER,
                               RenderScale::KEEP_PROPORTION_FILL);
}

void MainMenuState::exit() {
    TraceLog(LOG_DEBUG, "Exited state");
}