#include "12_2.h"
#include "process.h"
int main()
{
	StrBlob a{ "hello","world" };
    const StrBlob b{"good","luck"};
	cout << a.front() << endl;
	b.front()="thank you!";
    cout << b.front() << endl;
	system("pause");
	return 0;
}