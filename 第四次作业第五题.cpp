#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int* dp = new int[s.length()];
	for(int i=0;i<s.length();i++)
	{
		dp[i] = 1;
	}
	int maxvalue = 0;
	for (int i = 0;i < s.length();i++)
	{
		for (int j = 0;j < i;j++)
		{
			if (s[i] >= s[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		maxvalue = max(maxvalue, dp[i]);
	}
	cout << maxvalue;


}
