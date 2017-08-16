#include<algorithm>
#include<vector>
#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    vector<int> vec1 ={1,2,3,4,2,1,3,4,5,2,1,4,3,5};
    int countnum = count(vec1.begin(),vec1.end(),1);
    cout << "num:"<<countnum<<endl;
    system("pause");
    return 0;
}