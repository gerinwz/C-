#include<iostream>
using namespace std;
int main(){
	string nome, sexo;
	float salario;
	int idade;
	
		cout<< "\nQual seu nome? \n Digite seu nome:";  					//entre com o valor para variavel nome
			cin >> nome;	
		cout<< "\nQual sua idade? \n Digite sua idade:";					// entre com o valor para variavel idade
			cin >> idade;
		cout<< "\nQual valor do seu salario?\n Digite seu salario:";		//entre com o valor para variavel salario
			cin >> salario;
		
		cout<<"\nQual seu sexo homen ou mulher? \n Digite:";				//entre com o valor para variavel sexo
            cin>> sexo;
            if(sexo=="homen"){ 												//se o sexo for = a homen
            	cout<< "\n\n idade:"<<idade;								//imprimir variavel idade
            }
            else{							
		       cout<< "\n\nSalario:"<<salario;								//se não for homen imprimir salario
            }
		cout << "\n\n\n";
	system("pause");
	return 0;
}
