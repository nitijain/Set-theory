
#define LARGE 20
#include "SET-THEORY.h"
void InsertSet(int set1[],int *set_size1)
{
                /*Function to Insert Elements Into Set*/

                int element,temp_size,index,counter=0,setsize;
				printf("\n\t\t\tEnter Element: ");
                printf("\n\t\t\tElement should be between 0 - 20  :");
				scanf("%d",&element);
				while(element >20 )
                {
                    printf("\n\t\t\tElement is more than 20");
                    printf("\n\t\t\tEnter Element: ");
                    printf("\n\t\t\tElement should be between 0 - 20  :");
                    scanf("%d",&element);
                }
				temp_size=*set_size1;
				if(temp_size==0)
                    set1[temp_size++]=element;
				else
				{
					index=temp_size-1;
					while(index>=0)
					{
									if(set1[index]==element)
									{
										printf("\n\t\t\tElement Already Exists In Set..Kindly Enter Another Element");
										counter=-1;
										break;
									}
									else
										counter=0;
									index--;
				    }
					if(counter==0)
					set1[temp_size++] = element;
				}
                *set_size1=temp_size;
                setsize= *set_size1;
                DisplaySet(set1,setsize);
}
int  BitMap(int set1[], int set_size1)
{
            /*Function to Convert Set into Bitmap*/
		    int index;
            int  bitmap  =0;  //initializing to 0
            for( index = 0; index <set_size1; index++)
                bitmap |= 1 << (set1[index]);
            return bitmap;
}
void UnionSet(int set1[], int set_size1,int set2[], int set_size2)
{
    /*Function to Perform Union of Two Sets*/

            int  temp,bitmap1=0,bitmap2=0;

            if(set_size1==0&&set_size2==0)
                printf("\n\t\t\tSets Are Empty ...Enter Elements First ");
			else
			{   printf("\n\t\t\tUnion : ");
			    bitmap1=BitMap(set1,set_size1); //returns bitmap of set1
                bitmap2=BitMap(set2,set_size2); //returns bitmap of set2
                temp=bitmap1 | bitmap2 ;
                Change(temp); //changing the bitmap to Integer set
			}
}

void  IntersectionSet(int set1[], int set_size1,int set2[], int set_size2)
{
            /*Function to Perform Intersection of Two Sets*/
			int temp,bitmap1,bitmap2;
			if(set_size1==0&& set_size2==0)
                printf("\n\t\t\tNULL SET ----- SET A B both EMPTY");


		else if(set_size1==0)
            printf("\n\t\t\t NULL SET -------SET A EMPTY");
            else if(set_size2==0)
                 printf("\n\t\t\t NULL SET----- SET B EMPTY ");
                else
            {
                bitmap1=BitMap(set1,set_size1); //returns bitmap of set1
                bitmap2=BitMap(set2,set_size2); //returns bitmap of set2
                temp=bitmap1 & bitmap2 ;
                Change(temp); //changing the bitmap to Integer set
            }
}

void  DifferenceSet(int set1[], int set_size1,int set2[], int set_size2)
{
			/*Function to Perform Difference of Two Sets*/
            if(set_size1==0&& set_size2==0)
                printf("\n\t\t\tNULL SET ----- SET A B both EMPTY  ");
            else
			{
			int temp,bitmap1,bitmap2;
			bitmap1=BitMap(set1,set_size1); //returns bitmap of set1
			bitmap2=BitMap(set2,set_size2); //returns bitmap of set2
			temp=bitmap1 &(~bitmap2) ;
            Change(temp); //changing the bitmap to Integer set
			}
}

void Change(int bitmap)
{
            /*Function to convert Bitmap into Set*/
           int index1=0,index2;
           int set3[LARGE]={0}; //Initalizing the set to zero
           for(index2 = 0; index2 < LARGE; index2++)
           {
                 if((bitmap & (1 << index2)) > 0)
                 {
                      set3[index1] =index2;
                      index1++;
                 }

           }
           if(index1==0)
            printf("Null");
           else
            DisplaySet(set3,index1);

}

void printPowerSet(int set1[], int set_size1) /*Function To Print PowerSet of a Given Set*/
{
    /*set_size of power set of a set with set_size n is (2**n -1)*/

    unsigned int pow_set_size = pow(2, set_size1);
    int counter, index;
    printf("{");

    /*Run from counter 000..0 to 111..1*/

    for(counter = 0; counter < pow_set_size; counter++)
    {
		   printf("{");
		   for(index = 0; index< set_size1; index++)
		   {
				 /* Check if jth bit in the counter is set .If set then print jth element from set */
				 if(counter & 1<<index)
				 {
					printf("%d", set1[index]);
					printf(",");
				 }
		   }
		   printf("}");
    }
    printf("}");
}

void CartesianProduct(int set1[],int set_size1,int set2[],int set_size2)
{
    /*Function to Find Cartesian Product of two Sets*/
    int index1,index2;
    printf("{");
    for(index1=0;index1<set_size1;index1++)
    {
        for(index2=0;index2<set_size2;index2++)
        {
            printf("{%d",set1[index1]);
            printf(",");
            printf("%d",set2[index2]);
            printf("},");
        }

   }
   printf("}");
}
void DisplaySet(int set1[],int set_size1)
{
	/*Function to Display the Set*/
	int display_counter;
    if(set_size1==0)
        printf("\n\t\t\tSet Is Empty...Kindly Enter Values First");
    else
        {
            printf("\n\t\t\tSet Contains Elements..");
            printf("\n\t\t\t{");
            printf("%d",set1[0]);
            for( display_counter=1;display_counter<set_size1;display_counter++)
                printf(",%d",set1[display_counter]);
            printf("}");
        }
}

void DeleteSet(int set1[],int *set_size1)
{
    /*Function to Delete element from Set*/
    int setsize,item,location=-1,counter=0;
    if(*set_size1==0)
        printf("\n\t\t\tSET EMPTY ...Cant Perform Deletion Operation ");
    else
    {
        printf("\n\t\t\tEnter Element Which Needs To Be Deleted From Set ");
        scanf("%d",&item);
        for( counter=0;counter<*set_size1;counter++)
        {

            if(set1[counter]==item)
            {
                location=counter;
                break;
            }
        }
        if(location==-1)
        printf("\n\t\t\tElement Not Present In Set ");
        else
        {
            for(counter=location;counter<*set_size1;counter++)
                set1[counter]=set1[counter+1];
            *set_size1-=1;


            setsize = *set_size1;
            DisplaySet(set1,setsize);



        }
    }
}










