#include<string>
#include<iostream>
using namespace std;
class HasPtr{
public:
    HasPtr(const std::string &s):ps(new string(s)),i(0),ues(new std::size_t(1)){};
    HasPtr(const HasPtr &Orig):ps(Orig.ps),i(Orig.i),use(Orig.use){ ++*use;}//拷贝构造函数，不存在“原来”的计数器
    HasPtr &operator=(const HasPtr&Orig){
        ++*Orig.use;
        if(--*use==0)
        {
            delete ps;
            delete use;
        }
        ps=Orig.ps;
        use=Orig.use;
        i=Orig.i;
        return *this;
    };
    int id(const HasPtr){return myId;};
    ~HasPtr(){
        if(--*use){
            delete ps;
            delete use;
        }
    };
    friend void swap(HasPtr&,HasPtr&);
    friend bool operator<(const HasPtr&,const HasPtr&);
private:
    std::string *ps;
    int i;
    std::size_t *use;
};
inline void swap(HasPtr &lhs,HasPtr &rhs){
    using std::swap;
    swap(lhs.ps,rhs.ps);
    swap(lhs.i,rhs.i);
    swap(lhs.use,rhs.use);
}
bool operator<(const HasPtr &lhs,const HasPtr &rhs){
    return (*lhs.ps<*rhs.ps);
}