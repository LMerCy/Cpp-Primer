#include<vector>
#include<numeric>
#include<process.h>
#include<iostream>
using namespace std;
int main()
{
    vector<double> vec1{1.1,2.0,3.0,4.0};
    double sum = accumulate(vec1.cbegin(),vec1.cend(),0.0);//第三个参数决定了accumulate是何种类型数据的求和
    cout<<"sum:"<<sum<<endl;
    system("pause");
    return 0;
}