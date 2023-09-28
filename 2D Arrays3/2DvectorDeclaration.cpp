#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(4,2); //creates a vector of size 4 and initaialize it witth 2
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

   vector< vector<int> > v1(3,vector<int> (4,2)); //creates a vector of 3 rows and 4 cols and initialise it with 2
   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v1[i][j]<<" ";
    }cout<<endl;
   } 
}