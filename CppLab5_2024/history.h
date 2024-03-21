#pragma once

#include "tab.h"

class history
{
private: //wszystko prywatne (ale dost�pne dla klasy card)

	static const int N = 4;		//maksymalna ilo�� obrazk�w w historii
	tab* h[N]{nullptr};
	int n;		// 1<=n<=N
				// zawsze w historii pozostaje co najmniej 1 obrazek (o indeksie 0)

	history(const tab& picture);	// od razu na pocz�tku do historii wpisujemy bie��cy obrazek (indeks 0)
	

	//TODO
	//zdefiniuj zabroniony: konstruktor bezparametrowy, kopiowanie, operator=


	void write(const tab& picture);	// na koniec tablicy wstawiamy bie��cy obrazek, 
									// je�li brakuje miejsca, to trzeba je zaplanowa� (jak?)
	
	tab undo();		// je�li w historii mamy tylko 1 obrazek (ile==1), to go zwracamy
					// wpp zwracamy przedostatni
					// (zawsze w historii pozostaje co najmniej 1 obrazek)
	
	void clear();  //czyszczenie historii
	
	~history();

	friend class card;
};