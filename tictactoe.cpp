#include<stdio.h>
main()
{
	char a[3][3];
	int x,y,pp1=0;
	char p1[100],p2[100];
	printf("enter player one name:\n");
	gets(p1);
	printf("enter player two name:\n");
	gets(p2);
	printf("\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		a[i][j]=' ';
	}
	for(int i=0;i<9;i++)
	{
	   if(i%2==0)
	   {
	   	puts(p1);
		printf(" enter your desired position index:");
	   	scanf("%d%d",&x,&y);
	   	a[x][y]='x';
	   	if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[2][0]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[2][1]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[2][2]=='x')
	   	{
	      pp1=1;
	      goto outloop;
	    }
	   	        
	   }
	   else
	   {
	   	puts(p2);
		printf(" enter your desired position index:");
	   	scanf("%d%d",&x,&y);
	   	a[x][y]='o';
	   	if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[2][0]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[2][1]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[2][2]=='o')
	   	{
	      pp1=2;
	      goto outloop;
	    }
	   	
	   }
	}
	
	outloop:
		{
			if(pp1==1)
			{
			  puts(p1);
			  printf(" is the winner!!!");
		    }
			else if(pp1==2)
			{
			  puts(p2);
			  printf(" is the winner!!!");
		    }
			else
			printf("its a draw");
		}
	for(int i=0;i<3;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
		   printf("%c\t",a[i][j]);
			
		}
	}
}
