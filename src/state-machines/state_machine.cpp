#include "state_machine.hpp"

StateMachine::StateMachine(State* initialState): 
_currentState(initialState) {
    initialState->enter();
}

void StateMachine::run() {
    while(!_currentState->shouldStop()) {
        State* newState = _currentState->update();
        if(newState) {
            this->_currentState->exit();
            this->_currentState->~State();
            this->_currentState = newState;
            this->_currentState->enter();
        }
    } 
}