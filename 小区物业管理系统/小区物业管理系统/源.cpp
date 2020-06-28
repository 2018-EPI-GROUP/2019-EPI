/*小区物业管理系统
功能
ok	数据录入：录入系统所需的数据，用结构体数组或链表组织数据 （使用链表成绩加分）
ok	数据存储：将录入的数据存储，用文件的形式将录入的数据存储
ok	数据读写：对数据进行读写操作
ok	数据修改：对数据进行更新操作，可以进行新数据的插入，旧数据的修改操作
ok	数据删除：对数据进行删除操作，根据具体题目将对应记录删除
ok	数据查询：按要求对数据进行查询，含简单查询及组合查询
ok	数据统计：按要求对数据进行统计，含简单统计及综合统计
ok	数据排序：按要求对数据进行排序，含升序排序及降序排序；含数字及字符串排序
ok	数据报表：按要求对数据打印报表，依规定的报表格式对数据打印报表
ok	界面：设计总体菜单界面，简单菜单、下拉式或弹出式
ok	密码设置：管理员密码保护
*/
#include"head.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h> 

void ReadInfo(List* pList)		//加载数据库里的信息到内存										ok
{
	int totalnum, i;
	//fscanf(user_info, "number:%d", )
	FILE *user_info = fopen("data.txt", "r");		//打开data.txt读
	fscanf(user_info, "Total number:%d\n", &totalnum);
	if (user_info == NULL)
		printf("Falied. Please try again.");
	else//正常打开
	{
		for ( i = 0; i < totalnum; i++)
		{
			dNode *p = (dNode*)malloc(sizeof(dNode));       //创建一个新结点
			fscanf(user_info, "Order Number:%d\n"			   , &p->data.order_number);
			fscanf(user_info, "Name:%s\n"					   , &p->data.name);
			fscanf(user_info, "Tel:%s\n"					   , &p->data.tel);
			fscanf(user_info, "Address:%s\n"				   , &p->data.address);
			fscanf(user_info, "Charge for Electricity:%d\n"    , &p->data.e_fee);
			fscanf(user_info, "Charge for Water:%d\n"		   , &p->data.w_fee);
			fscanf(user_info, "Charge for Gas:%d\n"		       , &p->data.g_fee);
			p->prev = NULL;			//初始化新结点的指针
			p->next = NULL;                          
			if (!pList->head && !pList->tail)
			{
				pList->head = p;                 //若初始则创建头结点 
				pList->tail = p;
			}
			else
			{
				p->prev = pList->tail;
				pList->tail->next = p;			//不然则尾插法插入该节点
				pList->tail = p;
			}
		}
	}
	fclose(user_info);
	return;
}

void ReadCode(List* pList)
{
	int totalnum, i;
	FILE *code_info = fopen("code.txt", "r");		//打开data.txt读
	if (code_info == NULL)
		printf("Falied. Please try again.");
	else//正常打开
	{
			dNode *p = (dNode*)malloc(sizeof(dNode));       //创建一个新结点
			fscanf(code_info, "Admin:%s\n", &p->data.admin);
			fscanf(code_info, "Password:%s\n", &p->data.password);
			p->prev = NULL;			//初始化新结点的指针
			p->next = NULL;
			if (!pList->head && !pList->tail)
			{
				pList->head = p;                 //若初始则创建头结点 
				pList->tail = p;
			}
			else
			{
				p->prev = pList->tail;
				pList->tail->next = p;			//不然则尾插法插入该节点
				pList->tail = p;
			}
	}
	fclose(code_info);
	return;
}

void SaveInfo(List* pList)		//保存内存里的信息到数据库										ok
{
	dNode *p = pList->head;
	FILE *user_info = fopen("data.txt", "w");		//清空并从内存中的链表往外存写
	fprintf(user_info, "Total number:%d\n", pList->tail->data.order_number);
	if (user_info == NULL)
	{
		printf("Failed to save infomation!");
		return;
	}
	else
	{
		while (p != NULL)
		{
			fprintf(user_info, "Order Number:%d\n", p->data.order_number);
			fprintf(user_info, "Name:%s\n", p->data.name);
			fprintf(user_info, "Tel:%s\n", p->data.tel);
			fprintf(user_info, "Address:%s\n", p->data.address);
			fprintf(user_info, "Charge for Electricity:%d\n", p->data.e_fee);
			fprintf(user_info, "Charge for Water:%d\n", p->data.w_fee);
			fprintf(user_info, "Charge for Gas:%d\n", p->data.g_fee);
			p = p->next;
		}
		fclose(user_info);
	}
	printf("Successfully Save the Infomation!\n\n");
	return;
}

