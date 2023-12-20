#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60; y = 80;
	}
	void setPoint(int i, int j);
	void display();
};
void Point::setPoint(int i, int j)
{
	x = 60 + i;
	y = 80+ j;
}
void Point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
	Point obj;
	obj.display();
	obj.setPoint(3,2);
	obj.display();
	return 0;
}