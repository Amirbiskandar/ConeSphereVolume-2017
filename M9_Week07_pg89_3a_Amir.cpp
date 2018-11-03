//M9_07_pg89_3a_Amir

#include<stdio.h>

main()
{
	float pi, volume, height, radius;
	pi=3.142;
	printf("Volume calculator\n1. Cone\n2. Sphere");
	scanf("&d", &opt);
	switch(opt)
	{
		case 1:
		printf("Enter height");
		scanf("&f", height);
		printf("Enter base radius");
		scanf("&f", radius);
		volume = pi*radius*radius*height/3;
		printf("Volume is %f", volume);
		break;
		
		case 2:
		printf("Enter radius");
		scanf("&f", radius);
		volume = 4/3*pi*radius*radius*radius;
		printf("Volume is %f", volume);
		break;
		
		default:
		printf("Number out of range");
	}
}