void SaveCode(List* pList)		//保存密码到数据库										
{
	dNode *p = pList->head;
	FILE *code_info = fopen("code.txt", "w");		//清空并从内存中的链表往外存写
	if (code_info == NULL)
	{
		printf("Failed to save infomation!");
		return;
	}
	else
	{
		while (p != NULL)
		{
			fprintf(code_info, "Admin:%s\n", p->data.admin);
			fprintf(code_info, "Pasword:%s\n", p->data.password);	
			p = p->next;
		}
		fclose(code_info);
	}
	printf("Successfully Save the code system!\n\n");
	return;
}

void* create_dNode(List* pList)       //尾插法创建新结点										ok
{
	//List *pList 的原因是传进来的是一个  指向List结构类型的指针  ，*一下表示该指针
	int number;
	dNode* p = (dNode*)malloc(sizeof(dNode));       //创建一个新结点
	printf("Name:");
	scanf("%s", &p->data.name);
	printf("Tel:");
	scanf("%s", &p->data.tel);
	printf("Address:");
	scanf("%s", &p->data.address);
	printf("Charge for Electricity:");
	scanf("%d", &p->data.e_fee);
	printf("Charge for Water:");
	scanf("%d", &p->data.w_fee);
	printf("Charge for Gas:");
	scanf("%d", &p->data.g_fee);
	p->prev = p->next = NULL;                          //初始化新结点的指针
	if (!pList->head && !pList->tail) 
	{
		pList->head = p;                 //创建头结点 
		pList->tail = p;
		p->data.order_number = 1;		//初始化编号
	}
	else 
	{
		p->prev = pList->tail;
		pList->tail->next = p;			//尾插法插入该节点
		pList->tail = p;				//移动链表尾“指针”
		p->data.order_number = p->prev->data.order_number + 1;
	}
	return 0;
}

void rewrite_dNode(List * pList)		//修改数据												ok
{
	printf("Input the name of contact that you want to rewrite\n");
	char _name[10],temp[10];
	scanf("%s", &_name);
	dNode * p = pList->head;
	while (strcmp(p->data.name, _name) != 0)
		p = p->next;
	printf("Is %s you want to rewrite?\n", p->data.name);						//增强健壮性
	scanf("%s", &temp);
	if (strcmp(temp, "yes") == 0)
	{
		printf("OK. Let's begin.\n");
		Sleep(300);
		printf("Name:");
		scanf("%s", &p->data.name);
		printf("Tel:");
		scanf("%s", &p->data.tel);
		printf("Address:");
		scanf("%s", &p->data.address);
		printf("Charge for Electricity:");
		scanf("%d", &p->data.e_fee);
		printf("Charge for Water:");
		scanf("%d", &p->data.w_fee);
		printf("Charge for Gas:");
		scanf("%d", &p->data.g_fee);
		printf("Successfully rewrite!\n\n");
	}
	else
		printf("Failed to find it. Please check and retry.\n\n");			//增强健壮性
	return;
}

void delete_dNode(List * pList)				//删除数据											ok
{
	dNode  *p, *q;                          //定义两个dNode*型的指针，p在前，q在后（紧挨）
	printf("Input the name of contact you want to delete\n");
	char _name[10];
	scanf("%s", &_name);
	for (q = NULL, p = pList->head; p; q = p, p = p->next) 
	{
		//初始化q为NULL，p为head，不符合条件（p不为空）时，q先移动，p再移动
		if (strcmp(p->data.name, _name) == 0) 
		{			
			if (q)							//注意，当想要删除第一个节点时，要对q进行保护
			{								//将NULL赋值给其他指针是很危险的
				dNode* temp;
				for (temp = p->next; temp; temp = temp->next)
					temp->data.order_number--;							//将后方的数据编号前移
				q->next = p->next;
				p->next->prev = q;
			}
			else
			{
				dNode* temp;
				for (temp = p->next; temp; temp = temp->next)
					temp->data.order_number--;							//将后方的数据编号前移
				p->next->prev = NULL;
				pList->head = p->next;
			}
			printf("Successfully delete!\n\n");						
			free(p);						//最后要记得FREE
			break;
		}
	}
	return;
}

