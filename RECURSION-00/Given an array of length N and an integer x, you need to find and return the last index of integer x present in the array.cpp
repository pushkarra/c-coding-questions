// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.


#include<iostream>
#include<cmath>
using namespace std;

int sum1(int n, int arr[], int x){

	if(n < 0){
		return -1;
	}
	if(arr[n]==x){
		return n;
	}
	sum1(n-1,arr,x);
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
	int result=sum1(n,arr,x);
	cout<<result;
}