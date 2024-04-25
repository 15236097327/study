#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int m, n;
	cin >> m ;
	int i = 0;
	vector<int>p;
	while (i<m)
	{
		int x;
		cin >> x;
		p.push_back(x);
			i++;
	}
	cin >> n;
	i = 0;
	while (i < n)
	{
		int x;
		cin >> x;
		p.push_back(x);
		i++;
	}
	sort(p.begin(), p.end());
	for (auto& s : p)
	{
		cout << s << " ";
	}
}