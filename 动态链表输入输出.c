#include<stdio.h>
#include<stdlib.h>
int iCount;
struct student 
{
	char cName[20];
	int iNumber;
	struct student*pNext;
}; 
struct student*Create()
{
	struct student*pHead=NULL;
	struct student*pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct student*)malloc(sizeof(struct student));
	printf("please first enter Name,then enter Number\n");
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCount++;
		if(iCount==1)
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pHead=pNew;
		}
		else
		{
			pNew->pNext=NULL;
			pEnd->pNext=pNew;
			pEnd=pNew;
		}
		pNew=(struct student*)malloc(sizeof(struct student));
		printf("please first enter Name,then enter Number again\n");
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
void print(struct student*pHead)
{
	struct student*pTemp;
	int i=1;
	printf("--the list has %d members:--\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("the NO%d member is:\n",i);
		printf("\t name :%s\n",pTemp->cName);
		printf("\t grade :%d",pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		i++;
		if(iCount==1)
		break;
	}
}
int main()
{
	struct student*pHead;
	pHead=Create();
	print(pHead);
	return 0;
}
