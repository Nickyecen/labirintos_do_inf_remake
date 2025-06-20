#include <raylib.h>
#include <iostream>
#include "audio/audio.hpp"
#include "state-machines/interface_state.hpp"
#include "state-machines/interface_state_machine.hpp"
#include "state-machines/state.hpp"
#include "state-machines/state_machine.hpp"
#include "menus/main-menu/main_menu.hpp"
#include "menus/menus.hpp"

int main() {
    SetTraceLogLevel(LOG_ALL);
    InitWindow(800, 450, "raylib example");

    Menus* menus = new Menus();
    StateMachine* game = new StateMachine(menus);

    while(!WindowShouldClose()) {
        game->update();
    }

    CloseWindow();

    return 0;
}