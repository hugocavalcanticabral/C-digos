# include <iostream>
# define TAM 50

using namespace std;
int main (){
	float B[TAM],H[TAM],A[TAM];
	int maior,i = 1;
	cout<<"Parar se inserir dimensoes negativas."<<endl;
	do{
		cout<<"Insira a base do retangulo "<<i<<" :";
		cin>>B[i];
		cout<<"Insira a altura do retangulo "<<i<<" :";
		cin>>H[i];
		A[i] = B[i]*H[i];
		if(i == 1){
			maior = 1;
		
		if(A[i]>A[maior]){
			maior = i;
		}
		i++;
	}while((B[i-1]>0) && (H[i-1]>0));
	cout<<"Maior area: "<<A[maior]<<" Essa area e a do retangulo: "<<maior;
	return 0;
}
