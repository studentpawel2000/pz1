#include <iostream>  
#include <math.h>
#include "kwadratowa.h"
#include "liniowa.h"
#include "kanoniczna.h"
using namespace std;

 float a,b,c,d,x,x1,x2; 

 int main ()

{ 
    int wybor;
    cout << "MENU: " << endl;
    cout << "1. Funkcja liniowa"<<endl;
    cout << "2. Funkcja kwadratowa"<<endl;
    cout << "3. Funkcja kwadratowa postac kanoniczna"<<endl<<endl;
    cout << "Wybor: ";
    cin>>wybor;
    
    if(wybor <1 && wybor > 3) cout<<endl<<"Wprowadz numer z listy",cin>>wybor;
	
    
    
    switch(wybor){
    	case 1:{
    		liniowa();
 
			break;
		}
    	case 2:{
		kwadratowa();

    	break;
		}
		case 3:{
			kanoniczna();
			break;
		}
	}

}
