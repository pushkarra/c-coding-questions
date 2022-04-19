#include<bits/stdc++.h>
using namespace std;

int subsequences(string s, string str[]){ 

	if(s.empty()){                                     // here we can also use s[0]=='\0' then...
		str[0]="";
		return 1;
	}
	
	string smallString = s.substr(1);                    // we are storing the substring of input string from index 1
	int outputSize = subsequences(smallString,str);  
	
	for(int i=0; i<outputSize;i++){
		str[i+outputSize] = s[0]+str[i];            
	}
	
	return 2*outputSize;                           
	}


int main(){
	
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	string* str = new string[100];
	
	int result = subsequences(s,str);
	
	cout<<"The subsequences of the string are: ";
	for(int i=0;i<result;i++){                  // the number of subsequences are in 2 power n but indexing is from 0 not 1;
		cout<<str[i]<<endl;
	}
	
	cout<<result;
	
}