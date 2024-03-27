#include <iostream>
#include <string>

using namespace std;
int sub_ans[9999];

void sub(string s1, string s2)
{
	bool isMinus = false;
	if (s1.size() < s2.size()) isMinus = true;
	for (int i = s1.size() - 1; i > 0; i--)
	{
		sub_ans[i] += s1[i] - s2[i];
		if (sub_ans[i] < 0)
		{
			sub_ans[i] *= -1;
			sub_ans[i - 1]--;
		}
	}
	cout << "sub" << "           >> ";
	if (isMinus) cout << '-';
	int index = 0;
	while(index < s1.size() - 1 && !sub_ans[index]) index++;
	for (int i = index; i < s1.size(); i++)
	{
		cout << sub_ans[i];
	}
}