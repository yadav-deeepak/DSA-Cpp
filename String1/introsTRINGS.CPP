#include<iostream>
using namespace std;
int main(){
    char str[5]={'a','c','b','d','e'}; //single ' ' me single character store hota h 
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
    }cout<<endl;
    char str1[5]="abcd"; //1 space is fixed for null character \0 each string ends with the nbull character
     for(int i=0;i<5;i++){
        cout<<str1[i]<<" ";
    }
}