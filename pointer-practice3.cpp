#include <stdio.h>
 main()
 {
 	double *p;
 	double a;
 	scanf("%lf",&a);
 	p = &a;
 	printf("&p : %p\n", &p);//포인터의 주소 
	printf("p : %p\n", p);//&a의 주소 
	printf("&a : %p\n", &a);//&a의 주소 
	printf("*p: %lf\n", *p);//a의 값 
	printf("a : %lf\n", a);//a의 값 
	return 0; 
 	
 } 
