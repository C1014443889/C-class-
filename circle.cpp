#include"circle.h"

//Դ�ļ�ֻҪ������ʵ��

	//���ð뾶����ȡ�뾶
	void Circle::setR(int r)
	{
		m_r = r;
	}
	int Circle::getR()
	{
		return m_r;
	}
	//����Բ�ģ���ȡԲ��(����һ������)
	void Circle::setCenter(Point center)
	{
		m_center = center;
	}

	//��ȡԲ��
	Point Circle::getCenter()
	{
		return m_center;
	}
