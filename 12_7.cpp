#include <vector>
#include <iostream>
#include <memory>
#include "process.h"
using namespace std;
using Ptr = shared_ptr<vector<int>>;
auto foo() {
	return  make_shared<vector<int>>();
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
    system("pause");
	return 0;
}