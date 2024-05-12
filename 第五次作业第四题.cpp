#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class connect
{
public:
	friend bool compare(const connect& p1,const connect& p2);
	friend ostream& operator<<(ostream& cout, connect& p);
	void setvalue(int x)
	{
		this->value = x;
	}
	void setindex(int x)
	{
		index = x;
	}
	int getindex()
	{
		return index;
	}
	int getvalue()
	{
		return value;
	}
private:
	int value;
	int index;
};
bool compare(const connect& p1,const  connect& p2)
{
	return p1.value<p2.value;
}
ostream& operator<<(ostream& cout, connect& p)
{
	cout << p.index;
	return cout;
}
int main()
{
	int m;
	cin >> m;
	int x;
	connect* p = new connect[m];
	connect* s = new connect[m];
	for (int i = 0;i < m;i++)
	{
		cin >> x;
		p[i].setvalue(x);
		s[i].setvalue(x);
	}
	sort(p, p+m, compare);
	int work =1;
	for (int i = 0;i < m-1;i++)
	{
		p[i].setindex(work);
		if (p[i].getvalue() != p[i + 1].getvalue())
		{
			work += 1;
		}
	}
	/*for (int i = 0;i < m;i++)
	{
		cout << p[i].getvalue() << " ";
	}
	cout << endl;*/
	p[m - 1].setindex(work);
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (s[i].getvalue() == p[j].getvalue())
			{
				s[i].setindex(p[j].getindex());
			}
		}
	}
	for (int i=0;i<m;i++)
	{
		cout <<s[i]<< " ";
	}
}
