/*���Բ�Ĺ�ϵ�����ж�*/
/*�㵽Բ�ĵľ���Ͱ뾶���жԱ�*/

/*�����п�������һ���� ��Ϊ�����еĳ�Ա*/

#include<iostream>
#include"point.h"
#include"circle.h"

using namespace std;

//����������point.h�� point.cpp��circle.h��circle.cpp�ļ���


//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c,Point &p)
{
	//��������֮������ƽ��
	int instance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�Ƚ����ǵĹ�ϵ
	if (instance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if(instance> rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����һ��Բ
	Circle c1;
	c1.setR(10);//���ð뾶
   
   //����һ����,������Բ��
	Point p1;
	p1.setX(10);
	p1.setY(0);

	c1.setCenter(p1);//����Բ��

	//����һ����
	Point p2;
	p2.setX(10);
	p2.setY(10);
	
	//�ж����ǵĹ�ϵ
	isInCircle(c1,p2);

	system("pause");
	return 0;
}