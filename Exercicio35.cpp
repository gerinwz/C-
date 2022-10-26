#include<iostream>
using namespace std;
int main(){
	string n;
	float cc, ht, t, sb,sa;
	
	cout<<"\nQual seu nome?\n";
		cin>>n;
	cout<<"\nQuantas horas foram trabalhadas?\n";
		cin>>ht;
	cout<<"\nQual codigo do seu cargo 1 ou 2?\n";
		cin>>cc;
		(cc == 1 || cc == 2) ? sb = ht*5.00 : sb = ht*8.00 ;
	cout<<"\nQual o turno você faz 1, 2 ou 3?\n";
		cin>>t;
		(t == 1 || t == 2 || t == 3 ) ? sa = sb*0.03 : sa = sb*0.04 ; sa = sb*0.05;
	cout << "\t\t\nPADARIA DA JUCRECIA\n";
	cout << "\nNome: " <<n;
	cout << "\nForam: "<<ht << " horas trabalhadas";
	cout << "\nCargo: " <<cc;
	cout << "\nTurno: " <<t;
	cout << "\nSalario Bruto: R$:"<<sb;
	cout << "\nComissao: R$:"<<sa;
	cout << "\nSalario + comissao: R$:"<<sb+sa;
	cout << "\n\n";
	system("pause");
	return 0;
}
