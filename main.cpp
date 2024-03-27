#include <iostream>
#include <string>

using namespace std;

void sum(string s1, string s2);
void sub(string s1, string s2);

int main()
{
	string s1, s2;
	cout << "First number  >> ";
	cin >> s1;
	cout << "Second number >> ";
	cin >> s2;
	int size = s1.size() - s2.size();
	if (s1.size() < s2.size())
	{
		for (int i = 0; i < size * -1; i++)
		{
			s1 = '0' + s1;
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			s2 = '0' + s2;
		}
	}
	s1 = '0' + s1;
	s2 = '0' + s2;
	sum(s1, s2);
	sub(s1, s2);
}