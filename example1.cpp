#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using std::sort;
using std::string;
using std::vector;
using namespace std;
int main(int argc, char**argv)
{
    string filename="testfile";
    cout<<filename<<endl;
    cout<<"hello world!"<<endl;
    vector<int> Array{1,2,3,4};
    for(auto i:Array)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}