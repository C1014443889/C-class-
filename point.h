#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream>

using namespace std;

//ͷ�ļ�������������
//�������
class Point
{
public:
	//�����ṩ�����ӿ�
	//����x��y����
	void setX(int x);

	void setY(int y);


	//��ȡx��y����
	int getX();

	int getY();


	//x��y��������Ϊ����
private:
	int m_X;
	int m_Y;
};
