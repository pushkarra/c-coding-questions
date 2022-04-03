// Problem Description:
// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n

// Output Format :
// All possible strings in different lines

// Constraints :
// 1 <= n <= 10^6

// Sample Input:
// 23

// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf


#include<bits/stdc++.h>
using namespace std;

string number_string(int p){
	if(p==0 || p==1){
		return "";
	}else if(p==2){
		return "abc";
	}else if(p==3){
		return "def";
	}else if(p==4){
		return "ghi";
	}else if(p==5){
		return "jkl";
	}else if(p==6){
		return "mno";
	}else if(p==7){
		return "pqrs";
	}else if(p==8){
		return "tuv";
	}else if(p==9){
		return "wxyz";
	}
}


void modified_subsequences(int n, string output){
	
	if(n==0){
		cout<<output<<endl;
		return;
	}
	
	int r = n%10;
	n =n/10;
	
	string input = number_string(r);
	
	modified_subsequences(n , input[0] + output);
	modified_subsequences(n , input[1] + output);
	modified_subsequences(n , input[2] + output);
	
}

int main(){
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	string output="";

	modified_subsequences(n,output);
		
}
	