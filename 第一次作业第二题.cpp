const float PI = 3.14; 
class Circle
{
public:
Circle(float r)
{
m_r=r;
}
double getArea()
{
return PI*m_r*m_r;
}
double getGirth()
{return 2*PI*m_r;
}
private:
float m_r;
};
#include<iostream>
using namespace std;
int main()
{
	float r;
	cout << "请输入圆的半径：";
	cin >> r;                                     //从键盘接受半径的值
    Circle c1(r);                            //将值赋值给半径并调用定义好的函数
    cout<<"圆的面积为："<<c1.getArea()<<endl;
    Circle c2(r);
    cout<<"圆的周长为："<<c2.getGirth()<<endl;
}

