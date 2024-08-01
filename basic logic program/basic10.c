/*10.	find the area of a rectangular prism formula : A=2(wl+hl+hw)*/
#include <stdio.h>
void main()
{
	int w,l,h,a;
	
	
	printf("Enter height:");
	scanf("%d",&h);
	printf("Enter width:");
	scanf("%d",&w);
	printf("Enter legnth:");
	scanf("%d",&l);
	a= 2*(w*l+h*l+h*w);
	printf("area of a rectangular prism : %d",a);
}
