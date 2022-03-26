#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int x){
	
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n,i,x;

	cout<<"enter the size of the array ";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the element you want to find in the array ";
	cin>>x;
	
	int result=linear_search(a,n,x);
	cout<<result;
	return 0;
	
}
