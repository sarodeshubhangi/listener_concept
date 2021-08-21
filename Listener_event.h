
#ifndef LISTENER_EVENT_H_
#define LISTENER_EVENT_H_

#include <iostream>
#include <vector>
#include "string"

using namespace std;

class IListener
{
public:
	virtual ~IListener();
	virtual void OnEvent();
};

class notify
{
public:
	notify();
	~notify();

	void addListener(IListener* rc_IListener);
	void notifyListener();

	std::vector<IListener*> VecOfListener;
};

class jewel
{
public:
	jewel();
    ~jewel();

    void toggle_switch(notify rc_notify, int alarm_val);
};

class police : public IListener
{
public:
	police();
	virtual ~police();

	void OnEvent();
};

class owner : public IListener
{
public:
	owner();
	virtual ~owner();

	void OnEvent();
};

class guard : public IListener
{
public:
	guard();
	virtual ~guard();

	void OnEvent();
};


#endif /* LISTENER_EVENT_H_ */
