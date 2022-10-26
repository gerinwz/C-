#include <iostream>
using namespace std;
int main(){
	
	float saldoA, totalR, totalD1, saldoF, retirada1, retirada2;
	
		cout<< "BEM VINDO AO CITYBANK";
		cout<< "\n\n\n";
		cout<<"Digite o valor do deposito = R$:";
		    cin>>saldoA;
		     totalD1 = saldoA + totalD1;
		cout<<"\n Saldo Atual = R$:"<<saldoA;
		
		cout<<"\n Gostaria de fazer uma retirada? = R$:";
		    cin>> retirada1;
		         saldoA = saldoA - retirada1;
		 
		cout<<"\n Gostaria de fazer alguma retirada? = R$:";
		     cin>> retirada2;
				 saldoA = saldoA - retirada2;
				 
		cout<<"\n Saldo Atual = R$:"<<saldoA;
		cout<<"\n\n\n";	
		cout<< "Extrato do dia";
		cout<<"\n Valor da retirada 1 = R$:"<<retirada1;
		cout<<"\n Valor da retirada 2 = R$:"<<retirada2;
		cout<<"\n Valor total de retirada = R$:"<<retirada1 + retirada2;
		cout<<"\n Total de deposito = R$:"<<totalD1;
		cout<<"\n Seu saldo total = R$:"<<saldoA;
		
		cout.precision (3);
		cout<<"\n\n\n";	
	
	system("pause");
return 0;
}
