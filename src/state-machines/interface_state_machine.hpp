#ifndef INTERFACE_STATE_MACHINE_HEADER
#define INTERFACE_STATE_MACHINE_HEADER

#include "state_machine.hpp"
#include "interface_state.hpp"

class InterfaceStateMachine : public StateMachine {
    private:
        InterfaceState* _currentState;

    public:
        InterfaceStateMachine(InterfaceState* initialState);

        virtual void run() override;
};

#endif