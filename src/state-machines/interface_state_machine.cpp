#include "interface_state_machine.hpp"
#include "raylib.h"

InterfaceStateMachine::InterfaceStateMachine(InterfaceState* initialState): 
StateMachine(initialState), _currentState(initialState) {
    initialState->enter();
}

void InterfaceStateMachine::run() {
    while(!_currentState->shouldStop()) {
        auto* newState = dynamic_cast<InterfaceState*>(_currentState->update());

        if(_currentState->shouldDraw()) {
            BeginDrawing();
                _currentState->draw();
            EndDrawing();
        }

        if(newState) {
            this->_currentState->exit();
            this->_currentState->~InterfaceState();
            this->_currentState = newState;
            this->_currentState->enter();
        }
    }
}
