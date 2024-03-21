#include <iostream>
using namespace std;
#include <ctime>

#include "egg.h"

int main()
{
	const int M=40;			//startowy wymiar kartki MxM
	card c(M);				//kartka z samym jajem
	int pen =card::colors::YELLOW;	//kolor pisaka
	
	srand((unsigned)time(NULL));
	
	int	w=0;
	do  {
				cout<<c;	//zobaczmy obrazek

                cout<<"\nMENU:"<<endl;
				cout<<"1 - PATTERN"<<endl;
				cout<<"2 - NEW CARD WITH EGG"<<endl;
                cout<<"3 - UNDO"<<endl;
                cout<<"0 - END"<<endl;

                cout<<"Choose number: ";
                cin>>w;

                switch (w)
                {
					case 1:
						for (int i = 0; i < c.size() / 5; i++) // kilka szlaczk�w w ustalonym kolorze
							c.draw(pattern(rand() % c.size(), element(pen, 'O')));

						pen--;
						if (pen < card::colors::BLUE) pen = card::colors::YELLOW;

						c.write();		//etap 3
						
						break;
                   
					case 2: // nowa kartka (by� mo�e z nowym rozmiarem)
						{
							int m;

							do {
								cout << "Podaj wymiar nowego obrazka ("<<M<<" <= m <= "<<2*M<<") m=";
								cin >> m;
							} 
							while (m<M || m>2*M);


							c.reset(m);
							c.write();
						}
						break;

                    case 3:
						c.undo();		//etap 3
						break;

                }//switch

                
            } while (w != 0);
 
	return 0;
}
			