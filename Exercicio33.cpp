#include<iostream>
using namespace std;
int main(){
		int i;
		float rd;
		string n;
		
		cout<< "\nQual seu nome?\n:";
			cin>>n;
		cout<<"\nQual valor medio mensaldo salario\n";
			cin>>rd;
				cout<<"\nQual sua idade?\n:";
			cin>>i;
		if(rd <= 1000.00){
			cout<<"\nClasse Media Baixa ";
		} 	
		else if (rd <= 3500.00){
			cout<<"\n Classe Media ";
		}
		else {
			cout<<"\nClasse Media alta ";
		}

		if(i <= 15){
			cout<<"\nCategoria infantil";
		} 	
		else if (i <= 18){
			cout<<"\nCategoria Juvenil";
		}
		else {
			cout<<"\nCategoria Adulto";
		}
		cout<<"\n\n\n";
	system("pause");
return 0;
}
