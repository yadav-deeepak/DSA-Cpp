#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    cout<<"Enter the string :";
    getline(cin,str);

    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str;

}