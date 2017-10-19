#ifndef 13_5_h
#define 13_5_h
#include <string>
using namespace std;
class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)),i(0){ std::cout<<"调用构造函数\n";}
    HasPtr(const HasPtr &orig):ps(new std::string(*orig.ps)),i(orig.i){ std::cout<< "调用拷贝构造函数\n";}
    HasPtr& operator=(const HasPtr&)
    {
        std::string *tempps=new std::string(*orig.ps);
        delete ps;//删除原ps的内存。
        ps=tempps;
        i=orig.i;
        std::cout << "调用赋值函数\n";
        return *this;
    }
    ~HasPtr(){
        cout << "调用赋值函数\n";
        delete ps;
    }
private:
    std::string *ps;
    int i;
}
#endif