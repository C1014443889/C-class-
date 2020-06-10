#include"point.h"


//源文件只要函数的实现

void Point::setX(int x)  //表明是Point作用于下的成员函数
{
	m_X = x;
}

void Point::setY(int y)
{
	m_Y = y;
}

//获取x、y坐标
int Point::getX()
{
	return m_X;
}

int Point::getY()
{
	return m_Y;
}