void inquire_dNode(List * pList)			//单项、多项、组合查询&统计								ok
{
	int choose = -1;
	printf("What kind of way do you want to inquire contact(s)? Input number to choose.\n");
	printf("1.Order Number\n");											//单项查询
	printf("2.Name\n");													//单项查询
	printf("3.Telephone Number\n");										//单项查询
	printf("4.Same City(Address)\n");									//多项查询
	printf("5.Charge for Electricity under 0\n");						//多项查询
	printf("6.Charge for Water under 0\n");								//多项查询
	printf("7.Charge for gas under 0\n");								//多项查询
	printf("8.Same City(Address)  &  Charge for gas under 0\n");		//组合查询
	scanf("%d", &choose);
	switch (choose)
	{
		case 1: 
		{
			int number = -1, sign = -1;
			printf("Input the order number you want to inquire.");
			scanf("%d", &number);
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (p->data.order_number == number)
				{
					printf("Find it!\n");
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
					break;
				}
			}
			if (sign != 1)
				printf("Can't find the contect with order number %d.\n\n", number);
			break;
		}
		case 2:
		{
			int sign = -1;
			char name[30];
			printf("Input the name you want to inquire.");
			scanf("%s", &name);
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (strcmp(p->data.name, name) == 0)
				{
					printf("Find it!\n");
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
					break;
				}
			}
			if (sign != 1)
				printf("Can't find the contect named %s.\n\n", name);
			break;
		}
		case 3:
		{
			int sign = -1;
			char tel[30];
			printf("Input the tel you want to inquire.");
			scanf("%s", &tel);
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (strcmp(p->data.tel, tel) == 0)
				{
					printf("Find it!\n");
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
					break;
				}
			}
			if (sign != 1)
				printf("Can't find the contect with tel %s.\n\n", tel);
			break;
		}
		case 4:
		{
			int sign = -1;
			char add[30];
			printf("Input the Address you want to inquire.");
			scanf("%s", &add);
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (strcmp(p->data.address, add) == 0)
				{
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
				}
			}
			if (sign != 1)
				printf("Can't find any contect with address %s.\n\n", add);
			break;
		}
		case 5:
		{
			int sign = -1;
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (p->data.e_fee < 0)
				{
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
				}
			}
			if (sign != 1)
				printf("Can't find any contect with charge of electricity under 0.\n\n");
			break;
		}
		case 6:
		{
			int sign = -1;
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (p->data.w_fee < 0)
				{
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
				}
			}
			if (sign != 1)
				printf("Can't find any contect with charge of water under 0.\n\n");
			break;
		}
		case 7:
		{
			int sign = -1;
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (p->data.g_fee < 0)
				{
					printf("Order Number:%d\n", p->data.order_number);
					printf("Name:%s\n", p->data.name);
					printf("Tel:%s\n", p->data.tel);
					printf("Address:%s\n", p->data.address);
					printf("Charge for Electricity:%d\n", p->data.e_fee);
					printf("Charge for Water:%d\n", p->data.w_fee);
					printf("Charge for Gas:%d\n\n", p->data.g_fee);
					sign = 1;
				}
			}
			if (sign != 1)
				printf("Can't find any contect with charge of gas under 0.\n\n");
			break;
		}
		case 8:
		{
			int sign = -1;
			char add[30];
			printf("Input the Address you want to inquire.");
			scanf("%s", &add);
			dNode* p = pList->head;
			for (; p; p = p->next)
			{
				if (strcmp(p->data.address, add) == 0)
				{
					if (p->data.g_fee < 0)
					{
						printf("Order Number:%d\n", p->data.order_number);
						printf("Name:%s\n", p->data.name);
						printf("Tel:%s\n", p->data.tel);
						printf("Address:%s\n", p->data.address);
						printf("Charge for Electricity:%d\n", p->data.e_fee);
						printf("Charge for Water:%d\n", p->data.w_fee);
						printf("Charge for Gas:%d\n\n", p->data.g_fee);
						sign = 1;
					}				
				}
			}
			if (sign != 1)
				printf("Can't find any contect with address %s and charge for gas under 0.\n\n", add);
			break;
		}
		default:
		{
			printf("Wrong input! Please try again.\n\n");
			break; 
		}
	}
	return;
}

