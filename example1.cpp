#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::sort;
#include<unordered_map>
using std::string;
using std::vector;
using std::unordered_map; 
using namespace std;
int main(int argc, char**argv)
{
    unordered_map<int,int> HashTable;
    string filename="testfile";
    cout<<filename<<endl;
    cout<<"hello github!"<<endl;
    vector<int> Array{1,2,3,4};
    for(auto i:Array)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}