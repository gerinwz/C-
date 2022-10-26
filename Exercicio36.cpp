#include<iostream>
using namespace std;
int main(){
		string nr;
		int nf;
		float m, total;
	
		cout << "\nNome do responsavel:\n";
			cin >> nr ;
		cout << "\nQuantos filhos estao matriculados?\n";
			cin >> nf;
			( nf == 1 || nf <= 3 || nf >= 4 ) ? m = 120 * 0.10 : m = 120*0.15;m = 120*0.15;

		total = 120*nf;
		cout <<"\nNome do responsavel:"<<nr;
		cout <<"\n Valor a Cheio: R$:"<<120*nf;
		cout <<"\n Valor de desconto: R$:" <<m;
		cout <<"\n Valor a pagar: R$:"<< total-m;
		cout << "\n\n\n";
	system ("pause");
	return 0;
}



//OPERADOR TENARIO
//Exemplo (media >= 5 ) ? cout << "aprovado" : cout << "reprovado";
