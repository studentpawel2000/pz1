#include <iostream>
#include <math.h>
#ifndef liniowa_hpp
#define liniowa_hpp

using namespace std;



void liniowa()
{
	float a,b,x0;

	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	
	cout << "Podaj wspolczynnik b: ";
	cin >> b;
	
       if(a!=0) {
	   
		x0=-(b/a); 
	}
	   else {
	   	x0=0;
	   }

		cout << "Miejsce zerowe funkcji to: " << x0; 
}
#endif
