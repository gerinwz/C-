#include<iostream>
#define MAX 10
using namespace std;
int main(){
	string nome , a_nome[10];
	float sph, sl[10];
	int ht ;
	
	for (int xy = 0; xy < 10; xy++){
		cout<<"Nome:\n";
			cin>>nome;
			a_nome[xy] = nome + a_nome[xy];
		cout<<"Informe a quantidade de horas trabalhadas: \nHoras trabalhadas:";
			cin>>ht;
		cout<<"Valor do salario por hora: \nR$:";
			cin>>sph;
		cout<<"Funcionario "<< nome;
		cout<<" recebe salario liquido de R$:"<<(sph*ht)*0.89;
			sl[xy] = (sph*ht)*0.89;
		cout<<"\n\n";
		system ("cls");
	}
	for (int xy = 0; xy < 10; xy++){
		cout << "\nO Funcionario " << a_nome[xy] << " tem salarios Liguido de R$:" << sl[xy] << endl; 
	}
	system ("pause");
	return 0;
}