void print_dNode(List* pList)                        //打印函数									ok
{
	dNode *p;
	printf("All infomation in the system will show below:\n");
	for (p = pList->head; p; p = p->next) 
	{
		printf("Order Number:%d\n"            , p->data.order_number);
		printf("Name:%s\n"                    , p->data.name);
		printf("Tel:%s\n"                     , p->data.tel);
		printf("Address:%s\n"                 , p->data.address);
		printf("Charge for Electricity:%d\n" , p->data.e_fee);
		printf("Charge for Water:%d\n"       , p->data.w_fee);
		printf("Charge for Gas:%d\n"         , p->data.g_fee);
		printf("\n");
	}
	printf("End up.\n");
	return;
}

void Sort_dNode(List* pList)				//分类排序，升序降序排序
{
	int sign = -1, choose = -1;
	printf("Which kind of way do you want to sort?\n");
	printf("1.Ascending.\n"); 
	printf("2.Descending.\n");
	while (1)
	{
		scanf("%d", &sign);
		if (sign != 1 && sign != 2)
			printf("Wrong input! Please try again.\n");				//增强健壮性
		if (sign == 1 || sign == 2)
			break;
	}
	printf("OK. And which element do you want to sort by?\n");
	printf("1.Order number.\n");
/*	printf("2.Charge for electricity.\n");
	printf("3.Charge for water.\n");
	printf("4.Charge for gas.\n");
*/	while (1)
	{
		scanf("%d", &choose);
		if (sign != 1 && sign != 2 && sign != 3 && sign != 4)
			printf("Wrong input! Please try again.\n");				//增强健壮性
		if (sign == 1 || sign == 2 || sign == 3 || sign == 4)
			break;
	}
	if (sign == 1)
	{
		if (choose == 1)
		{
			dNode *p;
			for (p = pList->head; p; p = p->next)
			{
				printf("Order Number:%d\n", p->data.order_number);
				printf("Name:%s\n", p->data.name);
				printf("Tel:%s\n", p->data.tel);
				printf("Address:%s\n", p->data.address);
				printf("Charge for Electricity:%d\n", p->data.e_fee);
				printf("Charge for Water:%d\n", p->data.w_fee);
				printf("Charge for Gas:%d\n", p->data.g_fee);
				printf("\n");
			}
			printf("End up.\n\n");
		}
/*		if (choose = 2)
		{
			
		}
*/	}
	if (sign == 2)
	{
		if (choose = 1)
		{
			dNode *p;
			for (p = pList->tail; p; p = p->prev)
			{
				printf("Order Number:%d\n", p->data.order_number);
				printf("Name:%s\n", p->data.name);
				printf("Tel:%s\n", p->data.tel);
				printf("Address:%s\n", p->data.address);
				printf("Charge for Electricity:%d\n", p->data.e_fee);
				printf("Charge for Water:%d\n", p->data.w_fee);
				printf("Charge for Gas:%d\n", p->data.g_fee);
				printf("\n");
			}
			printf("End up.\n\n");
		}
	}
}

void Report_dNode(List* pList)						//报表													ok
{
	dNode *p;
	printf("Report all infomation:\n");
	printf("Order Number\t");
	printf("Name      ");
	printf("Tel      \t");
	printf("Address        \t");
	printf("Charge for Electricity\t");
	printf("Charge for Water\t");
	printf("Charge for Gas\t\n");
	for (p = pList->head; p; p = p->next)
	{
		printf("%-5d         \t", p->data.order_number);
		printf("%-10s", p->data.name);
		printf("%-13s\t", p->data.tel);
		printf("%-10s\t", p->data.address);
		printf("%-5d                  \t", p->data.e_fee);
		printf("%-5d           \t", p->data.w_fee);
		printf("%-5d         \t", p->data.g_fee);
		printf("\n");
	}
	printf("End up.\n");
	return;
}

