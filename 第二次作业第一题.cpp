#include<iostream>
using namespace std;
class Changfangxing
{
public:
Changfangxing();
Changfangxing(int);
Changfangxing(int,int);
~Changfangxing();
void print();
void setchang(int a);
void setchanghekuan(int a,int b);
private:
int x=1, y=1;
};
Changfangxing::Changfangxing()
{
}
Changfangxing::Changfangxing(int a)
{
x=a;
}
Changfangxing::Changfangxing(int x,int y)
{
this ->x=x;
this->y=y;
}
Changfangxing::~Changfangxing()
{}
void Changfangxing::setchang(int a)
{
x=a;
}
void Changfangxing::setchanghekuan(int b,int c)
{x=b;
y=c;
}
void  Changfangxing::print()
{
cout<<x<<" "<<y<<" "<<x*2+y*2<<" "<<x*y<<endl;
}
int main()
{
int a,b,c;
cin>>a;//
cin>>b>>c;
Changfangxing ch1,ch2(3),ch3(4,5);
ch1.print();
ch2.print();
ch3.print();
ch1.setchang(a);
ch1.print();
ch3.setchanghekuan(b,c);
ch3.print();
return 0;
}

