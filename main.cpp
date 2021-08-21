/*
 * main.cpp
 *
 *  Created on: 19 Aug 2021
 *      Author: Gaurav
 */

#include "Listener_event.h"

int main()
{
	notify o_notify;
		jewel o_jewel;


		police o_police;
		owner o_owner;
		guard o_guard;

		o_notify.addListener(&o_police);
		o_notify.addListener(&o_owner);
		o_notify.addListener(&o_guard);

		int alarm_val;
		cout<<"Enter value"<<endl;

		cin>>alarm_val;

		o_jewel.toggle_switch(o_notify, alarm_val);

		return 0;
}



