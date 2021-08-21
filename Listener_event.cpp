/*
 * Listener_event.cpp
 *
 *  Created on: 19 Aug 2021
 *      Author: Gaurav
 */

#include<Listener_event.h>

IListener::~IListener()
{

}

void IListener::OnEvent()
{

}

jewel::jewel()
{

}
jewel::~jewel()
{

}

void jewel::toggle_switch(notify rc_notify, int alarm_val)
{
	if(alarm_val == 5)
	{
		cout<<"Give message to all";
		//here add code to inform listener
		rc_notify.notifyListener();
	}
	else
	{
		cout<<"Don't give message";
	}

}
notify::notify()
{

}

notify::~notify()
{

}

void notify::addListener(IListener* rc_IListener)
{
	VecOfListener.push_back(rc_IListener);
}

void notify::notifyListener()
{
	for (int it = 0; it < 3; ++it)
	{
		VecOfListener[it]->OnEvent();
	}
}

police::police()
{

}

police::~police()
{

}

void police::OnEvent()
{
	cout<<"police got message"<<endl;
}

owner::owner()
{

}

owner::~owner()
{

}

void owner::OnEvent()
{
	cout<<"owner got message"<<endl;
}

guard::guard()
{

}

guard::~guard()
{

}

void guard::OnEvent()
{
	cout<<"guard got message"<<endl;
}

