#include <vector>
#include <iostream>
#include "process.h"
using namespace std;
using Ptr = vector<int>*;
auto foo() {
	return new vector<int>{};
}
auto read(Ptr vec)
{
	for (int i;std::cout << "pls enter:\n", std::cin >> i;vec->push_back(i));
	return vec;
}
void print(Ptr vec) {
	for (auto i : (*vec))
		cout << i << endl;
}
int main() {
	auto vec = read(foo());
	print(vec);
    delete vec;
    system("pause");
	return 0;
}