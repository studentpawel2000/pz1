#include <iostream>
#include <math.h>
#ifndef kwadratowa_hpp
#define kwadratowa_hpp

using namespace std;



void kwadratowa()
{
	float a,b,c,d,x,x1,x2; 
	  cout<<"Program zwraca miejsce zerowe funkcji kwadratowej postaci ax^2+bx+c";                                                                                                                // Tekst wyświetlany na konsoli.

    cout<<endl<<"\n Podaj wspolczynnik kierunkowy prostej a =/0: ",cin>>a;   
     if(a==0){
	 
    cout<<"Nie ma takiej funkcji kwadratowej  ";
	exit(0); 
	}//sprawdzanie warunku a
    cout<<"Podaj wspolczynnik b: ",cin>>b;
    cout<<"Podaj wspolczynnik c: ", cin>>c;


    d=(b*b)-(4*a*c); 

    if(d>0) 

    {

        x1=(-b-sqrt(d))/(2*a);  // Wyznaczenie miejsca zerowego x1.

        x2=(-b+sqrt(d))/(2*a);  // Wyznaczenie miejsca zerowego x2.

        cout<<"Wynik to :\nx1 = "<<x1<<"\nx2 = "<<x2; // Wypisanie wyniku na konsoli.

    }

    if(d==0)  

    {

        x=-b/(2*a);  // Określenie miejsca zerowego.

        cout<<"Wynik to : \n x = "<<x;

    }

     if(d<0)  // Jeśli delta mniejsza od "0".

    {      

    cout<<"Brak rozwiazan";  // Wyświetlenie komentarza.

    }
	
}
#endif
