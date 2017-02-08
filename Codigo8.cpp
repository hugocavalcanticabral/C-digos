#include <iostream>
                
using namespace std;            
                
int main(){             
        float n,soma,media;             
        int p,pesoTotal;                
        soma = 0;               
        do{             
                cout<<"Insira o numero: ";              
                cin>>n;         
                if(n>=0){               
                        cout<<"Insira o peso: ";                
                        cin>>p;         
                        soma = soma + n*p;              
                        pesoTotal = pesoTotal + p               
                }               
        }while(n>=0);           
        media = soma/pesoTotal;         
        cout<<"A media ponderada: "<<media;             
        return 0;               
}

