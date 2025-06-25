#include <raylib.h>
#include <iostream>
#include "audio/audio.hpp"
#include "state-machines/interface_state.hpp"
#include "state-machines/state.hpp"
#include "state-machines/state_machine.hpp"
#include "menus/main-menu/main_menu.hpp"
#include "menus/menus.hpp"
#include <bits/unique_ptr.h>

int main() {
    SetTraceLogLevel(LOG_ALL);
    InitWindow(800, 450, "raylib example");

    auto menus = std::make_unique<Menus>();
    auto game = std::make_unique<StateMachine>(std::move(menus));
    
    game->run();

    CloseWindow();

    return 0;
}