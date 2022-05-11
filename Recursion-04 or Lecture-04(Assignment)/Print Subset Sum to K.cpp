// Problem Level: HARD
// Problem Description:
// Given an array A and an integer K, print all subsets of A which sum to K.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print them in different lines.
// Input format :
// Line 1 : Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K

// Sample Input:
// 9 
// 5 12 3 17 1 18 15 3 17 
// 6

// Sample Output:
// 3 3
// 5 1

#include<bits/stdc++.h>
using namespace std;


void subset(int a[],int n,int output[],int sz,int x){
	
	int sum=0;
	if(n==0){
		
		for(int k=0;k<sz;k++){
			sum=sum+output[k];
        }
        if(sum==x){
        	for(int k=0;k<sz;k++){
		    	cout<<output[k]<<" ";
            }
            cout<<endl;
        
		}
        return;
	}
	
	int temp[sz+1],i;
	
	for(i=0;i<sz;i++){
		temp[i]=output[i];
	}
	temp[i]=a[0];
	
	subset(a+1,n-1,temp,sz+1,x);
	subset(a+1,n-1,output,sz,x);

}





int main(){
	int n,i,sz=0,x;
	cout<<"enter the size of array ";
	cin>>n;
	int a[n],output[n];
	cout<<"enter the elements inside the array ";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the sum of subsets ";
	cin>>x;
	
	subset(a,n,output,sz,x);
	
}