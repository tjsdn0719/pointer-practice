#include <stdio.h>
 main()
 {
 	float *p;//float�� ������ 
 	float a;//float�� ���� 
 	scanf("%f",&a);
 	p = &a;
 	printf("&p : %p\n", &p);//�������� �ּ� 
	printf("p : %p\n", p);//&a�� �ּ� 
	printf("&a : %p\n", &a);//&a�� �ּ� 
	printf("*p: %f\n", *p);//a�� �� 
	printf("a : %f\n", a);//a�� �� 
	return 0; 
 }
