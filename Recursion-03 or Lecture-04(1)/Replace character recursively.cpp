// Problem Description:
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)

// Output Format :
// Updated string

// Constraints :
// 1 <= Length of String S <= 10^6

// Sample Input :
// abacd
// a x

// Sample Output :
// xbxcd

#include<bits/stdc++.h>
using namespace std;

void replace(char a[], char n, char x){
	if(a[0]=='\0'){
		return;
	}
	if(a[0]!=n){
		//no need to do something here as both if and else have to do same task after operation 
	}else{
		a[0]=x;
	}
	replace(a+1,n,x);
}


int main(){
	char a[20];
	cout<<"enter the character array : ";
	cin.getline(a,20);
	char n,x;
	cout<<"enter the characters you want to replace and the replacing character too ";
	cin>>n>>x;
	
	replace(a,n,x);
	
	cout<<a<<endl;
}