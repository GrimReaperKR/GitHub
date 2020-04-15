#ifndef _FSM_HEADER_
#define _FSM_HEADER_

#include <iostream>

using namespace std;

class State
{
public:
	virtual void request() = 0;
};

class Move : public State
{
public:
	void request() override { cout << "Move." << endl; }
};

class Attack : public State
{
public:
	void request() override { cout << "Attack!" << endl; }
};

class Idle : public State
{
public:
	void request() override { cout << "Idle......" << endl; }
};

class StateManage
{
private:
	State* pState;
public:
	StateManage(State* _state) : pState(_state) {}
	~StateManage() {
		if (pState) delete pState;
	}

	void SetState(State* _state);
	void StateRequest();
};

#endif