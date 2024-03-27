#include <iostream>
#include <string>

using namespace std;
int sum_ans[9999];

void sum(string s1, string s2)
{
	for (int i = s1.size() - 1; i > 0; i--)
	{
		sum_ans[i] += s1[i] + s2[i] - 96;
		if (sum_ans[i] >= 10)
		{
			sum_ans[i] %= 10;
			sum_ans[i - 1]++;
		}
	}
	cout << "sum" << "           >> ";
	if (sum_ans[0] != 0) cout << sum_ans[0];
	for (int i = 1; i < s1.size(); i++)
	{
		cout << sum_ans[i];
	}
	cout << endl;
}