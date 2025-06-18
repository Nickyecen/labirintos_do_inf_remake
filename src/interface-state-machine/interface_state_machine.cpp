#include "interface_state_machine.hpp"
#include "raylib.h"

InterfaceStateMachine::InterfaceStateMachine(InterfaceState* initialState): 
_currentState(initialState) {
    initialState->enter();
}

void InterfaceStateMachine::update() {
    InterfaceState* newState = _currentState->update();
    if(newState) {
        this->_currentState->exit();
        this->_currentState = newState;
        this->_currentState->enter();
        if(this->_currentState->isFinal()) {
            this->_currentState->exit();
        }
    }
}

void InterfaceStateMachine::draw() const { 
    if(_currentState->shouldDraw()) {
        BeginDrawing();
            _currentState->draw();
        EndDrawing();
    }
}