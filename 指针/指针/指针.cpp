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
//������ɻ�������
void huhuan_1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	return;
}

//������ɻ���
void huhuan_2(int * p, int * q)
{
	int t;//���Ҫ����*p��*q��ֵ����t������int��������int*����������
	t = *p;//p��int*��*p��int
	*p = *q;
	*q = t;
}



