#include <stdio.h>
 main()
 {
 	float *p;//float형 포인터 
 	float a;//float형 변수 
 	scanf("%f",&a);
 	p = &a;
 	printf("&p : %p\n", &p);//포인터의 주소 
	printf("p : %p\n", p);//&a의 주소 
	printf("&a : %p\n", &a);//&a의 주소 
	printf("*p: %f\n", *p);//a의 값 
	printf("a : %f\n", a);//a의 값 
	return 0; 
 }
