#include <iostream>
using namespace std;
int main(){
	
	float saldoA, totalR, totalD1, saldoF, retirada1, retirada2;				//variaveis
	
			cout<< "BEM VINDO AO CITYBANK";										//impressão de boas vindas
		cout<< "\n\n\n";														//pular 3 linhas
		cout<<"Digite o valor do deposito = R$:";								//imprimir para usuario
		cin>>saldoA;															//usuario insere o valor de deposito em SaldoA
		 totalD1 = saldoA + totalD1;											//somando saldoA + totald1 e armazenando em totalD1
		cout<<"\n Saldo Atual = R$:"<<saldoA;									//imprimindo saldo atual
		
		cout<<"\n Gostaria de fazer uma retirada? = R$:";						//imprimi pergunta de retirada 1
		cin>> retirada1;														//insere valor de retirada
		 saldoA = saldoA - retirada1;											//subtrai valor de saldoA por retirada 1
		 
		cout<<"\n Gostaria de fazer alguma retirada? = R$:";					//imprimi pergunta de retirada 2			
		cin>> retirada2;														//insere valor de retirada 2
				 saldoA = saldoA - retirada2;									//subtrai valor de saldoA por retirada 2
				 
		cout<<"\n Saldo Atual = R$:"<<saldoA;									//imprimi saldo atual
		cout<<"\n\n\n";															//pula 3 linhas
		cout<< "Extrato do dia";												//imprime titulo sobre extrato
		cout<<"\n Valor da retirada 1 = R$:"<<retirada1;						//imprime o valor da primeira retirada
		cout<<"\n Valor da retirada 2 = R$:"<<retirada2;						//imprime o valor da segunda retirada
		cout<<"\n Valor total de retirada = R$:"<<retirada1 + retirada2;		//imprime o valor total das retiradas
		cout<<"\n Total de deposito = R$:"<<totalD1;							//imprime o valor total que foi depositado
		cout<<"\n Seu saldo total = R$:"<<saldoA;								//imprime oque restou
		
		cout<<"\n\n\n";															//pula 3 linas
	
	system("pause");
return 0;																		//FIM
}
