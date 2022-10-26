#include <iostream>
using namespace std;
int main()
{
	string n;
	float t,ip,tp, it;
	
	cout << "\nQual seu nome?\n";
		cin >> n;
	cout<<"\nInforme o numero do seu telefone:\n ";
		cin>>t;
	cout<<"\nInforme o total de impulsos utilizados:\n ";
		cin>>ip;
	cout<<"\nInforme o numero total te interurbanos:\n ";
		cin>>it;
	cout<<"\nInforme o tipo de servico\n 1 residencial 2 para comercial:\n ";
		cin>>tp;
	if(tp==1 && ip<=100){
		cout<<"Sua tarifa e de: "<<((38.14*0.05)*it)+38.14;
			cout<<"\n";	
	}
	else
		if(tp==1 && ip>100){
			cout<<"Sua tarifa e de: "<<((38.14*0.05)*it)+38.14+((ip-100)*0.15);
				cout<<"\n";	
		}
	else
		if(tp==2 && ip<=100){
			cout<<"Sua tarifa e de: "<<((64.69*0.05)*it)+64.69;
				cout<<"\n";			
		}
	else
		if(tp==2 && ip>100){
			cout<<"Sua tarifa e de: "<<((64.69*0.05)*it)+64.69+((ip-100)*0.15);
				cout<<"\n";
		}
	cout<<"\n\n\n";	
	
	system("pause");
	return 0;
}
