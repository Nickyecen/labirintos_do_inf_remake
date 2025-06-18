#include <raylib.h>
#include <iostream>
#include "audio/audio.hpp"
#include "interface-state-machine/interface_state.hpp"
#include "interface-state-machine/interface_state_machine.hpp"
#include "main_menu/main_menu.hpp"

int main() {
    SetTraceLogLevel(LOG_ALL);
    InitWindow(800, 450, "raylib example");

    InterfaceState* state = new MainMenuState();
    InterfaceStateMachine* ism = new InterfaceStateMachine(state); 

    while(!WindowShouldClose()) {
        ism->update();
        ism->draw();
    }

    Audio::close(); 
    CloseWindow();

    return 0;
}