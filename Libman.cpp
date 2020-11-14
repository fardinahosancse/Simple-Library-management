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
    cout<<" ( P )       Short Books(Price)"<<endl;

    char s;
    cin>>s;


    void add();
    void see();
    void wash();
    void arrange();
    void infographic();


    switch (s)
    {
            case 'a':
		 	case 'A': add();break;

			case 's':
		 	case 'S': see();break;;

            case 'D' :
            case 'd' : wash(); break;

            case 'p' :
            case 'P' : arrange(); break;
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

           
           cout<<"     "<<books[i].bookName<<"             "<<books[i].authorName<<"               "<<books[i].price<<"                "<<books[i].year<<endl;
       }
       cout<<":";

getch();
    }

// Add Book Info
    int  add()
    {
        system("cls");
        char ch;
        bool f = true;
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
        if(f == true)
        {
          n++;
        }
        

        cout<<"Do you wan to add more book? [y/n]";
        ch = getch();
        }
        while(ch != 'n' && ch != 'N');


    }

    //only for showing info of 
    //Current Books
    //After Deleting from shelf
    //shpwing rest of the books
    int infographic()
    {

       static int i = 0;
       system("cls");
       cout<<"All Books in Digital Shelf"<<endl;
       cout<<"   Book Name    "<<"    Author Name    "<< "     Price     "<<"     Year     "<<endl;
       for(i = 0; i<n; i++)
       {
           cout<<"     "<<books[i].bookName<<"             "<<books[i].authorName<<"               "<<books[i].price<<"                "<<books[i].year<<endl;
       }

    }


   //This function made for remove books
    int wash()
    {
      system("cls");
      static char ch;
      static int k ;
      static int i = 0;
       system("cls");

       //Calling this function before deleting any of book
       infographic();

        cout<<"Whic book do you want to delete?";
       cin>>k;
        do
       {
           //Setting Book info to be empty
           books[k].bookName = '\0';
           books[k].authorName = '\0';
           books[k].price = '\0';
           books[k].year = '\0';
           cout<<"Book Deleted :"<<k<<endl;

           //After Deleting Books from shelf
           infographic();


           
           cout<<"Press N to go Main Menu";
           ch = getch();
       }
       while(ch != 'n' && ch != 'N');

    }

    int arrange()
    {
        system("cls");
        cout<< "Coming Soooooon ! ";
       
    }











