#include <iostream>
using namespace std;

int main(){
	int wysokosc, szerokosc;
	cout << "podaj szerokość";
	cin >> szerokosc;
	cout << "podaj wysokość";
	cin >> wysokosc;
/* Ibjrenebtacha
   i = i +1
   i += 1
   i++
   dekrementacja
   i = i - 1
   i -= 1
   i--
   for(wartoscPoczatkowa; warunekKonczacy; krok)
   */
    // i - zmienna lokalna, istnieje tylko w klamrach petli
    
    // petla zagniezdzona
    for(int i = 0; i < wysokosc; i++){
    	for(int j = 0; j < szerokosc; j++)
    	cout << "*";
    cout << endl;
	if(i == 0) cout << "*";
	else if(i == wysokosc -1 ) cout << "*";
	else cout << " ";	
	}
    
    
    cout << endl;
    system("pause");
}


