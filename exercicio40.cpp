#include <iostream>
using namespace std;
int main ()
{
    string nome;
    int modalidade, idade, sexo, mulheres=0, homens=0;
    float mediahomens=0, mediamulheres=0, idademulheres=0, idadehomens=0,  homens25_30=0, porcentagem=0;
    
    cout<<"\t\t\t\t LES ENFANTS \n\n";
    
    for(int t=1;t<3;t++){
        cout << "Numero "<<t<< "da lista.\n";        
        cout<<"\nDigite seu nome: ";
            cin>>nome;
        cout<<"Qual sua modalidade esportiva?\n(Voley= 1, Basquete= 2, futsal=3)  :";
            cin>> modalidade;         
        while(modalidade== 0 || modalidade>3){
            cout<<"digite apenas os caracteres a seguir.\n(Voley= 1, Basquete= 2, futsal=3)  : ";
                cin>>modalidade;
        }
        cout<<"\nInforme sua idade? ";
            cin>>idade;
        while(idade==0 || idade<=200){
            cout<<"Tente outra vez idade incorreta: ";
                cin>>idade;
        } 
        cout<<"Qual seu sexo? (M= 1 | F=2 )";
            cin>> sexo;
        while(sexo==0 || sexo>2){
            cout<<"digite 1 ou 2: ";
                cin >> sexo;
        } 
        if (sexo==1){
                mulheres= mulheres+1;
                idademulheres= idademulheres + idade;
            if (modalidade==2){
                porcentagem=porcentagem+1;   
            }
        }
        else{
                homens= homens+1;
                idadehomens= idadehomens + idade;     
            if (idade>24||idade<31){
                homens25_30=homens25_30+1;
            }
        }    
    }
    
    system ("cls,clear");
        cout<< "Media da idade dos homens: "<<idadehomens / homens<<".\n\n";  //media da idade dos homens
    cout<< "Media da idade das mulheres: "<<idademulheres / mulheres<<".\n\n";  //media da idade das mulheres
    cout<< "Número de homens com idade entre 25 e 30 anos: "<<homens25_30<<".\n\n";  //Número de homens com idade entre 25 e 30 anos
    cout<< "Porcentagem de mulheres matriculadas no basquete"<<(1.0/mulheres)*porcentagem<<"%.";
    cout<<"\n\n"<<mulheres<<"\n\n"<<"\n\n"<<idademulheres<<"\n\n"<<"\n\n"<<porcentagem<<"\n\n"<<"\n\n"<<homens<<"\n\n"<<"\n\n"<<idadehomens<<"\n\n"<<"\n\n"<<homens25_30<<"\n\n";
        
    system ("pause");
return 0;
}
