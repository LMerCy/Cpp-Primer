#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>
#include <iostream>
#include <algorithm>
using std::vector; using std::string;
using namespace std;

class StrBlob {
private:
	std::shared_ptr<std::vector<std::string>> data;
public:
	StrBlob() :data(std::make_shared<vector<string>>()) { }
	StrBlob(std::initializer_list<std::string> il) :data(std::make_shared<vector<string>>(il)) { }
	std::string front() const {
		return (*data).front();
	}
	std::string back() const {
		return (*data).back();
	}
};