// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

#include<bits/stdc++.h>
using namespace std;

void replace(char input[]){
	if(input[0]=='\0'){
       return;
	}
	
	if(input[0]=='p' && input[1]=='i'){
		int n=strlen(input);
		input[0]='3';
		input[1]='.';
		
		for(int i=0;i<n;i++){
			input[n+2-i]=input[n-i];
		}
		
		input[2]='1';
		input[3]='4';
	}
	replace(input+1);
	
}

int main(){
	char str[100];
	cin.getline(str,100);
	replace(str);
	cout<<str<<endl;
}