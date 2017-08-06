#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>
#include <process.h>
using std::list; using std::vector; using std::cout; using std::endl;using std::string;
int main()
{
	vector<int> ivec1(5, 10);
	vector<int> ivec2(6, 10);
	if (ivec1 == ivec2)
		cout << "equal" << std::endl;
	else
	{
		cout << "unequal" << std::endl;
	}
	system("pause");
	return 0;
}