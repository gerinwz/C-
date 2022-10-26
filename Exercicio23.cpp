#include <iostream> 
using namespace std;
int main( ) {
	float lp, m, d, soma,somap, media1, media2;					//variaveis
	 cout<<"Digite a nota de Lingua Portuguesa:";				//imprime pergunta para usuario
	     cin>>lp;												//insere valor
	 cout<<"Digite a nota de Matematica: ";						//imprime pergunta para usuario
	     cin>>m;												//insere valor
 	 cout<<"Digite a nota de Direito: ";						//imprime pergunta para usuario
	     cin>>d;												//insere valor
		 soma = lp+m+d;											//executa soma dos 3 valores inseridos e insere valor na variavel soma
		 somap= 2+4+3;											//executa soma dos 3 pesos e insere valor na variavel somap
		 media1 = soma/3;										//divide a variavel soma por 3 insere valor na variavel media 1
		 media2 = (lp * 2 + m * 4 + d * 3) /somap;				//multiplica a variavel inserida pelo valor do peso de cada prova e divide pela soma dos pesos
	 cout<<"\n Soma = "<<soma;									//imprime valor de soma
	 cout<<"\n Soma Peso = "<<somap;							//imprime valor da soma dos pesos
	 cout<<"\n Media Aritimetica = "<<media1;					//imprime valor da media aritimetica
	 cout<<"\n media Ponderada = "<<media2;						//imprime valor da media ponderada
	 cout<<"\n\n\n";											//pula 3 linas
	
system("pause");
return 0;														//fim
}
