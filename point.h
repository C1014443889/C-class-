#pragma once  //防止头文件重复包含
#include<iostream>

using namespace std;

//头文件进行声明即可
//定义点类
class Point
{
public:
	//对外提供公共接口
	//设置x、y坐标
	void setX(int x);

	void setY(int y);


	//获取x、y坐标
	int getX();

	int getY();


	//x、y坐标设置为属性
private:
	int m_X;
	int m_Y;
};
