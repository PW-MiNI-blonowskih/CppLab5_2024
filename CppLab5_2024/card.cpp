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
	egg e{};
	draw(e);
}

void card::write() const
{
	h->write(*this);
}

void card::undo()
{
	tab temp = h->undo();

	if (temp.size() != size()) {
		reset(temp.size());
	}

	for (int i = 0; i < size(); ++i) {
		for (int j = 0; j < size(); ++j) {
			(*this)(i, j) = temp(i, j);
		}
	}
}

card::~card()
{ 
	destroy();
}





