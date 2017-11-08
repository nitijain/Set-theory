#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"set.h"
using namespace std;
int main()
{
	int a[10],b[10],sz=0,sz1=0;

	char ch;
       do{

		int c;
		cout<<"\n\t\t\t      MENU  ";
		cout<<"\n\n\t\t\t 1.Insertion In Set A";
		cout<<"\n\t\t\t 2.Insertion In Set B";
		cout<<"\n\t\t\t 3.Deletion In Set A";
		cout<<"\n\t\t\t 4.Deletion In Set B";
		cout<<"\n\t\t\t 5.Display Set A";
		cout<<"\n\t\t\t 6.Display Set B";
		cout<<"\n\t\t\t 7.Union Of Sets A And B ";
		cout<<"\n\t\t\t 8.Intersection Of Sets A And B ";
		cout<<"\n\t\t\t 9.Difference Of Sets A And B ";
		cout<<"\n\t\t\t 10.Difference Of Sets B And A";
        cout<<"\n\t\t\t 11.Exit";
		cout<<"\n\n\t\t\t Enter Your Choice ";
		cin>>c;

		switch(c)
		{
		case  1 :
                    insert1(a,sz);

                    display(a,sz);


                    break;

	case  2 :
                    insert1(b,sz1);

                    display(b,sz1);


                    break;


    case 3:         delete1(a,sz);
                    break;
    case 4:         delete1(b,sz1);
                    break;
    case 5:
                    display(a,sz);
                    break;
    case 6:
                    display(b,sz1);
                    break;
	case 7 :        sort(a,sz);
                    sort(b,sz1);
                    union1(a,b,sz,sz1);
                    break;
    case 8 :        cout<<"\n\t\t\tIntersection Is ";
                    sort(a,sz);
                    sort(b,sz1);
                    intersection(a,b,sz,sz1);
                    break;
    case 9 :        cout<<"\n\t\t\tDifference A-B Is ";
                    difference(a,b,sz,sz1);
                    break;
    case 10:        cout<<"\n\t\t\tDifference B-A Is ";
                    difference(b,a,sz1,sz);
                    break;



    case 11:        exit(1);

	}
	cout<<"\n\t\t\tDo You Wish To Continue ?";
	cin>>ch;
       }while(ch=='y'||ch=='Y');




	getch();
	return 0;
}
