
#include <stdio.h>
#include <stdlib.h>
void comb(int deep, int n, int m);
int main()
{
    int i,m,n,c,b[100];
    char a[m][n];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    { 
	
	scanf("%d",&b[i]); 
    for(c=0;c<b[i];c++)
    {scanf("%s",a[i][c]);
	}
	}
    for(c=0;c<m;c++)
    {
    for(i=b[c]; i>=0; i--){
        comb(0,b[c],i);
    }}
    printf("\n");
    return 0;
}


#define N  4
int results[N] = {0}; //�����Ѿ��ҵ��Ľ��ǰ׺����
int results_end = 0; //���ǰ׺������Ч�����±�
/**
 * ���
 * @param deep �ݹ����
 * @param n ������󳤶�
 * @param m Ҫ���ҵ���ϵĳ���
 */
void comb(int deep, int n, int m,int a[][100])
    {
	int i,v;
    i=0;
    for(v=0;v<n;v++)
    {if (deep > n) // Խ��ݹ����
        return ;
    if (results_end == m) // �ҵ��������ӡ���ݹ����
    {printf("-->");
        for (i = 0; i < m; i++)
        {
            printf(" %d", results[i]);
        }
        printf("\n");
        return ;
    }
    results[results_end++] = a[v][deep];
    comb(deep+1, n, m); //����һ����9��
    results_end--;
    comb(deep+1, n, m); //����һ���ݹ�
}}


