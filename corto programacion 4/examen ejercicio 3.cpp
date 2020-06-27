#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int numAlumnos;
	int j;
	int Notas;
	int contAprobados=0;
	int contReprobados=0;
	cout<<"ingrese numero de estudiantes"<<endl;
	cin>>numAlumnos;
	int arr[numAlumnos];
	cout<<"ingrese numero de calificaciones "<<endl;
	cin>>Notas;
	int arr2[Notas];
	cout<<"captura calificaciones:"<<endl;
	cout<<"*********************************\n";
	
	int k=0;
	for(int i=0;i<numAlumnos;i++){
		cout<<"Calificaciones del alumno"<<i+1<<endl;
		for( j=0;j<Notas;j++){
			cout<<"Calificacion"<<j+1<<endl;
			cin>>arr2[j];
			arr[j+k]=arr2[j];
			if (arr2[j]>=6){
				contAprobados++;
			}else{
			
			contReprobados++;
		} 
    }
}
 	k=k+Notas;
    	cout<<"Cantidad de notas Aprobadas"<<contAprobados<<endl;
        cout<<"Cantidad de notas Reprobadas"<<contReprobados<<endl;
           

return 0;
}




