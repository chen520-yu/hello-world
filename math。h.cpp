#include<stdio.h>
#include<math.h>
int main()
{

double x;
double s=modf(3.415416,&x);
int n=int(x);
	 printf("%d��%lf",n,s);
}
//exp���� Ϊe����
//log ����e
//Ϊָ�� 
// 



//pow(3��2)=9������
//sqrt����ƽ����
// 
/*ceil�������ڵ���ĳ����������
floorС�ڵ���
a=modf��3.152��&b����a=0.125��b=3
fmod��5.5��2.2��=1.1ȡ����
%ֻ��������
��Щ��Ϊdouble����
asin����������
fabs��������ֵ
<ctype.h>��ʾ�ַ���������isalnum�����ж��Ƿ�Ϊ���ֻ���ĸ
isalpha()�ж��Ƿ�Ϊ��ĸtolower����ת��ΪСд��ĸ
toupper����ת��д��ĸ
<string.h>strchr��������
char *p p=strchr���ַ������ƣ�'��������ĸ'��
p=����ĸ��λ��memchr��  ͬ��ͬ �������ķ�Χ��
strspn����"�ַ���")���ص�һ�����Ǹ����ַ������±� 
strcspn���෴
strstr�������ַ��������������Ϊ��һ���ַ����±꣬����Ϊ�� 
*/ 





 
