#pragma once      //防止头文件重包含
#include<iostream>
#include"point.h"

using namespace std;

//定义圆类
class Circle
{
public:
	//对外提供公共接口
	//设置半径，获取半径
	void setR(int r);
	int getR();
	//设置圆心，获取圆心(传入一个点类)
	void setCenter(Point center);
	//获取圆心
	Point getCenter();

private:
	//半径
	int m_r;
	//使用点类定义圆心
	Point m_center;

};
