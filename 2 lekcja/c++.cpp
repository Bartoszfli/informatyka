#include <iostream>
using namespace std;

int main (){
	
		// liczby ca�kowite - short, int long, long long, unsigmed short
		// liczby zmiennoprzecinkowych - float, double
		// ci�g znakow - string
		short a, b;
		cout << "podaj 1: ";
	cin >> a;
	cout << "podaj 2: ";
	cin >> b;
	
	// instrukcja warunkowa - if
	if(a > b){
		cout << a << " > " << b; // cout << zmienna << "tekst" zmienna;
	}
	// = operator przypisania
	// == operator porownanjia
	// <= mniejsze lub r�wne
	// != nie r�wne czemus
	else if(a == b){
		cout << a << " == " << b;
		
	}
		else{
			cout << a << " < " << b;
		}
	
	cout << endl;
	system("pause");
}