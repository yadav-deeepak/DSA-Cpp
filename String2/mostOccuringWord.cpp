#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string s="Raghav is a maths teacher . He is a DSA mentor as well";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    int n=v.size();
    sort(v.begin(),v.end());
    int maxcount=1 ,count=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1])count++;
        else count=1;
        if(count == maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
}