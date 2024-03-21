#include "card.h"
#include "egg.h"

card::card(int m, const element& el) : tab{ m, el }, h{ nullptr }
{
	egg e{};
	draw(e);
}


void card::draw(const pattern& s)
{
	s.draw(*this);
	egg e{};
	draw(e);
}

void card::draw(const egg& e)
{
	e.draw(*this);
}

void card::reset(int m, const element& el)
{
	destroy();
	init(m);
	fill(el);
}

void card::write() const
{
	//TODO


}

void card::undo()
{
	//TODO


}

card::~card()
{ 
	//TODO


}





