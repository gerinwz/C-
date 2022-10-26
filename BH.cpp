#include <iostream> 
using namespace std;
int main( ) {
	float lp, m, d, soma,somap, media1, media2;
		cout << "Digite a nota de Lingua Portuguesa:";
		cin >> lp;
	
		cout<<"Digite a nota de Matematica: ";
		cin>>m;

		cout<<"Digite a nota de Direito: ";
		cin>>d;
		
			soma = lp+m+d;
			somap= 2+4+3;
			media1 = soma/3;
			media2 = (lp * 2 + m * 4 + d * 3) /somap;
				cout.precision (2);
	cout<<"\n Soma = "<<soma;
	cout<<"\n Soma Peso = "<<somap;
	cout<<"\n Media Aritimetica = "<<media1;
	cout<<"\n media Ponderadada = "<<media2;
	
	cout<<"\n\n\n";
	
	system("pause");
return 0;
}
