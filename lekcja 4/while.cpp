#include <iostream>
using namespace std;

int main (){


// while(warunek-zakonczenia(true))
short a = 2;
while(a <= 30){ // czy wykonac to.. ?
	
	cout << a << ",";
	a += 2;

}
cout << endl << endl;
// do... while()
short liczba;
do{
	cout << "podaj liczbe:";
	cin >> liczba;
	
}while(liczba != 5); // czy to powtorzyc.. ??
cout << endl;
system("pause");
}