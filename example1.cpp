#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using namespace std;
int main(int argc, char**argv)
{
    cout<<"hello world!"<<endl;
    vector<int> Array{1,2,3,4};
    for(auto i:Array)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}