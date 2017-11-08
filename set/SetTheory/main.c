#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include "set1.h"

int main()
{
	int set1[10],set2[10],set_size1=0,set_size2=0;

	 int choice;
      	do{

		int menuchoice;
		printf("\n\t\t\t      MENU  ");
		printf("\n\n\t\t\t 1.Insertion In Set A");
		printf("\n\t\t\t 2.Insertion In Set B");
        printf("\n\t\t\t 3.Deletion In Set A");
		printf("\n\t\t\t 4.Deletion In Set B");
		printf("\n\t\t\t 5.Display Set A");
		printf("\n\t\t\t 6.Display Set B");
		printf("\n\t\t\t 7.Union Of Sets A And B ");
		printf("\n\t\t\t 8.Intersection Of Sets A And B ");
		printf("\n\t\t\t 9.Difference Of Sets A And B ");
		printf("\n\t\t\t 10.Difference Of Sets B And A");
        printf("\n\t\t\t 11.Power set Of Sets A");
		printf("\n\t\t\t 12.Power set Of Set B");
		printf("\n\t\t\t 13.Cartesian Product Of Sets A and B");
        printf("\n\t\t\t 14.Exit");
		printf("\n\n\t\t\t Enter Your Choice ");
		scanf("%d",&menuchoice);

		switch(menuchoice)
		{
                    case  1 :
                                    InsertSet(set1,&set_size1);
                                    break;

                    case  2 :
                                    InsertSet(set2,&set_size2);
                                    break;


                    case 3:         DeleteSet(set1,&set_size1);
                                    break;

                    case 4:         DeleteSet(set2,&set_size2);
                                    break;
                    case 5:
                                    DisplaySet(set1,set_size1);
                                    break;
                    case 6:
                                    DisplaySet(set2,set_size2);
                                    break;

                    case 7 :        SortSet(set1,set_size1);
                                    SortSet(set2,set_size2);
                                    UnionSet(set1,set2,set_size1,set_size2);
                                    break;

                    case 8 :        printf("\n\t\t\tIntersection Is ");
                                    SortSet(set1,set_size1);
                                    SortSet(set2,set_size2);
                                    IntersectionSet(set1,set2,set_size1,set_size2);
                                    break;

                    case 9 :        printf("\n\t\t\tDifference A-B Is ");
                                    DifferenceSet(set1,set2,set_size1,set_size2);
                                    break;

                    case 10:        printf("\n\t\t\tDifference B-A Is ");
                                    DifferenceSet(set2,set1,set_size2,set_size1);
                                    break;

                    case 11:	    printf("Power set of A is ");
                                    printPowerSet(set1,set_size1);
                                    break;

                    case 12:	    printf("Power set of B is ");
                                    printPowerSet(set2,set_size2);
                                    break;

                    case 13:        printf("Cartesian Product of Set A and Set B is ");
                                    CartesianProduct(set1,set2,set_size1,set_size2);
                                    break;


                    case 14:        exit(1);

        }
        printf("\n\t\t\tDo You Wish To Continue ? 1-Yes and 2-No");
        scanf("%d",&choice);
    }while(choice==1);
    getch();
	return 0;
}
