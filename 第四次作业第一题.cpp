#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n;
	cin >> n;
	vector<int>p;
	while (n--)
	{
		int x;
		cin >> x;
		p.push_back(x);
	}
	sort(p.begin(), p.end());
	vector<int>num;
	vector<int>ans;
	int flag = 1;
	int i;
	for ( i = 0;i < p.size() - 1;i++)
	{
		if (p[i] == p[i + 1] - 1)
		{
			flag++;
		}
		else
		{
			num.push_back(flag);
			flag = 1;
		}
	}
	if (i ==p.size()-1)
	{
		num.push_back(flag);
	}
	sort(num.begin(), num.end(),cmp);
	cout << num[0] << endl;
	flag = 1;
	for (int i = 0;i < p.size()-1;i++)
	{
		if (p[i] == p[i + 1] - 1)
		{
			flag++;
			ans.push_back(p[i]);
		}
		if (p[i] != p[i + 1] - 1)
		{
			ans.clear();
		}
		if (flag == num[0]&&flag>1)
		{
			int j;
			ans.push_back(ans[ans.size() - 1] + 1);
			for ( j = 0;j <= flag - 1;j++)
			{
				cout << ans[j] << " ";
			}
			cout << endl;
			flag = 1;
		}
	}




	
}
