#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#define FALSE 0
#define TRUE 1
using namespace std;

int main()
{
	srand(time (NULL));
	
	int aleatorio=rand()%(100);
	int juegoterminado=FALSE;
	int intentos=5;
	int numeroingresado;
	
	cout<<"estoy adivinado un numero entre 0 y 100 "<<endl;
	cout<<" puedes adivinar cual es? \n"<<endl;
	
	while (juegoterminado==FALSE){
		cout<<"ingresa el numero: "<<endl;
		cin>> numeroingresado;
		
		if(numeroingresado==aleatorio){
			cout<<"ACERTASTE! Ese era el numero que pensaba\n"<<endl;
			juegoterminado=TRUE;
		}else{
			cout<<" Ese no es el numero \n"<<endl;
		}
		
		intentos--;
		if(intentos>0 && juegoterminado ==FALSE){
			cout<<"te quedan "<<intentos<<" intentos"<<endl;
			if (intentos>1){
				cout<<"s\n"<<endl;
			}else{
				cout<<"\n"<<endl;
			}
		}else{
				cout<<"el numero que pense fue \n"<<aleatorio<<endl;
				juegoterminado = TRUE;
			}
		
	}
	return 0;
}
