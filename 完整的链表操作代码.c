#include<stdio.h>
#include<stdlib.h>

struct Student
{
	char cName[20];
	int iNumber;
	struct Student*pNext;
};
int iCount;
struct Student*Create()
{
	struct Student*pHead=NULL;
	struct Student*pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
	printf("please first enter Name,then Number\n");
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
		pNew=(struct Student*)malloc(sizeof(struct Student));
		printf("please enter again\n");
		scanf("%s",&pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);
	return pHead;
}
void Print(struct Student*pHead)
{
	struct Student*pTemp;
	int i=1;
	printf("--the list has %d members--\n",iCount);
	printf("\n");
	pTemp=pHead;
	while(pTemp!=NULL)
	{
		printf("--the NO%d member is--\n",i);
		printf("name:%s\n",pTemp->cName);
		printf("number:%d\n",pTemp->iNumber);
		printf("\n");
		pTemp=pTemp->pNext;
		i++;
		if(iCount==1)
		    break;
	}
}
struct Student*Insert(struct Student*pHead)
{
	struct Student*pNew;
	printf("--Inster member at first--\n");
	pNew=(struct Student*)malloc(sizeof(struct Student));
	scanf("%s",&pNew->cName);
	scanf("%d",&pNew->iNumber);
	pNew->pNext=pHead;
	pHead=pNew;
	iCount++;
	return pHead;
}
void Delete(struct Student*pHead,int i)
{
	int j;
	struct Student*pTemp;
	struct Student*pPre;
	pTemp=pHead;
	pPre=pTemp;
	printf("--delete NO%d member--\n",i);
	for(j=1;j<i;j++)
	{
		pPre=pTemp;
		pTemp=pTemp->pNext;
	}
	pPre->pNext=pTemp->pNext;
	free(pTemp);
	iCount--;
}
int main()
{
	int NO;
	struct Student*pHead;
	pHead=Create();
	pHead=Insert(pHead);
	printf("if you want delete the NO.n member,n= ");
	scanf("%d",&NO);
	Delete(pHead,NO);
	Print(pHead);
	return 0;
}
