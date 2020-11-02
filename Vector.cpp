#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=10,m=20;
  int arr[]={1,2,3,4,5};
  int size=sizeof(arr)/sizeof(arr[0]);
  
    vector<int> a(n,m); //initialises 'n' values with the value 'm'
    vector<int> b{2,3,4,5}; //initialises the vector with the specified values
    vector<int> c(arr,arr+size); //initialises the vector from the specified range of the array
    vector<int> d(b.begin(),b.end()); // initialises the vector from the specified range of another vector
  
  //Iterators
    for(vector<int>::iterator i=b.begin();i<b.end();i++)  or   for(auto i=b.begin();i<b.end();i++)
    cout<<*i<<" "; //use of begin() and end()


  //Capacity
    cout<<a.size()<<" "; //size of the vector
    cout<<a.resize(5); //resizes the vector, the new empty values are initialised to '0'
    cout<<a.empty(); //returns '1' if the vector is empty and '0' if it is not empty
  
  
  //Element access
    cout<<b[2]; // access the element at 2 postion of the vector
    cout<<b.at(2); //access the element at 2 position of the vector
    cout<<b.front(); //front() returns the first element of the vector
    cout<<b.back(); //back() returns  last element of the vector
    cout<<*b.data(); //data() returns  a  'pointer' to the first element of the vector
 
 
  //Modifiers
    upper_bound(b.begin(),b.end(),24) //[Works only for sorted vectors] returns an 'iterator' to the element greater than the value if present.
                                    //if not present returns iterator to the last element
    lower_bound(b.begin(),b.end(),25) //[Works only for sorted vectors] returns an 'iterator' to the element greater than or equalto  the value if present.
                                    //if not present returns iterator to the last element
    b.push_back(5); //inserts element at the end
    b.pop_back(); //deletes the element at the end
    b.insert(b.begin(),2); //inserst element at the specified postion
    b.emplace(b.begin(),3); //similar to insert , but more efficient
    b.emplace_back(9); //inserts element at the end
    b.erase(b.begin(), b.begin()+5); // deletes the element in the specified range
    b.clear(); // deletes all the elements of the vector
    swap(b.begin()+2,b.end()-3); //swaps the specified elements
    b.swap(a); //swaps the contents of the two vectors
  
  return 0;
}
