#ifndef MENUS_HEADER
#define MENUS_HEADER

#include "../state-machines/state.hpp"
#include "../state-machines/interface_state.hpp"
#include "../state-machines/interface_state_machine.hpp"
#include "main-menu/main_menu.hpp"

class Menus : public State {
    private:
        InterfaceStateMachine* _ism;
        bool _shouldStop = false;

    public:
        virtual bool isFinal() const override;
        virtual void enter() override;
        virtual State* update() override;
        virtual void exit() override;

        virtual bool shouldStop() const override {
            return _shouldStop || WindowShouldClose();
        }
        void setShouldStop(bool shouldStop) {_shouldStop = shouldStop;}
};

#endif