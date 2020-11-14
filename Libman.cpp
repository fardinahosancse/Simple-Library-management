#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>


using namespace std;




struct book //Book Info
{
    int price;
    int year;
    string bookName;
    string authorName;

};

      book books[1000]; //Array of structure
      int n = 0;
      int i = 0;

//////////////////////////////////
int main()
{
    while(1)
    {
        system("cls");


    cout<<"------Main Menu------"<<endl;

    cout<<" ( A )       Add Books"<<endl;
    cout<<" ( S )       See All Books"<<endl;
    cout<<" ( D )       Delete Books"<<endl;
    cout<<" ( S )       Short Books(Price)"<<endl;

    char s;
    cin>>s;


    void add();
    void see();
    void wash();


    switch (s)
    {
            case 'a':
		 	case 'A': add();break;

			case 's':
		 	case 'S': see();break;;

            case 'D' :
            case 'd' : wash(); break;

   // case 'X' :
  //  case 'x' : shortr(); break;
            default:
                getch();
      }

    }
    getch();
}

//Displaying Books Info
  int see()
    {
       static int i = 0;
       system("cls");
       cout<<"Showing Information of added book"<<endl;
       cout<<"   Book Name    "<<"    Author Name    "<< "     Price     "<<"     Year     "<<endl;
       for(i = 0; i<n; i++)
       {

           system("cls");
           cout<<"     "<<books[i].bookName<<"             "<<books[i].authorName<<"               "<<books[i].price<<"                "<<books[i].year<<endl;
       }
       cout<<"Press Enter to go main";

getch();
    }

// Add Book Info
    int  add()
    {
        system("cls");
        char ch;

        do
        {
        system("cls");
        cout<<"Enter Book name : ";
        cin>>books[n].bookName;

        cout<<"Enter Author name : ";
        cin>>books[n].authorName;

        cout<<"Enter Price : ";
        cin>>books[n].price;

        cout<<"Enter Year : ";
        cin>>books[n].year;

        //To the Next Struct
        n++;

        cout<<"Do you wan to add more book? [y/n]";
        ch = getch();
        }
        while(ch != 'n' && ch != 'N');


    }


    int wash()
    {
      system("cls");
      static char ch;
      static int k ;
      static int i = 0;
       system("cls");
       see();

        cout<<"Whic book do you want to delete?";
       cin>>k;
        do
       {
           books[k].bookName = '\0';
           books[k].authorName = '\0';
           books[k].price = '\0';
           books[k].year = '\0';
           cout<<"Successfully Deleted !";
           ch = getch();
           see(); 
       }
       while(ch != 'n' && ch != 'N');

    }

    int shortr()
    {
        system("cls");
        cout<< "Coming Soooooon ! ";
    }








