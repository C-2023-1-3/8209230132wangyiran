#include<iostream>
using namespace std;
class Time             // 定义Time类
{private:
    int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void display()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.input();
	t1.display();

	return 0;
}
/*类中成员函数应为公用，数据成员应为私有*/