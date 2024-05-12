#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int m, n;
	cin >> m;
	int i, j;
	char* s1 = new char[m];
	char x;
	for (i = 0;i < m;i++)
	{
		cin >> x;
		s1[i] = x;
	}
	cin >> n;
	char* s2 = new char[n];
	for (i = 0;i < n;i++)
	{
		cin >> x;
		s2[i] = x;
	}
	vector<char>p1, p2;
	for (i = 0;i < m;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (s1[i] == s2[j])
			{
				p1.push_back(s1[i]);
			}
		}
	}
	for (i = 0;i < m;i++)
	{
		bool work = true;
		for (j = 0;j < p1.size();j++)
		{
			if (s1[i] == p1[j])
			{
				work = false;
				break;
			}
		}
		if (work == true)
		{
			p2.push_back(s1[i]);
		}
	}
	for (i = 0;i < n;i++)
	{
		bool work = true;
		for (j = 0;j < p1.size();j++)
		{
			if (s2[i] == p1[j])
			{
				work = false;
				break;
			}
		}
		if (work == true)
		{
			p2.push_back(s2[i]);
		}
	}
	sort(p2.begin(), p2.end());
	for (auto s : p2)
	{
		cout << s << " ";
	}
}
