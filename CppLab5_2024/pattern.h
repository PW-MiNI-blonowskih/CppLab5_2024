#pragma once


class pattern {
	int sx;		// wspó³rzêdne œrodka szlaczka (0 <= sx <m)
	element el;	// element u¿yty do rysowania szlaczka

public:
	pattern(int sx, const element& el);

	void draw(card& c) const;	// "rysuje" szlaczek
};
