#include <stdio.h>

int sortFind(int n[], int, int);

int main(void)
{
	//int* pointer;
	int nTestCases;
	int nArrayEle, k, o, i, j;
	scanf("%d", &nTestCases);
	for(i=1;i<=nTestCases;++i)
	{
		scanf("%d", &nArrayEle);
		int a[nArrayEle];
		for(j=1;j<=nArrayEle;j++)
		{
			scanf("%d", &a[j-1]);
		}
		scanf("%d", &k);
		//pointer=*a;
		o=sortFind(a, nArrayEle, k);
		printf("\n %d", o);
	}

	return 0;
}

int sortFind(int n[], int num, int ele)
{
	int i, j, a, l, posFind;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(n[i]>n[j])
			{
				a=n[i];
				n[i]=n[j];
				n[j]=a;
			}
		}
	}
	
	for(l=0;l<num;l++)
	{
		if(n[l]==ele){
			posFind=l+1;
			break;
		}
	}

	return (posFind);
}
