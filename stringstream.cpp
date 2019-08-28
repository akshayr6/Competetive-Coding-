// C++ program to remove spaces using stringstream 
#include<bits/stdc++.h> 
using namespace std; 

void convert(string str){
	int x;
	double y;
	stringstream ss(str);
	ss>>x;
	cout<<"the value of integer : "<<x<<endl;
	ss>>y;
	cout<<"the value of double : "<<y<<endl;
	}
void count(string str){
	stringstream ss(str);
  	string word;
  	long long int count=0;
  	while(!ss.eof()){
    	ss>>word;
      	count++;
    }
  	cout<<"The count is : "<<count<<endl;
}

void frequency(string str){
	stringstream ss(str);
  	string temp;
  	map<string,int> M;
  	while(!ss.eof()){
    	ss>>temp;
      	M[temp]++;
    }
  	for(auto i:M)
      cout<<i->first<<" = "<<i->second<<endl;
}

void removespace(string str){
	stringstream ss(str);
  	string temp,word;
  	
  	while(!ss.eof()){
  		ss>>temp;
      	word+=temp;
    }
  	cout<<word<<endl;
}

int main(){
string s="Raja Reddy is the best there ever was";
string number="12345.66";
count(s);
frequency(s);
removespace(s);
convert(s); //the output is:  the value of integer : 12345
// the value of double : 0.66
return 0;
}
