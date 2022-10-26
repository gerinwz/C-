#include<iostream>
using namespace std;
	int main (){
		float c, f;
		cout<<"Digite o valor F:";
		cin>>f;
		
		c = (f - 32) * 5/9;
		cout.precision(2);
		cout<<"\n Valor em C = "<<c;

		cout<<"\n\n\n";		
		
		
	system ("pause");
	return 0;
	}
