#include<iostream>
using namespace std;
int main(){
			
		string a;
		int f;
		float n1, n2, n3, n4, media, total;
			
			cout << "\nQual seu nome?\n";
				cin >> a ;
			cout << "\nNota 1?\n";
				cin >> n1 ;
			cout << "\nNota 2?\n";
				cin >> n2 ;				
			cout << "\nNota 3?\n";
				cin >> n3 ;	
			cout << "\nNota 4?\n";
				cin >> n4 ;
			cout << "\nQual a frequencia? \n";
				cin >> f;
				total = n1+n2+n3+n4;
				media = total/4;
			(total >= 60 && f >= 160) ? cout << "Aprovado" : cout << "Reprovado";
			cout << "\nNome:" <<a;
			cout << "\nNota total: " <<total;
			cout << "\nNNota Media: " <<media;
			cout << "\nFrequencia: " <<f;
			cout << "\n\n\n";
				
	system("pause");
	return 0;
}
