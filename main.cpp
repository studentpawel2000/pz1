#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	//  ver 1.4
	
	double x0,x1,p,q,a;
	
	cout << "Podaj wspolczynnik p: "; cin >> p;	
	cout << "Podaj wspolczynnik q: "; cin >> q;
	cout << "Podaj wspolczynnik a: "; cin >> a;

		
		x0=p+(sqrt(-q/a)); 
		x1=p-(sqrt(-q/a));
		
		cout << "Miejsce zerowe funkcji to: " << x0; 
		cout << "Miejsce zerowe funkcji to: " << x1; 
		
	return 0;
}
