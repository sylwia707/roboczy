#include <iostream>
using namespace std;
#include "header1.h"
#include "header2.h"
int main()
{
	wypisz();
	cout<< "Podaj a";
	int a;
	cin >> a;
	cout<<endl;
	cout << "Podaj b";
	int b;
	cin >> b;
	cout << "Suma wynosi " << dodaj(a,b) <<endl;
	cout << "Iloczyn wynosi " << pomnoz(a,b) <<endl;



	    cout << "Podaj liczbe do podzielenia: ";
    double c, w;
    cin >> c;
    w = c/0;
    cout << "Brawo, udalo sie podzielic liczbe "<<a<<" przez zero ^^ Wynik to: "<< w << endl;	



char *ptr1;
               char *ptr2;
       
               ptr1 = (char *) malloc(512);
               ptr2 = (char *) malloc(512);
       
              ptr1=ptr2;
       
              free(ptr1);
              free(ptr2);
	return 0;
}
