#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<iomanip>
class student
{
public:
	void set(int id, string name, int math, int english, int chinese)
	{
		this->id = id;
		this->name = name;
		this->math = math;
		this->english = english;
		this->chinese = chinese;
	}
	int sum()
	{
		return math + english + chinese;
	}
	int rank;
	friend bool compare(student& p1, student& p2);
	friend ostream& operator<< (ostream& cout, student& p);
private:
	int id;
	string name;
	int math;
	int english;
	int chinese;
};
bool compare(student& p1, student& p2)
{
	if (p1.sum() != p2.sum())
		return p1.sum() > p2.sum();
	else return p1.id >p2.id;
}
ostream& operator<< (ostream& cout, student& p)
{
	cout <<setw(4)<< p.rank <<setw(10)<< p.id <<setw(10)<< p.name <<setw(5)<< p.math <<setw(5)<< p.english <<setw(5)<< p.chinese;
	return cout;
}
int main()
{
	int n;
	cin >> n;
	if (n >= 10)
	{
		cout << "Please input 1-9.";
		exit(0);
	}
	student* students = new student[n];
	int id;
	string name;
	int math, english, chinese;
	for (int i = 0;i < n;i++)
	{
		cin >> id >> name >> math >> english >> chinese;
		students[i].set(id, name, math, english, chinese);
	}
	sort(students, students + n, compare);
	int currentRank = 1;
	int previousSum = students[0].sum();
	students[0].rank = currentRank;

	for (int i = 0; i < n;i++) {
		if (students[i].sum() != previousSum) {
			currentRank = i + 1;
		}
		students[i].rank = currentRank;
		previousSum = students[i].sum();
	}
	for (int i = n-1;i>=0;i--)
	{
		cout << students[i];
		cout << endl;
	}


}
