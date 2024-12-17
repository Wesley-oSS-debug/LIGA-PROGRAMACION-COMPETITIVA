// numero faltante
#include <iostream>

using namespace std;

	// por shellsort
	void ordena(int A[] , int long long n){
		int k=n;
		int i,cen,aux;
		while(k>0){
			k=k/2; // division entera
			cen=1;
			while (cen==1){
				cen=0;
				i=0;
				while (i+k<n){
					if(A[i+k]<A[i]){
						aux=A[i];
						A[i]=A[i+k];
						A[i+k]=aux;
						cen=1;
					}
					i++;
				}
			}
		}
	}

int main(){
	int long long n;
	cin>>n;
	//arreglo dinamico
	int *A= new int[n-1];
	for(int i=0;i<n-1;i++){
		cin>>A[i];
	}
	ordena(A,n-1);
	for(int j=0;j<n;j++){
		if(A[j]!=j+1){
			cout<<j+1;
			break;
		}
	}
	
	return 0;
}