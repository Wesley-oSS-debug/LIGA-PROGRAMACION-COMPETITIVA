//algoritmo extraño
#include <iostream>
using namespace std;

int main(){
	int long long num;
	 cin>>num;
	cout<<num<<" ";
	while(num!=1){
		if(num%2!=0){
			num=(num*3)+1;
			cout<<num<<" ";
		}else{
			num=num/2;
			cout<<num<<" ";
		}
	}
	return 0;
}

