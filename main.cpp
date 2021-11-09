#include <iostream>
using namespace std;



int main(){
	
	//  ver 1.0
	
	double a,b,x0;
	
	
	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	if (a==0){
		cout << "Wspolczynnik a musi byc rozny od 0" << endl;
		cout << "Wprowadz a: ";
		cin>>a;
	}
   
	
	
	
	cout << "Podaj wspolczynnik b: ";
	cin >> b;
	

		
		x0=-(b/a); 
		
		cout << "Miejsce zerowe funkcji to: " << x0; 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
