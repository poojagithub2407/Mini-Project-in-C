#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Book
{
	char title[20];
	char author[20];
	int page;
	float price;
}Book;

Book *book;
int count=0; //Global Count variable
int size; // Global variable for Dyanamic Memory Allocation

//function to add New Book
void addBook()
{
	
	system("cls");
	system("color 41");
	printf("\n*********** Add New Book Detail*************");
	printf("\nEnter Book Title  :  ");
	gets(book[count].title);
	printf("\nEnter Book Author :  ");
	fflush(stdin);
	gets(book[count].author);
	printf("\nEnter Book Price  :  ");
	scanf("%f",&book[count].price);
	printf("\nEnter Book Page   :  ");
	scanf("%d",&book[count].page);
	count++;
	
}

//function to show all Book records
void showAllBook()
{
	int i;
	system("cls");
	system("color 71");
	printf("\n\n\t\t\t@@@@@@@@@@@@@@@@@@ BooK Details @@@@@@@@@@@@@@@@@@@");
	printf("\n\n\t\t-------------------------------------------------------------------------------------");
	printf("\n\t\tBook Title\t\tBook Author\t\tBook Price\t\tBooK Page");
	printf("\n\t\t--------------------------------------------------------------------------------------");
	for(i=0;i<count;i++)
	{
		printf("\n\t\t%s",book[i].title);
		printf("\t\t\t%s",book[i].author);
		printf("\t\t\t%f",book[i].price);
		printf("\t\t%d",book[i].page);
    }
}
//function to searchBook Book by Title
void searchBook()
{
	char btitle[10];
	int i;
	printf("\nEnter Book title to be Search : ");
	gets(btitle);
	for(i=0;i<count;i++)
	{
		if(strcmp(book[i].title,btitle)==0)
		{
			system("cls");
			printf("\n\n\t\t ######## Book Details ####### ");
			printf("\n\n\t\tBook Title  : %s",book[i].title);
	        printf("\n\n\t\tBook Author : %s",book[i].author);
			printf("\n\n\t\tBook Price  :%f",book[i].price);
			printf("\n\n\t\tBook Page   :%d",book[i].page);
		}
	}
}

//function to removeBook Book by Title
void removeBook()
{
	char btitle[10];
	int i,j;
	Book temp;
	printf("\nEnter Book title to be remove:  ");
	gets(btitle);
	for(i=0;i<count;i++)
	{
		if(strcmp(book[i].title,btitle)==0)
		{
			system("cls");
			printf("\n\n\t\tBook Title  : %s",book[i].title);
			printf("\n\n\t\tBook Author : %s",book[i].author);
			printf("\n\n\t\tBook Price  :%f",book[i].price);
			printf("\n\n\t\tBook Page   :%d",book[i].page);
		          for(j=i;j<count-1;j++)
		          book=book+1;
		          count--;
		          return ;
		}
    }
}

//function to update Book by Title
void updateBook()
{
      char btitle[10];
	  int i,j;
	  Book temp;
	  printf("\nEnter Book title to be Remove:");
	  gets(btitle);
	  for(i=0;i<count;i++)
	  {
	  	if(strcmp(book[i].title,btitle)==0)
	  	{
	  		system("cls");
	  		printf("\n\n\t\t ######## Book Details ####### ");
			printf("\n\n\t\tBook Title  : %s",book[i].title);
	        printf("\n\n\t\tBook Author : %s",book[i].author);
			printf("\n\n\t\tBook Price  :%f",book[i].price);
			printf("\n\n\t\tBook Page   :%d",book[i].page);
			
			printf("\n*********** Add New Book Detail*************");
			printf("\nEnter Book Title  :  ");
			gets(book[count].title);
			printf("\nEnter Book Author :  ");
			fflush(stdin);
			gets(book[count].author);
			printf("\nEnter Book Price  :  ");
			scanf("%f",&book[count].price);
			printf("\nEnter Book Page   :  ");
	        scanf("%d",&book[i].page);
		}
	  }	
}
void main()
{
	int choice;
	printf("\nEnter Total No. of Books You Want to Add in Library  :  ");
	scanf("%d",&size);
	
	//Create Book Array Dyanmic using size input by user
	
	book=(Book*) malloc(sizeof(Book)*size);
	do{
		system("cls");
		printf("\n1.Add Book\n2.Show All Books\n3.Search Book\n4.Update Book\n5Remove Book");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice)
		{
			case 1:
				   addBook();    //Function call to  Add Book Details
				   break;
				   
		    case 2:
			       showAllBook();   //Function call to Show all Book Details
			       break;
			       
		    case 3:
			       searchBook();   //Function call to search Book Details
				   break;	
				  
			case 4:
			       updateBook();   //Function call to Update Book Details
				   break;
				   
			case 5:
			       removeBook(); // function call to remove Book Details
				   break;			   
			case 6:
			       return;	   	   	   	   		   
		}
		getch();
		
	}while(1);
	
}
