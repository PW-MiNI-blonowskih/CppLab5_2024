#pragma once



class history
{
private: //wszystko prywatne (ale dostêpne dla klasy card)

	static const int N = 4;		//maksymalna iloœæ obrazków w historii
	tab* h[N]{nullptr};
	int n;		// 1<=n<=N
				// zawsze w historii pozostaje co najmniej 1 obrazek (o indeksie 0)

	history(const tab& picture);	// od razu na pocz¹tku do historii wpisujemy bie¿¹cy obrazek (indeks 0)
	

	//TODO
	//zdefiniuj zabroniony: konstruktor bezparametrowy, kopiowanie, operator=


	void write(const tab& picture);	// na koniec tablicy wstawiamy bie¿¹cy obrazek, 
									// jeœli brakuje miejsca, to trzeba je zaplanowaæ (jak?)
	
	tab undo();		// jeœli w historii mamy tylko 1 obrazek (ile==1), to go zwracamy
					// wpp zwracamy przedostatni
					// (zawsze w historii pozostaje co najmniej 1 obrazek)
	
	void clear();  //czyszczenie historii
	
	~history();

	friend class card;
};