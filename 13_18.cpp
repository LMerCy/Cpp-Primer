#include<string>
#include<iostream>
using namespace std;
class Employee{
public:
    Employee()=default;
    Employee(const string name):myName(name){
        myId=unique++;
    }
    Employee(const Employee&)=delete;
    Employee &operator=(const Employee&)=delete;
    string name(const Employee){return myName};
    int id(const Employee){return myId};
    ~Employee()=default;
    
private:
    std::string myName;
    int myId;
    static int unique;
};
//int unique=0;
int main()
{
    Employee luo("lmc");
    std::cout<<luo.name<<std::endl;
    std::cout<<luo.id;
    system("pause");
}