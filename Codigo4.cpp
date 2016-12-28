# include <iostream>

using namespace std;

int Primo(int N);
{
	bool b = true;
	for(int i =2;i<N;i++){
		if(N%i == 0){
			b = false;
			break;
		}
	}
	return b;
}
int main (){
	int n;
	cin>>n;
	if(Primo(n)){
		cout<<"O numero e primo."<<endl;
	}
	else{
		cout<<"O numero nao e primo."<<endl;
	}
	return 0;
}
