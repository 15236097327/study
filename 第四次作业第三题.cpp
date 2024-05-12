#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int m = s1.length();
	int n = s2.length();
	int len = 0;
	int index = 0;
	int** dp = new int*[m+1];
	for (int i = 0;i <=m;i++)
	{
		dp[i] = new int [n+1];
	}
	for (int i = 0;i < m+1;i++)
	{
		for (int j = 0;j <n+1;j++)
		{
			dp[i][j] = 0;
		}
	}
	for (int i = 1;i <=m;i++)
	{
		for (int j = 1;j <=n;j++)
		{
			if (s1[i-1] == s2[j-1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
				if (dp[i][j] > len)
				{
					len = dp[i][j];
					index = i-len;
				}
			}
			else 
				dp[i][j] = 0;
		}
	}
	string ans = s1.substr(index, len);
	for (auto s : ans)
	{
		cout << s;
	}
	if (ans.length() == 0)
	{
		cout << "No Answer";
	}
	
}

