#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *link;
};
struct st *head=NULL;

void add(int num)
{
	struct st *newnode,*temp;
	newnode=(struct st *)malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf(" node not created\n");
	}
	else
	{
		newnode->data=num;
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			temp=head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
}
void display()
{
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		struct st *temp=head;	
		while(temp)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	add(100);
	add(200);
	add(300);
	display();
}

