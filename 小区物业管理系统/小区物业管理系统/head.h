
#ifndef defination
#define defination
typedef struct {
	int order_number;	//���
	char name[30];		//����
	char tel[13];		//�绰
	char address[30];	//��ַ								����ϵͳ
	int e_fee;			//������
	int w_fee;			//ˮ�����
	int g_fee;			//��Ȼ�������

	char admin[20];		//�˻�
	char password[20];	//����								�ʻ�ϵͳ
}element; 

typedef struct dnode {		//˫������_�ڵ�
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
