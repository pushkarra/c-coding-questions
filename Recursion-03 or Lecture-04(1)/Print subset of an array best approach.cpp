// best approach

#include<bits/stdc++.h>
using namespace std;


void subset(int n, int a[],int i, int output[],int sz){
	
	if(i==n){
		for(int k=0;k<sz;k++){
			cout<<output[k]<<" ";
        }
        cout<<endl;
		return;
	}
	
	output[sz]=a[i];
	
    subset(n,a,i+1,output,sz+1);
    subset(n,a,i+1,output,sz);

	
}


int main(){
	int n,i,x,b=0,sz=0;
	cout<<"enter the size of array ";
	cin>>n;
	int a[n],output[100];
	cout<<"enter the elements inside the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	subset(n,a,b,output,sz);
	
}