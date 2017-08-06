#include<list>
#include<vector>
#include<deque>
#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    
    list<int> listint{0,1,2,3,4,5};
    deque<int> jishu;
    deque<int> oushu;
    for(auto i:listint)
    {
        if(i % 2 == 0)
            jishu.push_back(i);
        else
            oushu.push_back(i);

    }
    for(auto i:jishu)
        std::cout<<i<<" ";
    cout<<endl;
    for(auto i:oushu)
         std::cout<<i<<" ";
    cout<<endl;
    system("pause");
    return 0;
}