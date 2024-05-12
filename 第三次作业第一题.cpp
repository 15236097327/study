#include<iostream>
#include<vector>
#include<set>
using namespace std;
bool sushu(int x)
{
	int i = 2;
	for (i = 2;i < x;i++)
	{
		if (x % i == 0)
		{
			break;
		}
	}
	if (x == i)
	{
		return true;
	}
	else 
		return false;
}
int main()
{
	int n;
	cin >> n;
	vector<int>p1;
	set<int>s;
	while (n--)
	{
		int x;
		cin >> x;
		p1.push_back(x);
	}
	for (int i = 0;i < p1.size();i++)
	{
		for (int j = 2;j <= p1[i];)
		{
			if (sushu(j) && p1[i] % j == 0)
			{
				s.insert(j);
				p1[i] /= j;
			}
			else 
				j++;
		}
	}
	for (const auto& num : s) {
		std::cout << num << " ";
	}
	return 0;


}
