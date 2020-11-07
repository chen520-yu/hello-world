/*prints a date in legal form*/
/*  printf 1901 to 2200 date      */
#include <stdio.h>
int main (void)
{
int month,day,year,r,temp,z;
printf("Enter date (mm/dd/yyyy):");
scanf("%d /%d /%d",&month,&day,&year);
printf ("dated this %d",day)	;
switch(day){
	case 1:case21: case31:
		printf ("st ");break;
		case 2:case22:
			printf ("nd");break;
				case 3:case23:
					printf("rd");break;
					default:printf ("th");break;
	
}
	
	printf(" day of");
	switch (month )
	{
		case 1:printf(" January");break;
		case 2:printf(" Februauy");break;
		case 3:printf(" March");break;
		case 4:printf(" April");break;
		case 5:printf(" May");break;
		case 6:printf(" June");break;
		case 7:printf(" July");break;
		case 8:printf(" August");break;
		case 9:printf(" September");break;
		case 10:printf(" October");break;
		case 11:printf(" November");break;
		case 12:printf(" December");break;
	}
	printf (",%.4d\n",year);
	r=(year-1901)/4;
	if(year%4==0 && month>=3)
		r=r+1;
		if (month==1)
		z=(year-1901)*365+r+day;
		 	if (month==2)
		z=(year-1901)*365+r+day+31;
			if (month==3)
		z=(year-1901)*365+r+day+59;
			if (month==4)
		z=(year-1901)*365+r+day+90;
			if (month==5)
		z=(year-1901)*365+r+day+120;
			if (month==6)
		z=(year-1901)*365+r+day+151;
			if (month==7)
		z=(year-1901)*365+r+day+181;
			if (month==8)
		z=(year-1901)*365+r+day+212;
			if (month==9)
		z=(year-1901)*365+r+day+243;
			if (month==10)
		z=(year-1901)*365+r+day+273;
			if (month==11)
		z=(year-1901)*365+r+day+304;
			if (month==12)
		z=(year-1901)*365+r+day+334;
		temp=z%7;
		if (temp==0) 
printf("今天是星期一！");	
		else if (temp==1) 
printf("今天是星期二！");	
		else if (temp==2) 
printf("今天是星期三！");	
		else if (temp==3) 
printf("今天是星期四！");	
		else if (temp==4) 
printf("今天是星期五！");	
		else if (temp==5) 
printf("今天是星期六！");	
		else 
printf("今天是星期天！");	



	return 0;
}
