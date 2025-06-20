#include "state_machine.hpp"

StateMachine::StateMachine(State* initialState): 
_currentState(initialState) {
    initialState->enter();
}

void StateMachine::update() {
    State* newState = _currentState->update();
    if(newState) {
        this->_currentState->exit();
        this->_currentState = newState;
        this->_currentState->enter();
        if(this->_currentState->isFinal()) {
            this->_currentState->exit();
        }
    }
}