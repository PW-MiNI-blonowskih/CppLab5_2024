 #pragma once
#include <iostream>

class element;

class tab
{
private:
	element* t;		// dynamiczna tablica o wymiarze m*m reprezentuj¹ca tablicê kwadratow¹
	int	m;			// wymiar tablicy (mxm)

protected:
	void init(int m);	// tylko przydziela pamiêæ na dynamiczn¹ talicê t
	void fill(const element& el, const element* t=nullptr);	// wype³nia podan¹ wartoœci¹
	void destroy();		// zwolnienie pamiêci po tablicy t

public:
	tab();
	tab(int m, const element& el);

	tab(const tab& t);
	tab& operator=(const tab& t);
	~tab();
	

	int size() const; 

	element& operator()(int i, int j);
	const element& operator()(int i, int j) const;

	friend std::ostream& operator<<(std::ostream& out, const tab& t); //TODO
};

