#include<iostream>
using namespace std;
class Time             // ����Time��
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
/*���г�Ա����ӦΪ���ã����ݳ�ԱӦΪ˽��*/