#ifndef MAIN_MENU_STATE_HEADER
#define MAIN_MENU_STATE_HEADER

#include "../../state-machines/interface_state.hpp"
#include "raylib.h"

class MainMenuState : public InterfaceState {
    public:
    private:
        Color _backgroundColor = {0, 0, 0, 1};

    public:
        MainMenuState();
        ~MainMenuState();
        
        bool shouldStop() const override;
        bool shouldDraw() const override;
        bool isFinal() const override;

        virtual void enter() override;
        virtual InterfaceState* update() override;
        virtual void draw() const override;
        virtual void exit() override;
    private:
};

#endif