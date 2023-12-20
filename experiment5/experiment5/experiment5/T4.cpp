#include<iostream>
#include<cstring>
using namespace std;

class Student 
{
public:
	int num, score;
};

void max(Student *p)
{
	Student* t,*m;
	int max;
	for (t =p,m=t,max=t->score;t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			m = t;
		}
	}
	cout << m->num<< endl;
}
int main()
{
	Student p[5];
	string turn = "12345";
	for (int i = 0; i < 5; i++)
	{
		cout << "student" << turn[i]<<":";
		cin >> p[i].num >> p[i].score;
	}
	cout << "the one who has the highest score:";
	max(p);
	return 0;
}