#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>
#include <process.h>
using std::list; using std::vector; using std::cout; using std::endl;using std::string;
int main()
{
	list < const char*> ilst = {"a", "b", "c"};
	vector <string> strvec(ilst.begin(), ilst.end());
	vector <string> strvec1;
	strvec1.assign(ilst.begin(), ilst.end());
	for( auto i:ilst){
		std::cout << i << std::endl;
	}
	for (auto j : strvec)
		std::cout << j << std::endl;
	for (auto k : strvec1)
		std::cout << k << std::endl;
	system("pause");
	return 0;
}
