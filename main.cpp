#include <iostream>
using namespace std;

int main(){
	
	//  ver 1.4
	
	double a,b,x0,y,c;
	
	cout << "Podaj wspolczynnik a: "; cin >> a;	
	cout << "Podaj wspolczynnik b: "; cin >> b;
	cout << "Podaj wspolczynnik y: "; cin >> y;
	cout << "Podaj wspolczynnik c: "; cin >> c;
		
		x0=-(b*y-c)/a; 
		
		cout << "Miejsce zerowe funkcji to: " << x0; 
		
	return 0;
}
