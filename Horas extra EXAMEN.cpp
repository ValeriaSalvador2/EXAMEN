#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int horastrabajadas,pagoporhora,horasextra,pagoporextra,pagohoras,renta,seguro,AFP;
	int N=3;
	int i;
	for(int i=1;i<=N;i++)
	{
	cout<<"ingrese horas trabajadas:"<<endl<<endl;
	cin>>horastrabajadas;
	pagoporhora=(175*horastrabajadas/100);

	cout<<"el pago por hora es:\n\n"<<pagoporhora<<endl;
	cout<<"ingrese las horas extra:"<<endl;
	cin>>horasextra;
	pagoporextra=(250*horasextra/100);
	cout<<"el pago por horas extra es:\n\n"<<pagoporextra<<endl;
	pagohoras=(pagoporhora*30)+pagoporextra;
	cout<<"el salario total mas horas extra es:\n\n"<<pagohoras<<endl;
	seguro=pagohoras-(pagohoras*0.04);
	cout<<"salario con descuento de seguro es:\n\n"<<seguro<<endl;
	AFP=seguro-(seguro*0.0625);
	cout<<"el salario con descuento de AFP es:\n\n"<<AFP<<endl;
	if(pagohoras>=500)
	{
		renta=AFP-(AFP*0.10);
		cout<<" el salario con descuento de la renta es:\n\n"<<renta<<endl;
		cout<<"el total del salario es:\n\n"<<"$"<<renta<<endl;
	}else{
		cout<<"no se realiza en descuento de renta"<<endl;
		cout<<"el  salario real es:\n\n"<<"$"<<AFP<<endl;
	}
	cout<<i<<endl;
	}
	system("PAUSE");
	return 0;

}
