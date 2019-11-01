/* link list is very important! */
#include <stdio.h>
#include <stdlib.h>

typedef struct _note {
	int value;
	struct _note *next;
}Node;

typedef struct _list{
	Node *head;
	Node *tail;
}List;

void add(List *pList, int number);
void print(List *pList); 

int main(void)
{
	list list;
	int number;
	list.head = NULL;
	do {
		scanf("%d", &number);	
		if ( number != -1 ) {
		      	list.head = add(&list, number);	
		}	
	} while ( number != -1 );
	int isFound = 0;
	for( p=list.head; p; p=p->next) {
		if( p->value == number ) {
			isFound = 1;
			printf("I find it!");
			break;
		}
	}   				
	if ( !isFound ) {
		printf("I can't find it");	
	}
	Node *q;
	for ( q=NULL, p=list.head; p; q=p,p=p->next) {
		if ( p->value == number ) {
			if (q) {
			   q->next = p->next;	
			} else {
		   		 list.head = p->next;	
			}
			free(p);
			break;	
		}
	}    	

	return 0;
}


void add(List *pList, int number)
{
	// add to linked-list
	Note *p = (Note*)malloc(sizeof(Node));	
	p->value = number;
	p->next = NULL;
	// find the last
	Node *last = pList->head;
	if ( last ) {
		while ( last->next ) {
			last =  last->next;		
		}	
		//  attach
		last->next = p;
	} else {
	    pList->head = p;	
	}
}

void print(List *pList) {
	Node *p;
	for ( p=pList->head; p; p=p->next ) {
		printf("%d\t", p->value);
	}
	printf("\n");
}

