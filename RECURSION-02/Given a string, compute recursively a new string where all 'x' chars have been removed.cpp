// Given a string, compute recursively a new string where all 'x' chars have been removed.

#include <iostream>
using namespace std;

#include<string.h>

void replace(char input[]){
	if(input[0]=='\0'){
		return;
	}
	if(input[0] != 'x'){
		replace(input+1);
	}
	else{
		int n=strlen(input);
		if(input[0]=='x'){
			for(int i=0;i<n;i++){
				input[i]=input[i+1];
			}

		}
		replace(input);
	}
	
}


int main() {
    char input[100];
    cin.getline(input, 100);
    replace(input);
    cout << input << endl;
}