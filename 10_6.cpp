#include<vector>
#include<numeric>
#include<process.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec1{1,2,3,4};
    fill_n(vec1.begin(),vec1.size(),0);
    for(auto i:vec1)
        cout<< i<<" ";
    cout<<endl;
    system("pause");
    return 0;
}