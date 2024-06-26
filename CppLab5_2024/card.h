#pragma once

#include "history.h"
#include "pattern.h"

class egg;

class card: public tab
{
	history* h{nullptr};

public:
	card(int m, const element& el = element{DARK_GREEN,'*'});

	//TODO
	//zdefiniuj zabroniony: konstruktor bezparametrowy, kopiowanie, operator=
	card() = delete;
	card(card& k) = delete;
	card& operator=(const card& a) = delete;

	~card();
	
	void draw(const pattern& s);
	void draw(const egg& e);	

	//nowa kartka z jajem (z rozmiarem m)
	void reset(int m, const element& el = element{ DARK_GREEN, '*' });	

	void write() const;		//etap 3
	void undo();			//etap 3
	
	
	//8-szary,9-niebieski,10-zielony,11-trukusowy,12-czerwony,13-fioletowy,14-��ty
	enum colors {DARK_GREEN=2, LIGHT_GRAY=7, GRAY, BLUE, GREEN, TURKOIS, RED, PURPLE, YELLOW};
};