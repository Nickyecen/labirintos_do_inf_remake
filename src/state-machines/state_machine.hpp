#ifndef STATE_MACHINE_HEADER
#define STATE_MACHINE_HEADER

#include "state.hpp"

class StateMachine {
    private:
        State* _currentState;

    public:
        StateMachine(State* initialState);
        virtual void update();
};

#endif