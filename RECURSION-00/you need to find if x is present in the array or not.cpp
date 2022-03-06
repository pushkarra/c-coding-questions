// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.


#include<iostream>
#include<cmath>
using namespace std;

bool find(int arr[], int n, int x){
	if(n<=0){
		return false;
	}
	
	if(arr[n]==x){
		return true;
	}
		
	find(arr,n-1,x);
}

int main(){
	
	int n,x,arr[10];
	cin>>n;
	cout<<"enter the elements of the array : ";
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element you want to find : ";
	cin>>x;
	bool result=find(arr,n,x);
	cout<<result;
}