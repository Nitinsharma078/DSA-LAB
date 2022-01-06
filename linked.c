#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
	
};
struct node * head;
void insert();
void delete ();
void display();
int main ()
{
	int ch=0;
	while(ch!=4)
	{
		printf("choose one operation of linked list to perform \n\n");
		printf("\n1:insert in begning \n2:delete the node\n");
		printf("\n3:display link list \n4:exiting program\n");
		scanf("%d",&ch);
		switch(ch){
		case 1: insert();
				break;
		case 2: printf("you perform the deletion operation \n");
				delete();
				break;
		case 3: printf("display the linked list\n");
						display();
						break;
		case 4 : exit(0);
				break;
													
			
			
			
		}
	}
	return 0;
}
void insert()
{
	struct node *ptr;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node *));
	if(ptr == NULL)
	{
		printf("linked list is overflow");
	}
	else{	printf("enter the value (info)\n"	);
	scanf("%d",&item);
	ptr ->data = item;
	ptr ->next = head;
	head = ptr;
	printf("node inserted with value \n");
	}
}
void delete()
{
	struct node *ptr,*temp;
	if(head == NULL){
		printf("\n list is empty");
		
	}		
	else if(head ->next == NULL)
	{	head == NULL;
	free(head);
	printf("only node of list is deleted\n");
	}
	else{
		ptr = head;
		while(ptr -> next = NULL)
		{
			temp = ptr;
		ptr	= ptr->next;
		}
		temp -> next = NULL;
		free(ptr);
		printf("Delete the node with value \n");
		
	}
	
} 
void display()
{  
 struct node *ptr;
 ptr = head;
 if(ptr = NULL){
 	printf("nothing to print (list is empty)");
 }
 else{
 	printf("here are value   \n\n");
 	while(ptr!=NULL)
 	{
 		printf("\n%d",ptr->data);
 		ptr = ptr->next;
 		
	 }
 }
}