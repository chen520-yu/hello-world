#include<stdio.h>
int main()
{
	int n,i,p,q[n],w[n];
	char m[n][10];
	printf("ѧ������");
	scanf("%d",&n);
	printf("������ѧ������ ���֤�� �ɼ���\n");
	for(i=1;i<=n;i++)
	{
		scanf("%s",&m[i-1]);
		scanf("%18d",&q[i-1]);
		scanf("%d",&w[i-1]);
	}
    
     p=w[0];
  for(i=1;i<n;i++)
	{
		if(p<w[i])
		p=w[i];
	}
	i=0;
	while(w[i]==p)
	{
	i++;}
	printf("%s %s %s",m[i],q[i],w[i]);
	p=w[0];
  for(i=1;i<n;i++)
	{
		if(p>w[i])
		p=w[i];
	}
	i=0;
	while(w[i]==p)
	{
	i++;}
	printf("%s %s %s",m[i],q[i],w[i]);
	
	
	
	
}




