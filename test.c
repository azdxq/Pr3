// Andrew Ziggas
// cmpsci-2750-001
// Project 3
// 5/8/2020
// User is given menu where they can select an option that will affect 
// the linked list.

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char * argv[]) {

Node * head = NULL;
int v, i;

do{  	
	printf("Select an option by inputing number\n");
	printf("1-Insert head\n");
	printf("2-Insert tail\n");
	printf("3-Delete a node\n");
	printf("4-Delete all\n");
	printf("5-Display\n");
	printf("6-Exit\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
	{	
		printf("Insert integer to add to node: ");
		scanf("%d", &v);
		head = List_insert(head,v);
		break;
	}
	case 2:
	{
                printf("Insert integer to add to tail of node: ");
                scanf("%d", &v);
                head = List_insert_last(head,v);
                break;

	}
	case 3:
	{
		printf("Insert integer to delete from node: ");
		scanf("%d", &v);
		head = List_delete(head, v);
		break;
	}
	case 4:
	{
		List_destroy(head);
		break;
	}
	case 5:
	{
		List_print(head);
		break;
	}
	case 6:
	{
		break;
	}
	default: 
	{
		printf("Invalid choice\n");
		break;
	}
}

} while(i != 6);
return 0;
}
