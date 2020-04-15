
#include "FSM.h"

void StateManage::SetState(State* _state) {
	if (pState) {
		delete pState;
		pState = _state;
	}
}
void StateManage::StateRequest() {
	pState->request();
}