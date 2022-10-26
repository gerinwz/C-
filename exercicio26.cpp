#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int 	n1, n2, soma, sub, mult, inteiro;
	float 	resultdivr,n11,n22, restdiv, potencia;
		
		cout<<"Digite primeiro numero:"; 				//primeiro numero a ser inserido
			cin>>n1;
			n11 = n1+n11;
		cout<<"Digite segundo numero:"; 				//segundo numero a ser inserido
			cin>>n2;
			n2 = n2+n22;
			
			soma 		= n1 + n2;						//soma dos dois numeros
			sub			= n1 - n2;						//subtra��o dos dois numeros
			mult 		= n1 * n2;						//multiplica��o dos dois numeros
		if(n2!=0){
			inteiro 	= n1 / n2;						//Quociente inteiro da divisao
			restdiv		= (n1 % n2); 					//resultado resto dadivisao
			resultdivr 	= n1 / n2;						//resultado da divisao real	<<(float) a/b;
			potencia	= pow(n1,n2);					//resultado da potencia��o 
	    }
			cout.precision (1.0);
			
		cout<<"\n Valores Somado = "<<soma;
		cout<<"\n Valores Subtraido = "<<sub;
		cout<<"\n Valores Multiplicados = "<<mult;
		cout<<"\n Valor Inteiro da Divisao = "<<inteiro;
		cout<<"\n Valor resto da Divisao = " <<restdiv;
		cout<<"\n Valor Divisao real = "<<resultdivr;
		cout<<"\n Valor potenciacao = "<<potencia;
		
		
		cout<<"\n\n";
		system("pause");
	return 0;
}
