#include<stdio.h>
#include<stdlib.h>

typedef struct {

	int a;

}element;

typedef struct node {

	element data;

	int cnt;

	struct node* pleft;

	struct node* pright;

}Node;



Node *create_node(long int value)                //创建根节点
{
	Node *pNode = (Node*)malloc(sizeof(Node));

	pNode->data.a = value;

	pNode->cnt = 1;

	pNode->pleft = pNode->pright = NULL;

	return pNode;
}

Node* add_Node(long int value, Node *pNode)       //添加新节点 ，返回一个插入结点的指针
{
	if (value == pNode->data.a) {

		pNode->cnt++;

		return pNode;
	}
	if (value < pNode->data.a) {

		if (!pNode->pleft) {

			pNode->pleft = create_node(value);

			return pNode->pleft;
		}
		else
			return add_Node(value, pNode->pleft);
	}
	else{
		if (!pNode->pright) {

			pNode->pright = create_node(value);

			return pNode->pright;
		}
		else 
			return add_Node(value, pNode->pright);
	}
}

void list_Node(Node *pRoot)                       //按升序输出
{
	if (pRoot->pleft)
		list_Node(pRoot->pleft);

	printf("\n%d *    %d", pRoot->cnt, pRoot->data.a);

	if (pRoot->pright)
		list_Node(pRoot->pright);
}
int main(void)
{
	int i ,newvalue = 0;

	Node *pRoot = NULL;

	printf("To create a Binary Tree , please input the data(with -1 end):\n");

	while(1){
		
		scanf("%d", &newvalue);

		if (newvalue == -1)
			break;

		if (!pRoot)
			pRoot = create_node(newvalue);
		
		else
			add_Node(newvalue, pRoot);
	}
	printf("Successfully input！");

	list_Node(pRoot);

	return 0;
}