void Admin_system(List* list1)
{
	int number;
	char ans[20];
	while (1)		//管理员系统
	{
		printf("\n");
		printf("					---------------------------------------------------\n");
		printf("                                                               Menu					    \n");
		printf("                                                  Please Input number to choose.		\n");
		printf("                                                         1.Add Contacts				    \n");
		printf("                                                         2.Delete Contacts				\n");
		printf("                                                         3.inquire Contacts			    \n");
		printf("                                              4.Show all the infomation in system		\n");
		printf("                                                         5.Rewrite Contacts			    \n");
		printf("                                                         6.Sort Contacts				\n");
		printf("                                                         7.Report Contacts				\n");
		printf("                                                          8.Quit						\n");
		printf("					---------------------------------------------------\n\n");
		scanf("%d", &number);
		if (number == 1)
		{
			while (1)
			{
				create_dNode(list1);         //调用create函数
				printf("Do you want to input another?(yes/no)\n");
				scanf("%s", &ans);
				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 2)
		{
			while (1)
			{
				delete_dNode(list1);
				print_dNode(list1);
				printf("Do you want to delete another?(yes/no)\n");
				scanf("%s", &ans);
				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 3)
		{
			while (1)
			{
				inquire_dNode(list1);
				printf("Do you want to inquire another?(yes/no)\n");
				scanf("%s", &ans);
				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 4)
			print_dNode(list1);
		else if (number == 5)
		{
			while (1)
			{
				rewrite_dNode(list1);
				printf("Do you want to rewrite another?(yes/no)\n");
				scanf("%s", &ans);
				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 6)
		{
			while (1)
			{
				Sort_dNode(list1);
				printf("Do you want to Sort another?(yes/no)\n");
				scanf("%s", &ans);
				if (strcmp(ans, "no") == 0)
					break;
			}
		}
		else if (number == 7)
			Report_dNode(list1);
		else if (number == 8)
			break;
		else
			printf("Wrong input! Please try again.");
	}
}

int main(void)
{
	long int i;
	char ans[5];	//临时数据
	int number;
	int login_choose;
	//内存部分
	List  list1;          ////创建一个包含“指向一个链表头尾的指针”的结构体------数据系统
	list1.head = list1.tail = NULL;			//初始化其头结点
	List  list2;							//				         -------------密码系统
	list2.head = list2.tail = NULL;

	ReadInfo(&list1);		//加载数据库里的信息到内存中的链表
	ReadCode(&list2);		//加载密码到内存
	while (1)		//登录系统
	{
		printf("\n");
		printf("					---------------------------------------------------\n");
		printf("                                                               Menu					    \n");
		printf("                                                  Please Input number to choose.		\n");
		printf("                                                           1.User Login				    \n");
		printf("                                                           2.Admin Login				\n");
		printf("                                                               3.Quit					\n");
		printf("					---------------------------------------------------\n\n");
		scanf("%d", &login_choose);
		if (login_choose == 1)
			printf("Sorry, this feature is in Developing.");
		if (login_choose == 2)
		{
			char temp[20], temp2[20], temp3[20];
			printf("Admin:");
			scanf("%s", &temp);
			if (strcmp(temp, list2.head->data.admin) == 0)
			{
				while (1)
					{
						printf("Password:");
						scanf("%s", &temp2);
						if (strcmp(temp2, list2.head->data.password) == 0) {
							Admin_system(&list1);
							break;
						}
						else
						{
							printf("Wrong input! Would you want to back up?(yes/no)");
							scanf("%s", &temp3);
							if (strcmp(temp3, "yes"))
								break;
						}
					}
			}
		}
		if (login_choose == 3)
			break;
	}
	SaveInfo(&list1);
//	SaveCode(&list2);
	getchar();
	return 0;
}