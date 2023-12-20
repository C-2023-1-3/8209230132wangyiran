#include<iostream>
using namespace std;

class Computer
{
private:
	int length, width, height,v;
public:
	void input();
	void volume();
	void display();
};
void Computer::input()
{
	cout << "please input length:";
	cin >>length;
	cout << "please input width:";
	cin >> width;
	cout <<"please input height:";
	cin >> height;
}
void Computer::volume()
{
	v = length * width * height;
}
void Computer::display()
{
	cout << "the volume is " << v << endl;

}
int main()
{
	Computer obj[3];
	for (int i = 0; i < 3; i++)
	{
		obj[i].input();
		obj[i].volume();
		obj[i].display();
	}

	return 0;
}