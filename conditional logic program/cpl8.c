/*8.	WAP to accept the height of a person in centimeters and categorize the
 person according to their height.
 summary:
 very short :150 cm
 short:150cm to 165
 average:166cm to 180cm
 tall:181cm to 195cm
 very tall:195cm to 265
 */
 #include <stdio.h>
 int main()
 {
 	float cen;
 	printf("\nEnter your height in centimeter:");
 	scanf("%f",&cen);
 	if(cen<30)
 	{
 		printf("\nnot valid");
	 }
 	else if(cen>30 && cen<=150)
 	{
 		printf("%.2f = your height is very short",cen);
	 }
	 else if(cen<=165 && cen>150)
 	{
 		printf("%.2f = your height is short",cen);
	 }
	 else if(cen>165 && cen<=180)
 	{
 		printf("%.2f = your height is Average",cen);
	 }
	 else if(cen>180 && cen<=195)
 	{
 		printf("%.2f = your height is Tall",cen);
	 }
	 else if(cen>195 && cen<=265)
 	{
 		printf("%.2f = your height is very tall",cen);
	 }
	 else{
	 	printf11("\nNot Valid");
	 }
 	return 0;
 }
