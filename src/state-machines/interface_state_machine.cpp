#include "interface_state_machine.hpp"
#include "raylib.h"

InterfaceStateMachine::InterfaceStateMachine(InterfaceState* initialState): 
StateMachine(initialState), _currentState(initialState) {
    initialState->enter();
}

void InterfaceStateMachine::update() {
    if(auto* newState = dynamic_cast<InterfaceState*>(_currentState->update())) {
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