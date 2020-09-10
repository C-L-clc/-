#include <stdio.h>

void huhuan_1(int, int);
void huhuan_2(int *, int * q);

int main(void)
{
	int a = 3;
	int b = 5;
	huhuan_2(&a, &b);
	printf("a =%d,b = %d\n", a, b);
}
//不能完成互换功能
void huhuan_1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	return;
}

//可以完成互换
void huhuan_2(int * p, int * q)
{
	int t;//如果要互换*p和*q的值，则t必须是int，不能是int*，否则会出错
	t = *p;//p是int*，*p是int
	*p = *q;
	*q = t;
}



