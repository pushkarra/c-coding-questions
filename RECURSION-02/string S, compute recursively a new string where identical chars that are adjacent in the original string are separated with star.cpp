// string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*"
// Input format :
// String S

// Output format :
// Modified string

// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.

// Sample Input 1 :
// hello

// Sample Output 1:
// hel*lo

// Sample Input 2 :
// aaaa

// Sample Output 2 :
// a*a*a*a

#include<bits/stdc++.h>
using namespace std;

void replace(char str[]){
	int n=strlen(str);
	if(n==0){
		return;
	}
	if(str[0]==str[1]){
		for(int i=0;i<n;i++){
			str[n+1-i]=str[n-i];
		}
		str[1]='*';
	}
	replace(str+1);
}

int main(){
	char str[100];
	cin.getline(str,100);
	replace(str);
	cout<<str<<endl;
}