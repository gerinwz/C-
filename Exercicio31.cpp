#include<iostream>
using namespace std;
int main(){
	string n;																		//Variavel nome (n)
	float h, c, sb;																	//(h)horas trabalhadas e (c)classe funcional (sb) Salario Bruto
		cout<< "\t\t\t\tBem Vindo a SNOB\n";
		cout<< "\t\nQual seu nome?\t\nDigite seu nome:";							//usuario inserir valor a variavel nome (n)
			cin>>n;																	//valor inserido na variavel nome (n)
		cout<< "\t\nDigite valor total trabalhados em hora?\t\nDigite o valor:";	//usuario inserir valor a variavel horas trabalhadas (H)
			cin>>h;																	//valor inserido na variavel horas trabalhadas (h)
		cout<< "\t\nDigite sua classe funcional 1 ou 2:\t\nDigite a classe:";		//usuario inserir valor a variavel Classe Funcional (c)
			cin>>c;																	//valor inserido na variavel Classe Funcional (c)	
		if(c == 1){																	//codição se classe é igual a 1
			sb = h*5.00;															//se a classe for igual a 1 executar soma h*5.00 e guardar em SB
		}
		else{ 																		//se não tiver a condição estabelecida no if
			sb = h*9.00;															//se a classe for igual a 2 executar soma h*9.00 e guardar em SB
		}
		cout<<"\nNome:\n"<<n;														//imprimir nome
		cout<< "\nTrabalhou "<<h; cout<<" horas.";									//imprimir total de horas trabalhadas
		cout<<"\nSalario Bruto:"<<sb;												//Imprimir Salario bruto
		cout<<"\nSalario liquido:"<<0.89*sb;										//imprimir salario liguido
		cout<<"\n\n\n";
	system("pause");																//FIM
return 0;

}
