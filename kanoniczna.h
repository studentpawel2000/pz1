#include <iostream>
#include <math.h>
#ifndef kanoniczna_hpp
#define kanoniczna_hpp

using namespace std;



void kanoniczna()
{
	
	double x0,x1,p,q,a;
	
	cout << "Postac kanoniczna"<<endl<<endl;
	//  ver 1.4
	
	
	
	cout << "Podaj wspolczynnik p: "; cin >> p;	
	cout << "Podaj wspolczynnik q: "; cin >> q;
	 if(q > 0){
	 
    cout<<"Niema takiej funkcji kwadratowej  ";
	exit(0); 
	}//sprawdzanie warunku a
	cout << "Podaj wspolczynnik a: "; cin >> a;

		
		x0=p+(sqrt(-q/a)); 
		x1=p-(sqrt(-q/a));
		
		cout << "Miejsce zerowe funkcji to: " << x0 <<endl; 
		cout << "Miejsce zerowe funkcji to: " << x1; 
}
#endif
