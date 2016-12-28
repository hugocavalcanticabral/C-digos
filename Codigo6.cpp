#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,x1,x2,delta;
	cout<<"Insira o coeficiente 'a': ";
	cin>>a;
	cout<<"Insira o coeficiente 'b': ";
	cin>>b;
	cout<<"Insira o coeficiente 'c': ";
	cin>>c;
	delta = (b*b) - (4*a*c);
	if(delta<0){
		cout<<"Nao tem raizes reais.";
		return 0;
	}
	x1 = ((-1*b) + sqrt(delta))/(2*a);
	x2 = ((-1*b) - sqrt delta )/(2*a);
	cout<<"As raizes da equacao: ("<<a<<"x^2) +("<<b<<"x) + ("<<c<<")"<<endl;
	cout<<endl;
	cout<<x1<<"  e  "<<x2;
	return 0;
}
