
//练习字符串！！！
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//
//void Welcome()
//{
//	system("cls");//清空控制台
//	printf("hello,welcome to my little world!\n");
//
//}
//
//int main()
//{
//	printf("\t\t\t登录页面！！！\n");
//	char name[20] = "luffryfight";
//	char password[20] = "jjlsgdxb666";
//	char inname[20];
//	char inpassword[20];
//	int n = 3;//错误次数，允许三次
//	while (n)
//	{
//		printf("\t\t\t请输入这台电脑的用户名：");
//		scanf("\t\t\t%s", &inname);
//		if (strcmp(inname, name)!=0)
//		{
//			printf("\t\t\t用户名错误，请重新输入！\n");
//		}
//		else
//		{
//			printf("\t\t\t用户名正确！！！\n");
//			printf("\t\t\t请输入这台电脑的密码：");
//			
//			while(n)
//			{
//				
//				scanf("%s", inpassword);
//				if (strcmp(inpassword, password) == 0)
//				{
//					printf("\t\t\t密码正确！！！");
//					Welcome();
//					break;
//				}
//				else//密码正确
//				{
//					printf("\t\t\t密码错误，请重新输入！！！");
//					n--;
//					if (n == 0)
//					{
//						printf("\t\t\t对不起，输入密码累计已达三次！！！！\n");
//					}
//				}
//			}
//			break;
//		}	
//	}
//	
//
//
//
//
//
//
//
//
//
//
//
//
//	//printf("请输入两个数：");
//	//a和b可以直接比较大小
//	/*char a[] = "ab";
//	char b[20] = "AB";
//	if (a[1]+a[0] > b[1]+b[0])
//		printf("a>b\n");
//	else
//		printf("a<b\n");*/
//
//
//
//
//	return 0;
//}