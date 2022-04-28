#include<stdio.h>
#include<stdlib.h>
typedef struct stu 
{
	char ch;
	struct stu *link;
}node;
void Create_List(node **,node **,char);
void Display(node **);
int main()
{
	node *head=NULL,*temp=NULL;
	Create_List(&head,&temp,'a');
	Create_List(&head,&temp,'e');
	Create_List(&head,&temp,'i');
	Create_List(&head,&temp,'o');
	Create_List(&head,&temp,'u');
	Display(&head);
	return 0;
}
void Create_List(node **head_node,node **temp,char c)
{
	node *new_node=(node *)malloc(sizeof(node));
	if(new_node==NULL)
	{
		printf("Memory is not Allocated\n");
	}
	else
	{
		new_node->ch=c;
		new_node->link=NULL;													if((*head_node)==NULL)
		{
			(*head_node)=(*temp)=new_node;
		}
		else
		{
			(*temp)->link=new_node;
			(*temp)=new_node;
		}
		(*temp)->link=(*head_node);
	}
}
void Display(node **head_node)
{
	if((*head_node)==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		node *temp=(*head_node);
		while(temp->link!=(*head_node))
		{
			printf("%c",temp->ch);
			temp=temp->link;
			if(temp->link!=(*head_node))
			{
				printf("-->");
			}
		}
		printf("-->");
		printf("%c",temp->ch);
		printf("\n");
	}
}

