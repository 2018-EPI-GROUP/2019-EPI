#include<stdio.h>
#include<stdlib.h>

typedef struct Node Node;

struct Node {
	long int data;
	int cnt;
	Node* pleft;
	Node* pright;
};

Node *pRoot = NULL;

Node *create_node(long int value)                //创建根节点
{
	Node *pNode = (Node*)malloc(sizeof(Node));

	pNode->data = value;

	pNode->cnt = 1;

	pNode->pleft = pNode->pright = NULL;

	return pNode;
}

Node* add_Node(long int value, Node *pNode)       //添加新节点 ，返回一个插入结点的指针
{
	if (value == pNode->data) {
		pNode->cnt++;
		return pNode;
	}
	if (value < pNode->data) {
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

int main(void)
{
	int i ,newvalue = 1;

	for( i = 0 ; i < 5 ; i++ ){
		
		scanf("%d", &newvalue);

		if (!pRoot)
			pRoot = create_node(newvalue);
		
		else
			add_Node(newvalue, pRoot);
	}
	printf("输入成功！");

	return 0;
}