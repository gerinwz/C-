#include<iostream>
using namespace std;
int main(){
	bool b1, b2, b3;
	
		b1=1;
		b2=1;
		b3=1;
		
		if(b1){
		     cout << "\ncomando1";						// Exercicio A: comando 1 + comando4
		}
		else if (b2){
		     if (b3){
			     cout<< "\ncomando2";
			}				                         	// Exercicio B: comando 2
		}
		        else {
			        cout<<"\ncomando3";					// Exercicio C: comando 2
		}
	cout<<"\ncomando4";								    //Exercicio D: para comando 4 (0)falso,(0)falso,(0)falso
				
		cout<<"\n\n\n";

	system("pause");
return 0;
}
