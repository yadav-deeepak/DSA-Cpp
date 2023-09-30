#include<iostream>
using namespace std;
int main(){
    string str ="Deepak Yadav";
    cout<<str<<endl;
    cout<<str[0]<<endl; //D string datatype is alse acting as a character array 

    //STRING AS INPUT
    string s1;
    cin>>s1; //cin will work only if the given string doesn't have spaces
    cout<<s1<<endl;

    //TAKING INPUIT WITH SPACES
     string s2;
     getline(cin,s2);
     cout<<s2;
}