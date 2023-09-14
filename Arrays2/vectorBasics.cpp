#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you need not mention the size 
    //inserting or for input dont use []
    v.push_back(6);
    cout<<v.size()<<endl; //tells the size of vector how many elemnts are present in it
    cout<<"capacity is "<<v.capacity()<<endl; //Tells the capacity of the vector
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<"capacity is "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<"capacity is "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<"capacity is "<<v.capacity()<<endl;

    //if you want to use or update then use [] brackets
    v[0]=88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}
