#pragma once

#include "card.h"

class egg	
{	
	element el;		// element u�yty do malowania obszaru POZA jajem

public:
	egg(const element& el = element{card::colors::LIGHT_GRAY, '*'});

	void draw(card& c) const;	// "zamalowuje" obszar POZA jajem
};
