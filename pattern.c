#include<stdio.h>
int main()
{
	int i=1,j=1,row,col,n,dec=0;
        printf("Enter number of rows\n");
	scanf("%d",&row);
	col = (2*row);
	if(col%2==0)
		n = col/2;
	while(i<=row)
	{
		for(j=1;j<=col;j++)
		{
			if(j==n-dec)
				printf("/");												            else if(j==n+dec+1)
					printf("\\");
			else if(dec == row-1 && row==i)
			{
				if(j==1)
					printf("/");
				else if(j==col)
					printf("\\");
				else
					printf("_");
			}
			else
				printf(" ");
		}
		printf("\n");
		dec++;
		i++;
	}
	return 0;
}
