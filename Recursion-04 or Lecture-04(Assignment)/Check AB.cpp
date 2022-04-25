// Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'

// If all the rules are followed by the given string, return true otherwise return false.
// Input format :
// String S

// Output format :
// 'true' or 'false'

// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.

// Sample Input 1 :
// abb

// Sample Output 1 :
// true

// Sample Input 2 :
// abababa

// Sample Output 2 :
// false


#include<bits/stdc++.h>
using namespace std;

bool check(string input){
	if(input.size()==0){
		return true;
	}
	
	if(input[0]=='a'){
		if(input[1]=='\0' || input[1]=='a' || (input.substr(1,2))=="bb"){
			check(input.substr(1));
		}else{
			return false;
		}
	}
	
	if((input.substr(0,1))=="bb"){
		if(input[1]=='\0' || input[1]=='a'){
			check(input.substr(2));
		}else{
			return false;
		}
	}
	
}


int main(){
	
	string input;
	bool result ;
	cin>>input;
	
	if(input[0]=='a'){
		result = check(input);
	}else{
		result = false;
	}
	
	if(result==1){
		cout<<"true";
	}else{
		cout<<"false";
	}
	
}
