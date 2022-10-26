#include<iostream>
using namespace std;
int main () {
	string nome;
    int numTel, qtdPulsos, tipoTel;
    float valInter, valInteru, valResi = 38.14, valComer = 64.69, valTotal;
    
    cout<<"Qual o número do telefone? ";
    cin>>numTel;
    cout<<"Qual o nome do cliente? ";
    cin>>nome;
    cout<<"Qual a quantidade de pulsos registrados? ";
    cin>>qtdPulsos;
    cout<<"Qual o valor total de ligações interurbanas? ";
    cin>>valInteru;
    cout<<"Qual o tipo do telefone? Digite 1 para Residencial ou 2 para Comercial. ";
    cin>>tipoTel;
    
    cout<<"Nome do cliente: "<<nome<<"\nNúmero de telefone: "<<numTel;
    if(tipoTel == 1){
        valTotal = valResi;
    }
    else if(tipoTel == 2){
        valTotal = valComer;
    }
    else{
        cout<<"Por favor, escolha uma das opções válidas!";
    }
    if(qtdPulsos > 100){
        valTotal += (qtdPulsos - 100) * 0.15;
        cout<<"\nValor do pulso acima de 100: "<<(qtdPulsos - 100) * 0.15;;
    }    
    if(valInteru > 0){
        valInteru = (valInteru * 5) / 100;
        valTotal += valInteru;
        cout<<"\nValor total de ligações interurbanas: "<<valInter;
    }
    cout<<"\nValor total da fatura: "<<valTotal;
    
	system("pause");
	return 0;
}
