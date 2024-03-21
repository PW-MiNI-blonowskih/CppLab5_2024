 #pragma once
#include <iostream>
#include "element.h" 

class tab
{
private:
	element* t;		// dynamiczna tablica o wymiarze m*m reprezentuj�ca tablic� kwadratow�
	int	m;			// wymiar tablicy (mxm)

protected:
	void init(int m);	// tylko przydziela pami�� na dynamiczn� talic� t
	void fill(const element& el, const element* t=nullptr);	// wype�nia podan� warto�ci�
	void destroy();		// zwolnienie pami�ci po tablicy t

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

