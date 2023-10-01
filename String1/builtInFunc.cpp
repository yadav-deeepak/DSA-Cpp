#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    cout<<"Enter the string";
    getline(cin,str);
    cout<<str.length()<<endl;//returns the size of string

    string s="abcd";
    s.push_back('e'); //This will add e at the last of the string abcd
    s.push_back('f'); //abcdef
    cout<<s<<endl;
    s.pop_back();//This will delete element from the last abcde
    cout<<s<<endl;

    string s1="abc";
    string s2="def";
    s1=s1+s2; //This will combine 2 strings
    cout<<s1<<endl;
   // reverse (s1.begin(),s1.end());// reverse the string
    


}