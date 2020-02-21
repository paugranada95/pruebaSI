/* */

#include <iostream>
using namespace std;

int main () {
	int numero = 0;
	int fibo = 0;
	
	cout << "Introduce cuantos numeros quieres para ver la serie:" << endl;
	cin >> numero;

	for(int i = 0; i <= numero; i++) {
		if (i == 0) {	
			fibo = 1;
		}
		else if (i == 1) {
			fibo = 1;
		}
		else if (i == 2) {
			fibo = 0;
		}
	cout << fibo << " + ";	
	}	
	
}