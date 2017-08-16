#include<vector>
#include<numeric>
#include<process.h>
#include<iostream>
using namespace std;
int main()
{
    vector<int> vec1{1,2,3,4};
    int sum = accumulate(vec1.cbegin(),vec1.cend(),0);
    cout<<"sum:"<<sum<<endl;
    system("pause");
    return 0;
}