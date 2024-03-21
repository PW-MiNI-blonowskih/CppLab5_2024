#include "pattern.h"
#include "card.h"

pattern::pattern(int sx, const element& el) : sx{ sx }, el{ el } {}

void pattern::draw(card& c) const
{
	for (int j = 0; j < c.size(); ++j) {
		if (j % 2 == 0) {
			c(sx, j) = el;
		}
	}
}