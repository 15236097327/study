#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int**p = new int*[n];
	for (int i = 0;i < n;i++)
	{
		p[i] = new int[m];
	}
	int x;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			cin >> x;
			p[i][j]=x;
		}
	}
	int i, j, k, l;
	int work = 1;
	int number1 = 0;
	int number2 = 0;
	int flag = 0;
	for (j = 0;j < m && number2< m;)
	{
		work = 1;
		number1 = 0;
		for (i = 0;i < n&&number1<n;)
		{
			for (k = 0;k < n;k++)
			{
				if (p[i][j] > p[k][j])
				{
					i = k;
				}
			}
			number1++;
		}
		for (l = 0;l < m;l++)
		{
			if (p[i][j] < p[i][l])
			{
				work = 0;
			}
		}
		if (work == 0)
			j += 1;
		else
		{
			cout << p[i][j] << " " << i + 1 << " " << j + 1 << endl;
			j += 1;
			flag++;
		}
		number2++;

	}
	if (flag == 0)
	{
		cout << "No answer";
	}

}