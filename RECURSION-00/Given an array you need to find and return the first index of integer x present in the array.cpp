// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.


#include<iostream>
#include<cmath>
using namespace std;

int sum1(int n, int arr[], int x,int z){

	if(n == z){
		return -1;
	}
	if(arr[z]==x){
		return z;
	}
	sum1(n,arr,x,z+1);
}

int main(){
	
	int n,arr[10],x;
	cin>>n;
	cout<<"enter the elements of the array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element of the array you want to find : ";
	cin>>x;
	int result=sum1(n,arr,x,0);
	cout<<result;
}