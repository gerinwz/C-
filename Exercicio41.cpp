#include<iostream>
using namespace std;
int main(){
    bool x;
    int y;

    y =  0;
    x = false;
    while (y != 6)
    {
        x = !x;
        y = y + 1;
        if (x){
            cout << " \n"<<y;
        }                                     //RESULTADO: 1, -2,  3, -4,  5, -6
        else{
            cout <<" \n"<< -y;
        }
    }
    cout<<"\n\n";
        system("pause");
    return(0);
}