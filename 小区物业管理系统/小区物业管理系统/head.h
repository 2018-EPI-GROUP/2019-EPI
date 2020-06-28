
#ifndef defination
#define defination
typedef struct {
	int order_number;	//编号
	char name[30];		//姓名
	char tel[13];		//电话
	char address[30];	//地址								数据系统
	int e_fee;			//电费余额
	int w_fee;			//水费余额
	int g_fee;			//天然气费余额

	char admin[20];		//账户
	char password[20];	//密码								帐户系统
}element; 

typedef struct dnode {		//双向链表_节点
	element data;
	struct dnode* next;
	struct dnode* prev;
}dNode;

typedef struct _list {
	dNode * head;
	dNode * tail;
}List;

void print_dNode(List *pList);
#endif // !defination
