#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    char max1='!',max2='!';
    for(int i=0;i<n;i++){
        if(max1<str[i]){
            max2=max1;
            max1=str[i];
        }
        else if(max2<str[i] && max1!=str[i])max2= str[i];
    }
    if(max2=='!')cout<<"No second largest no. is present";
    else cout<<"Second largest no. is :"<<max2;
}