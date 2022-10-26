#include<iostream>
using namespace std;
int main(){
	
		string n;
		int	t;
		float s;
		cout<<"\nQual seu nome?\n";
			cin>>n;
		cout<<"\nQual turno trabalha 1, 2 ou 3?\n";
			cin>>t;
		cout<<n;
		if(t == 1){
			cout<<" \nFuncionario Turno 1 \nSalario R$:450,00";
		}
		else if (t == 2){
			cout<<"\nFuncionario Turno 2 \nSalario R$:490,00";
		}
		else{
			cout<<"\nFuncionario Turno 3 \nSalario R$:650,00";
		}
		cout<<"\n\n";
	
	system("pause");
	return 0;
}
