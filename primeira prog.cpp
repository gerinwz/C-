#include <iostream> 
using namespace std;
int main( ) {
	float v1, v2, v3, v4, soma, media;
	cout<<"Digite o primeiro numero:";
	cin>>v1;
	
	cout<<"Digite o segundo numero: ";
	cin>>v2;
	
	cout<<"Digite o terceiro numero: ";
	cin>>v3;
	
	cout<<"Digite o quarto numero: ";
	cin>>v4;
	
	soma = v1+v2+v3+v4;
	media = soma/4;
	
	cout<<"\n media = "<<media;
	cout<<"\n soma = "<<soma;
	
	cout<<"\n\n\n";
	
	system("pause");
return 0;
}
