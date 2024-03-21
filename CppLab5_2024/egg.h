#pragma once



class egg	
{	
	element el;		// element u¿yty do malowania obszaru POZA jajem

public:
	egg(const element& el = element{card::LIGHT_GRAY, '*'});

	void draw(card& c) const;	// "zamalowuje" obszar POZA jajem
};
