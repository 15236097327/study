#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	while (getchar() != ':')
	{

	}
	int n;
	cin >> n;
	set<int>s;
	vector<int>s2;
	int x;
	while (n--)
	{
		cin >> x;
		s2.push_back(x);//插入
		s.insert(x);//排序并去重插入
	}
	sort(s2.begin(), s2.end());//排序
	cout << "Sample Output:" << endl;
	for (auto& p : s2)
	{
		cout << p << " ";
	}
	cout << endl;
	for (auto& p : s)
	{
		cout << p << " ";
	}
	cout << endl;
}
