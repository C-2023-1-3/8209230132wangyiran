#include<iostream>
using namespace std;

int main()
{
	void count(const char s[], int counts[]);
	char s[100];
	int counts[26];
	cout << "������һ���ַ���";
	cin.getline(s, 100);
	count(s,counts);


	return 0;
}
void count(const char s[], int counts[])
{
	int size = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < size; i++)
		{
			counts[s[i] - 'a']++;//��Сд����Ҫ����
			counts[s[i] - 'A']++;
		}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << (char)(i + 'a') << ":" << counts[i] << "  times" << endl;

	}

}