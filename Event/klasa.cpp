#include "klasa.h"
#include <iostream>
#include <string>

void Event::load()
{
	std::cout << "Nazwa wydarzenia: \n";
	std::cin >> name;
	std::cout << "Dzien: \n";
	std::cin >> day;
	std::cout << "Miesiac: \n";
	std::cin >> month;
	std::cout << "Rok: \n";
	std::cin >> year;
	std::cout << "Godzina: \n";
	std::cin >> hour;
	std::cout << "Minut: \n";
	std::cin >> minutes;
}

void Event::show()
{
	std::cout << std::endl << name;
	std::cout << std::endl << "0" << day << ".";
	std::cout  << month << ".";
	std::cout  << year ;
	std::cout << std::endl << hour << ".";
	std::cout  << minutes <<std::endl;
}

Event::Event(std::string n, int d,int m, int y, int h, int mins)
{
	name = n;
	day = d;
	month = m;
	year = y;
	hour = h;
	minutes = mins;
}

Event::~Event()
{
	std::cout << "To ja, destruktor ! :) \n";
}