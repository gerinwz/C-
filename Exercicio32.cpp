#include<iostream>
using namespace std;
int main (){
	string n;
	float sb,sl;
	
	cout<< "\nDigite seu nome:";			
		cin>> n;
	cout<< "\nInsira salario bruto: ";
		cin>> sb;
	if (sb <= 800.00){
		cout<< "\n9% de desconto:";
			sl = sb - (sb*0.09);
	}
	 else 
	 	if(sb <= 1500.00){
	 		cout << "\n10% de desconto:" ;
		 		sl = sb - (0.10*sb);
	 }
	 else{
	 	cout << "\n11% de desconto:" ;
		 	sl = sb-(0.11*sb);
	 }
	 cout<<"\n\n";
	 cout<< "\n\n Nome:"<<n;
	 cout<< "\n\nSalario Liguido: R$:" <<sl;
	 cout<<"\n\n\n";
	system("pause");
	return 0;
} 
