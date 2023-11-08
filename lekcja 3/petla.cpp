#include <iostream>
using namespace std;

int main(){
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
   for(int i = 0; i < 100; i+=2){ // i - zmienna lokalna, istnieje tylko w klamrach petli
    cout << i << endl; 
    }
    // petla zagniezdzona
    for(int i = 0; i < 6; i++){
    	for(int j = 0; j < 3; j++)
    	cout << "*";
    cout << endl;	
	}
    
    
    cout << endl;
    system("pause");
}


