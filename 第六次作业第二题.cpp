#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int num = s.size();
	vector<int>p1(num + 1, 0);
	vector<int>p(num + 1, 0);
	for(int i=0;i<num;i++)
	{
		p[i] = s[num-i-1] - 48;
	}
	p[0]=p[0]+1;
	int work = 0;
	for (int i = 0;i <=num;i++)
	{
		work = p[i];
		if (work > 9)
		{
			p1[i] = work % 10;
			p[i + 1] += 1;
		}
		else p1[i] = p[i];
	}
	int flag = 0;
	for (int i =num;i>=0;i--)
	{
		if (p1[i] != 0)
		{
			flag = i;
			break;
		}
	}
	for (int i = flag;i >= 0;i--)
	{
		cout << p1[i];
	}
}
