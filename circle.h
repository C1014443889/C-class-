#pragma once      //��ֹͷ�ļ��ذ���
#include<iostream>
#include"point.h"

using namespace std;

//����Բ��
class Circle
{
public:
	//�����ṩ�����ӿ�
	//���ð뾶����ȡ�뾶
	void setR(int r);
	int getR();
	//����Բ�ģ���ȡԲ��(����һ������)
	void setCenter(Point center);
	//��ȡԲ��
	Point getCenter();

private:
	//�뾶
	int m_r;
	//ʹ�õ��ඨ��Բ��
	Point m_center;

};
