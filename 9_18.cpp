#include <algorithm>
#include <vector>
#include <iostream>
#include <list>
#include <string>
#include <deque>
#include <process.h>
using namespace std;
//using std::list; using std::vector; using std::cout; using std::endl;using std::string;using std::deque;
int main()
{
    deque<string> input;
    for (string str; cin >> str; input.push_back(str));
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;
	system("pause");
	return 0;
}