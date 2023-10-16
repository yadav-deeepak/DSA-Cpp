#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    string str;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<str;
}