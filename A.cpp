#include <stdio.h>

int factorial(int m,int k);
int main (void)
{ 
int n,a,k,z,p;
	printf("���������С��������");
	scanf("%d",&n);
	printf("��һλС�������"); 
	scanf("%d",&a);
	printf("�����"); 
	scanf("%d",&k);
	if(k>100||k<0)
	{
	printf("Wrong Number");
		goto jie;}
	if(n<2)
	{
	printf("Wrong Number");
	goto jie;}
	if(a<=0){
	
	printf("Wrong Number");
		goto jie;} 

	z=factorial(n,k);
	p=z+a;
printf("��n��С������䣺%d",p);
jie:
return 0;	
}

int factorial(int m,int k){
		if(m==1)
		return 0;
	 return	factorial(m-1,k)+k;
	
}








 




















