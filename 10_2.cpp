#include<algorithm>
#include<string>
#include<list>
#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    list<string> vec1 ={"a","p","p","l","e"};
    int countnum = count(vec1.begin(),vec1.end(),"p");
    cout << "num:"<<countnum<<endl;
    system("pause");
    return 0;
}