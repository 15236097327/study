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
		s2.push_back(x);//����
		s.insert(x);//����ȥ�ز���
	}
	sort(s2.begin(), s2.end());//����
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
