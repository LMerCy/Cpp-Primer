#include<iostream>
#include"process.h"
using namespace std;

class numbered
{
public:
    numbered(){
        mysn = unique++;
        std::cout<<"call constructor"<<std::endl;
    }
    numbered(const numbered &Orig){
        mysn=Orig.unique++;
        std::cout<<"call copy constructor"<<std::endl;
    }
    int mysn;
    static int unique;
};
int numbered::unique=10;
void f(const numbered &s){
    std::cout<<s.mysn<<std::endl;
}
int main()
{
    numbered a,b=a,c=b,d(a);
    f(a);
    f(b);
    f(c);
    f(d);
    system("pause");
}