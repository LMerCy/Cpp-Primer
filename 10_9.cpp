#include<vector>
#include<numeric>
#include<process.h>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;
void elimDups(vector<string> &str)
{
    sort(str.begin(),str.end());
    auto end_unique=unique(str.begin(),str.end());
    str.erase(end_unique,str.end());
}
bool isShorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}
int main()
{
    vector<string> str1;
    string words;
    cout<<"input sentences:";
    while(cin>>words)
    {
         str1.push_back(words);
         cout<<"please go on";
    }
    elimDups(str1);
    stable_sort(str1.begin(),str1.end(),isShorter);
    for(auto i:str1) cout<<i<<" ";
    cout<<endl;
    system("pause");
    return 0;
}