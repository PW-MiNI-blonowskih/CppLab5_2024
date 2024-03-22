#include "card.h"
#include "egg.h"

card::card(int m, const element& el) : tab{ m, el }
{
	egg e{};
	draw(e);
	
	h = new (std::nothrow) history(*this);
}

void card::draw(const pattern& s)
{
	s.draw(*this);
	draw(egg());
}

void card::draw(const egg& e)
{
	e.draw(*this);
}

void card::reset(int m, const element& el)
{
	destroy();
	static_cast<tab&>(*this) = tab(m, el);
	draw(egg());
}

void card::write() const
{
	h->write(*this);
}

void card::undo()
{
	static_cast<tab&>(*this) = h->undo();
}

card::~card()
{ 
	destroy();
}





