#include <iostream>  
#include <math.h>
using namespace std;

 float a,b,c,d,x,x1,x2; 

 int main ()

{ 
    int wybor;
    cout << "MENU: " << endl;
    cout << "1. Funkcja liniowa"<<endl;
    cout << "2. Funkcja kwadratowa"<<endl<<endl;
    cout << "Wybor: ";
    cin>>wybor;
    
    
    switch(wybor){
    	case 1:{
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

















	return 0;
			break;
		}
    	case 2:{
		
	

    cout<<"Program zwraca miejsce zerowe funkcji kwadratowej postaci ax^2+bx+c";                                                                                                                // Tekst wyświetlany na konsoli.

    cout<<"\n Podaj wspolczynnik kierunkowy prostej a =/0"<<endl; cin>>a;   
     if(a==0){
	 
    cout<<"Niema takiej funkcji kwadratowej  ";
	exit(0); 
	}//sprawdzanie warunku a
    cout<<"Podaj wspolczynnik b "<<endl; cin>>b;
    cout<<"Podaj wspolczynnik c "<<endl; cin>>c;


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
    	break;
		}
	}

}
