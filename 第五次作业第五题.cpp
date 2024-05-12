#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int m;
	cin >> m;
	vector<int>p1;
	int x;
	for (int i = 0;i < m;i++)
	{
		cin >> x;
		p1.push_back(x);
	}
	int n;
	cin >> n;
	vector<int>p2;
	for (int i = 0;i < n;i++)
	{
		cin >> x;
		p2.push_back(x);
	}
	vector<int>p3;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p1[i] == p2[j])
			{
				p3.push_back(p1[i]);
			}
		}
	}
	vector<int>ans;
	for (int i = 0;i < m;i++)
	{
		bool find = true;
		for (int j = 0;j < p3.size();j++)
		{
			if (p1[i] == p3[j])
			{
				find = false;
				break;
			}
		}
		if (find == true)
		{
			ans.push_back(p1[i]);
		}
	}
	for (int i = 0;i <n;i++)
	{
		bool find = true;
		for (int j = 0;j < p3.size();j++)
		{
			if (p2[i] == p3[j])
			{
				find = false;
				break;
			}
		}
		if (find == true)
		{
			ans.push_back(p2[i]);
		}
	}
	sort(ans.begin(), ans.end());
	for (auto s : ans)
	{
		cout << s << " ";
	}

}
