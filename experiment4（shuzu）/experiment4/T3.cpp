#include<iostream>
using namespace std;

int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i]=true;
	}//��һ��ͬѧʹ���й��ӱ�Ϊ����
	for (int i = 1; i < 100; i++)
	{
		
		    for (int k=i;k<100;k+=i+1)//ÿ��ͬѧ�Ĳ���
		    {
				if (arr[k] == 0)
				{
					arr[k] = true;
				}
				else {
					arr[k] = false;
				}
		    }
		
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i]==1)
		{
			cout << i+1 << " ";
		}
	}




	return 0;
}
