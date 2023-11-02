#include <iostream>
using namespace std;

int main (){
	
		// liczby ca³kowite - short, int long, long long, unsigmed short
		// liczby zmiennoprzecinkowych - float, double
		// ci¹g znakow - string
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
	// <= mniejsze lub równe
	// != nie równe czemus
	else if(a == b){
		cout << a << " == " << b;
		
	}
		else{
			cout << a << " < " << b;
		}
	
	cout << endl;
	system("pause");
}