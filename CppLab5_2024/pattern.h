#pragma once

#include "element.h"

class card;

class pattern {
	int sx;		// wsp�rz�dne �rodka szlaczka (0 <= sx <m)
	element el;	// element u�yty do rysowania szlaczka

public:
	pattern(int sx, const element& el);

	void draw(card& c) const;	// "rysuje" szlaczek
};
