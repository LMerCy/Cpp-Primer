#include <iostream>
#include <vector>
#include <list>
#include <process.h>
using namespace std;
int main()
{
	int ia[] = { 0,1,2,3,5,8,13,21,55,89 };
	vector<int> ivec(ia, end(ia));
	list<int> lis(ivec.begin(), ivec.end());

	for (auto i = ivec.begin();i != ivec.end();)
	{
		if (*i % 2 == 0)
			i=ivec.erase(i);
		else
			++i;
	}
	for (auto i = lis.begin();i != lis.end();)
	{
		if (*i % 2 == 1)
			i=lis.erase(i);
		else
			++i;
	}
	for (auto i : ivec) cout << i << " ";
	cout << endl;
	for (auto i : lis) cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}