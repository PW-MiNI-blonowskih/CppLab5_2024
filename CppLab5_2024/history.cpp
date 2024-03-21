#include "history.h"

history::history(const tab& picture) : n{ 1 }
{
	h[0] = new (std::nothrow) tab(picture);
}
	
void history::write(const tab& picture)
{
	if (n < N) {
		h[n] = new (std::nothrow) tab(picture);
		++n;
	}
	else {
		for (int i = 0; i < N - 1; ++i) {
			h[i] = h[i + 1];
		}
		h[n - 1] = new (std::nothrow) tab(picture);
	}
}
		
tab history::undo()
{
	if (n == 1) {
		return *(h[0]);
	} 
	else {
		--n;
		h[n] = nullptr; // XD
		return *(h[n - 1]);
	}
}

void history::clear()
{
	h[0] = h[n - 1];
	n = 1;
	for (int i = 1; i < N; ++i) {
		h[i] = nullptr; // XD
	}

}

history::~history()
{
	for (int i = 0; i < N; ++i) {
		delete h[i];
	}
}
