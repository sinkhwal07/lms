#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

 using namespace std;
 
  struct classstudent//class student str 
 {
 	int bookID;
 	char title[50];
 	char authorofbook[50];
 	int costofbook;
 	
 	
 		
 };
 
 int books=5;//max no of books+5
 int arr;//array declare gareko
 
 classstudent classstudentobj[books];
 
 void Add_Book()//book record
 {
 	if(arr<books)
 	{
 		cout<<"enter the details of the books"<<endl;
 		cout<<"enter the book id"<<endl;
 		cin>>classstudent[arr].bookID;
 		cout<<"enter the book title"<<endl;
 		cin>>classstudentobj[arr].title;
 		cout<<"enter the author of the book"<<endl;
 		cin>>classstudentobj[arr].authorofbook;
 		cout<<"enter the cost of the book"<<endl;
 		cin>>classstudentobj[arr].costofbook;
 		arr++;
 		}
 		else
 		{
 			cout<<"no space available"<<endl;
 			
		 }
 }
  
void Display_Books()//for displaying the book records
{
	for (int i=0; i < arr; i++)
	{
		cout<<"THE DETAILS OF THE ALL BOOKS IN LIBRARY";
		cout<<"Book id is:"<<classstudentobj[i].bookID<<endl;
		cout<<"Book title is:"<<classstudentobj[i].title<<endl;
		cout<<"author name is:"<<classstudentobj[i].authorofbook<<endl;
		cout<<"cost of book is"<<classstudentobj[i].costofbook<<endl;
		
	}
	
 }
 
  void Book_Author()// can be searched by using author name
  {
  	char search_book[50];
  	cout<<"enter the name of the author"<<endl;
  	cin>>search_book;
  	int i=0;
  	while(i<arr)
  	{
  		if(strcmp(search_book,classstudentobj[i].authorofbook)==0)
  		{
  			cout<<endl;
  			cout<<"Book title is:"<<classstudentobj[i].title<<endl;
  			cout<<"book id is:"<<classstudentobj[i].bookID<<endl;
  			cout<<"author name is:"<<classstudentobj[i].authorofbook<<endl;
  			cout<<"cost of the book is:"<<classstudentobj[i].costofbook<<endl;
  			i++;
  			
  			
  			
		  }
	  }
  }
  

 int main(){
 	int choice;
 	char input;
 	do
 	{
 		cout<<"LIBRARY BOOK RECORD SYSTEM"<<endl;
 		cout<<"press 1 to enter a book record"<<endl;
 		cout<<"press 2 to displaY ALL RECOrds of the book: "<<endl;
 		cout<<"press 3 to search book by author name:"<<endl;
 		cout<<"press 4 to count total books in library:"<<endl;
 		cout<<"press 5 to  exit"<<endl;
 		cin>>choice;
 		
 		 switch(choice)
 		 {
 		 	case 1:
 		 		Add_Book();
 		 		break;
 		 		
 		 	
		   case 2:
			  Display_Books();
			  break;
			  
			case 3:
			 Book_Author();
			 break;
			 
			case 4:
				
			 cout<<"the total no. of books are:"<<arr<<endl;
			 break;
			
			case 5:
		     exit(0);
			 
			default:
			cout<<"invalid choice :(";
			 		
			  	
		  }
		 cout<<"do you waNT to continue,please press y/Y"<<endl;
		 cin>>input;
		   
	 }while(input=='y'||input=='Y');
 }

