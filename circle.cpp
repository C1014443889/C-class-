#include"circle.h"

//源文件只要函数的实现

	//设置半径，获取半径
	void Circle::setR(int r)
	{
		m_r = r;
	}
	int Circle::getR()
	{
		return m_r;
	}
	//设置圆心，获取圆心(传入一个点类)
	void Circle::setCenter(Point center)
	{
		m_center = center;
	}

	//获取圆心
	Point Circle::getCenter()
	{
		return m_center;
	}
