#include<stdio.h>
 

int main()
{
	//99�˷���
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j <= i)
			{
				printf("%d*%d=%d\t", j, i, i*j);
			}	
		}
		printf("\n");
	}
















	/*puts("I LOVE China");*/




















	/*char a[10] = { 'I', 'L', 'o', 'v', 'e', 'C', 'h', 'i', 'n', 'a' };
	
	for (int i = 0; i < 10; i++)
	{
		printf("%c", a[i]);

	}*/

















	//int a[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf_s("%d", &a[i]); 
	//}
	//int sum = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	sum += a[i];
	//}
	//printf("�ܺ�=%d\n", sum);
	////ƽ��ֵ=�ܺͳ���10
	//float avg = sum / 5.00;
	//printf("ƽ����=%.2f", avg);




	//���
	/*int sum=0;

	for (int i = 0; i < 5; i++)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
*/
	/*int max = a[0];

    for (int i = 0; i < 5; i++)
	{
		if (max > a[i])
		{
			max = a[i];
		}			
	}
	printf("���(xiao)�����ǣ� %d", max);
	*/


	
















	/*int i = 1, sum = 0;
	while (i < 10)
	{
		sum = sum + i;
		i++;
	}
		
		printf("%d %d", i, sum);*/
 




	/*int sco;//
	printf("��������ĳɼ�:\n");
	scanf_s("%d", &sco);
	if (sco >= 90 && sco < 100)
	{
		printf("��ĵȼ�Ϊ��A\n");
	}
	if (sco >= 80 && sco < 89)
	{
		printf("��ĵȼ�Ϊ��B\n");
	}
	if (sco >= 70 && sco < 79)
	{
		printf("��ĵȼ�Ϊ��C\n");
	}
	if (sco >= 60 && sco < 69)
	{
		printf("��ĵȼ�Ϊ��D\n");
	}
	if (sco <60)
	{
		printf("��ĵȼ�Ϊ��E\n");
	}

*/

	//int sum = 0;
	//int h = 1;
	//while (h <= 100)
	//{
	//	sum = sum + h;
	//	h++;	
	//}
	//printf("%d\n", sum);



	// �ۼ�
	/*int sum =0;
	for (int  i = 1; i<= 10; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);*/ 


	//������
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 9-i; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
*/


	//������
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i + 1; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < 10-i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/
	//��ֱ��
	/*for (int i = 0; i < 10; i++)
	{
	
	       for (int j = 0; j < 10-i; j++)
	{
	               printf("* ");
	}
	             printf("\n");
	}*/
	

	//������
/*
	for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i; m++)
		{
			printf("  ");
		}
		for (int j = 0; j < 10 - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/
	//���Σ�������+�����ǣ�
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 9 - i; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < i + 1; m++)
		{
			printf(" ");
		}
		for (int j = 0; j < 10 - i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
*/

	//��������
	/*for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < i+1; j++)
		{
			printf("* ");
		}
		for (int m = 0; m < 10-i; m++)
		{
			printf(" ");
		}
		printf("\n");
	}*/

	//��������
	/*for (int i = 0; i < 10; i++)
	{
		for (int m = 0; m < 10 - i; m++)
		{
			printf("  ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
*/
//��С������
   //int a, b;
   //int max;
   //printf("��������������\n");
   //scanf_s("%d%d", &a, &b);
   //
   //if (a < b)//����������b
   //{	  
	  // max = a;
	  // a = b;
	  // b = max;
   //}
   //for (int i = b;b>0; i++)
   //{
	  // if (i%a == 0 && i%b == 0)
	  // {
		 //  printf("������������С������Ϊ��%d\n", i);
		 //  break;
	  // }
   //}





	return 0;
}