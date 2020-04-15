
#include "FSM.h"

int main()
{
	StateManage* p_State = new StateManage(new Idle());
	p_State->StateRequest();

	p_State->SetState(new Move());
	p_State->StateRequest();

	p_State->SetState(new Attack());
	p_State->StateRequest();

	p_State->SetState(new Idle());
	p_State->StateRequest();

	return 0;
}