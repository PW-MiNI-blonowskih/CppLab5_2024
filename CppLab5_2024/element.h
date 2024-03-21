
#pragma once
#include <iostream>
#include <Windows.h>

class element	//GOTOWA
{
	int color;
	char mark;

public:
	element(int color = 0, char mark = '*') : color{ color }, mark { mark }
	{}
		

	friend std::ostream& operator<<(std::ostream& out, const element& e)
	{	
		//wypisuje znak w podanym kolorze
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,e.color +(15<<4));
		out<<e.mark;
		SetConsoleTextAttribute(hconsole,15);

		return out;
	}
};