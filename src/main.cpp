#include <raylib.h>
#include <iostream>
#include "audio/audio.hpp"

int main() {
    InitWindow(800, 450, "raylib example");

    Sound sound = Audio::get().loadSound("res/sound/ui_select.mp3");

    Audio::get().playSound(sound);
    WaitTime(0.2);
    Audio::get().playSound(sound);
    while(!WindowShouldClose()) {


        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Text", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    Audio::close(); 
    CloseWindow();

    return 0;
}