// test523.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class Point
{
public:
	Point(int x=0,int y=0):x(x),y(y){}
	int getX()const { return x; }
	int getY()const { return y; }
private:
	int x, y;
};
int main()
{
	Point a(4, 5);
	Point *p1 = &a;
	cout << p1->getX() << endl;
	cout << a.getX() << endl;
    return 0;
}

