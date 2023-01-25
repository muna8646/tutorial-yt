#include<stdio.h>
float rect_area(float width, float length); //function prototype
void main( )
{
	float ar, w, l;

	printf("Enter the width and length of the rectangle: ");
	scanf("%f  %f",&w,&l);

	ar = rect_area(w,l); //function call (R.H.S)

	printf("\nThe area of the rectangle is %.2f\n\n",ar);
}
float rect_area(float width, float length) //function header/heading
{
	float area;
	area = width * length;
	return (area);
}
