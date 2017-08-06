#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>
#include <process.h>
using std::list; using std::vector; using std::cout; using std::endl;using std::string;
int main()
{
	list<int> ivec1(5, 10);
	vector<int> ivec2(6, 10);
    vector<int> ivec3(ivec1.begin(),ivec1.end());
	if (ivec3 == ivec2)
		cout << "equal" << std::endl;
	else
	{
		cout << "unequal" << std::endl;
	}
	system("pause");
	return 0;
}