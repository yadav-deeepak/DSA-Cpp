#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end()); //ASCII values ke order mesort krke dedega
    cout<<s;
}