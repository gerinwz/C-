#include<iostream>
using namespace std;
int main(){
	system("cls");	
	string nome, v_nome[10];
	float mod_esp, v_mod_esp[10];						
	float  idade, m_idade[10], f_idade[10], sexo, f_media, m_media, soma=0;
	int m_sexo[10], f_sexo[10];					

	for (int xy = 0; xy < 10; xy++){
		cout<<"\t\t\t\tLES ENFANTS\n";
		cout<<"Digite seu nome:";
			cin>>nome;
				v_nome[xy] = nome + v_nome[xy];
		cout<<"\nDigite 0 para masculino ou 1 para feminino!\n\nDigite aqui 0 ou 1:";
			cin>>sexo;
		     (sexo == 0 || sexo == 1) ? m_sexo[xy] = 1: f_sexo[xy] = 1;
		cout<<"Digite sua Idade:";
			cin>>idade;
		     (sexo == 0 || sexo == 1) ? idade = m_idade[xy] : idade = f_idade[xy];
		         m_media = m_idade[xy]/m_sexo[xy];
		cout<<"Modalidade esportiva\n1 para Voley\n2 para basquete\n3 para futsal \n\nDigite um numero:";
			cin>>mod_esp;
		    	cout<<"\n\n";
			if(mod_esp == 1 || mod_esp == 2 || mod_esp == 3){
			}
			else{
			cout<<"Digite apenas 1, 2 ou 3 para Modalidade";
				cout<<"\n\n";
			}		
		system("cls");	
	}
	
	
		cout<<"\nMedia de idade dos Homens :"<<m_media;
		cout<<"\nMedia de idade das Mulheres:"<<f_media;
		cout<< "\n\n";
	system ("pause");
return 0;
}
		
		
