#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="123456";
    int x=stoi(s);
    cout<<x<<endl;

    string str="1234567891234"; //this no is too long integer variable can't store it so we use long long ""
    long long y=stoll(str);
    cout<<y;
}