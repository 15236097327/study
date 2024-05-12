#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	while (getchar() != ':')
	{
	}
	long long a, n;
	cin >> a >> n;
	string s = to_string(a);
	vector<long long>p;
	for (long long i = 0;i < s.size();i++)
	{
		p.push_back(s[i] - 48);
	}
	long long num = p.size();
	long long number = num;
	int flag = 0;
	int work = 0;
	
	while (true)

	{
		if (flag == n)
			break;
		if (work == number)
		{
			break;
		}
		work++;
		
		for (int i = 0;i < num - 1;)
		{
			num = p.size();
			if (p[i] > p[i + 1])
			{
				p.erase(p.begin() + i);
				flag++;
				if (flag == n)
					break;
			}
			else i++;
			/*if (p[0] > p[1] && p[1] != 0)
			{
				p.erase(p.begin());
				flag++;
			}
			else
			{
				if (p[i] > p[i + 1] && i != 0)
				{
					p.erase(p.begin() + i);
					flag++;
					
				}
				else
					i++;
			}*/
		}
	}
	cout << endl;
	num = p.size();
	cout << "Sample Output:";
	cout << endl;
	int index = 0;
	while (true)
	{
		if (p[index] > 0)
			break;
		else index++;
	}
	for (int i = index;i < num&&i<number-n;i++)
	{
		cout << p[i];
	}
	cout << endl;
}
