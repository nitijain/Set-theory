



#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include "SET-THEORY.h"
#define LARGE 20
int main()
{
        int set1[LARGE],set2[LARGE],set_size1=0,set_size2=0;
        int choice;
      	do
        {
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
					case 1:			InsertSet(set1,&set_size1);
                                    break;

					case 2:			InsertSet(set2,&set_size2);
                                    break;

                    case 3:         DeleteSet(set1,&set_size1);
                                    break;

                    case 4:         DeleteSet(set2,&set_size2);
                                    break;

                    case 5:			DisplaySet(set1,set_size1);
                                    break;

                    case 6:			DisplaySet(set2,set_size2);
                                    break;

                    case 7:         UnionSet(set1,set_size1,set2,set_size2);
                                    break;

                    case 8:
                                      printf("\n\t\t\t Intersection :");
                                    IntersectionSet(set1,set_size1,set2,set_size2);

                                    break;

                    case 9:
                                    printf("\n\t\t\t Difference A-B :");
                                    DifferenceSet(set1,set_size1,set2,set_size2);
                                    break;

                    case 10:        printf("\n\t\t\tDifference B-A : ");
                                    DifferenceSet(set2,set_size2,set1,set_size1);
                                    break;

                    case 11:	    printf("\n\t\t\tPower set of A : ");
                                    printPowerSet(set1,set_size1);
                                    break;

                    case 12:	    printf("\n\t\t\tPower set of B : ");
                                    printPowerSet(set2,set_size2);
                                    break;

                    case 13:        printf("\n\t\t\tCartesian Product of Set A and Set B :");
                                    CartesianProduct(set1,set_size1,set2,set_size2);
                                    break;

					case 14:        exit(1);

                    default:		printf("\n\t\t\tEnter a valid choice between 0-14   :");

        }
        printf("\n\t\t\tDo You Wish To Continue ? Press 1-yes or 2-no  :");
        scanf("%d",&choice);
        while (!(choice==1||choice==2))
        {
            printf("\n\t\t\tInvalid Choice..Either Enter 1 or 2   :");
            scanf("%d",&choice);
        }
    }while(choice==1);

	return 0;
}

