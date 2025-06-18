#ifndef INTERFACE_STATE_MACHINE_HEADER
#define INTERFACE_STATE_MACHINE_HEADER

#include "interface_state.hpp"

class InterfaceStateMachine {
    public:
    private:
        InterfaceState* _currentState;

    public:
        InterfaceStateMachine(InterfaceState* initialState);
        void update();
        void draw() const;
    private:
};

#endif