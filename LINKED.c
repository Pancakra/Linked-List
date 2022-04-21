#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};
typedef struct node node_t;

void hasil (node_t *start)
{
	node_t *temp = start;
	while (temp != NULL)
		{
			printf ("%d - ", temp->data);
			temp = temp->next;
		}
		printf ("\n");
}

int main ()
{
	node_t n1,n2,n3;
	node_t *start;
	
	n1.data = 25;
	n2.data = 30;
	n3.data = 20;
	
	//ini Ngelink
	start = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	
	hasil(start);
}
