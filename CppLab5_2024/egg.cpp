#include "egg.h"

egg::egg(const element& el) : el{ el } { }

void egg::draw(card& c) const
{
	//wszystko POZA jajem jest zamalowane
	//TODO
	int s = c.size() / 2;
	int r = s - 1;

	for (int i = 0; i < c.size(); ++i) {
		for (int j = 0; j < c.size(); ++j) {
			if (((i - s) * (i - s)) + ((j - s) * (j - s)) > r * r) {
				c(i, j) = el;
			}
		}
	}

}