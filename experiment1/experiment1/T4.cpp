#include <iostream>
#include <iomanip>
using namespace std;
extern int T5();
extern int T3();

int main()
{
	T3();

	unsigned int testUnint = 65534;
	double shishu = 3.14;

	cout << "output in oct unsigned int type:" << oct << testUnint << endl;
	cout << "output in int type:" << static_cast<int>(shishu) << endl;

	T5();
	return 0;
}