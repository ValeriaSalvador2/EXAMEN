#include<iostream>
using namespace std;
int main()
{
	int A;
	cout<<"\n Ingresa el a�o y te dire si es bisiesto o no: "<<endl;
	cin>>A;
	
	if((A%4==0) &&(A%100!=0) || (A%400==00)){
		cout<<"El a�o es bisiesto:  "<<endl;
	}else{
		cout<<"\EL a�o %d no es bisiesto"<<endl;
	}
	
	
	return 0;
}
