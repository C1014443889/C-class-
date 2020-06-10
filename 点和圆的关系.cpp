/*点和圆的关系案例判断*/
/*点到圆心的距离和半径进行对比*/

/*在类中可以让另一个类 作为本类中的成员*/

#include<iostream>
#include"point.h"
#include"circle.h"

using namespace std;

//其他代码在point.h， point.cpp，circle.h，circle.cpp文件中


//判断点和圆的关系
void isInCircle(Circle &c,Point &p)
{
	//计算两点之间距离的平方
	int instance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//比较它们的关系
	if (instance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if(instance> rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建一个圆
	Circle c1;
	c1.setR(10);//设置半径
   
   //创建一个点,用来作圆心
	Point p1;
	p1.setX(10);
	p1.setY(0);

	c1.setCenter(p1);//设置圆心

	//创建一个点
	Point p2;
	p2.setX(10);
	p2.setY(10);
	
	//判断它们的关系
	isInCircle(c1,p2);

	system("pause");
	return 0;
}