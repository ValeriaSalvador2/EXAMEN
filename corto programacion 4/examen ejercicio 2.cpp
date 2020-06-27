#include <iostream>
#include<stdlib.h>
using namespace std;
 
const int sz = 25;
 
int main()
{
   float array[sz];
   float suma = 0.0;
   int contenlaMedia=0;
   int contnoMedia=0;
 
    cout << "\nDatos del array:\n";
    for( int i = 0; i < sz; i++ ) {
        cout << "(" << i + 1 << "/" << sz << "): ";
        cin >> array[i];
        suma += array[i];
        
    }
    cout << "Promedio: " << suma / sz << endl;
    if ((suma / sz )>=array[sz])
    {
    	contenlaMedia++;
	}else{
		contnoMedia++;
	}
   cout<<"Personas que no estan enla Media"<< contnoMedia <<endl;
   
    return 0;
}
 

