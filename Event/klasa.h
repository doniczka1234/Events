#ifndef klasa_h
#define klasa_h
#include <iostream>
#include <string>
class Event
{
	int month, day, year;
	int hour, minutes;
	std::string name;

public:	

	Event(std::string="brak",int=1,int=1,int=2015,int=12,int=0);
	~Event();
	void load();
	void show();	
};

#endif 
