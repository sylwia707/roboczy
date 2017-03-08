#include <iostream>
using namespace std;

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
	
	return 0;
}
