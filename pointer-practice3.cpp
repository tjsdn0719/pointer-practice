#include <stdio.h>
 main()
 {
 	double *p;
 	double a;
 	scanf("%lf",&a);
 	p = &a;
 	printf("&p : %p\n", &p);//�������� �ּ� 
	printf("p : %p\n", p);//&a�� �ּ� 
	printf("&a : %p\n", &a);//&a�� �ּ� 
	printf("*p: %lf\n", *p);//a�� �� 
	printf("a : %lf\n", a);//a�� �� 
	return 0; 
 	
 } 
