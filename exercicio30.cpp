#include<iostream>
using namespace std;
int main(){
	float a;																	//variavel altura(a)
	string s;																	//variavel sexo (s)
	
		cout << "\nQual seu sexo masculino ou feminino?\nDigite:";				//adicione valor a variavel sexo
			cin >> s;															//valor adicionado em sexo (s)
		if(s=="masculino"){
			cout << "\nDigite sua altura:";										//adicione valor a variavel altura conforme a condi��o
				cin >> a;														//valor inserido a autura (a)
			cout<<"\n\n O peso ideal para voce e :"<<(72.7*a)-58<<"\n\n\n";		//imprimir valor da opera��o caso a condi��o seja masculino
		}	
		else{
			cout << "\nDigite sua altura:";										//entrar com valor autura caso a condi��o anterior n�o seja masculino
				cin >> a;														//valor inserido a variavel altura (a)
			cout<<"\n\n O peso ideal para voce e :"<<(62.1*a)-44.7<<"\n\n\n";	//imprimir valor da oprea��o
		}
	system ("pause");
return 0;
}

