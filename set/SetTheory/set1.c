#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include"set1.h"


void UnionSet(int set1[],int set2[],int set_size1,int set_size2)
{

    int  i=0,j=0,k=0,d[20];
    if(set_size1==0&&set_size2==0)
    printf("\n\t\t\tSets Are Empty ...Enter Elements First ");
    else
    {
            printf("\n\t\t\tUnion Is ");
            while(i<set_size1&&j<set_size2)
            {
                if(set1[i]<set2[j])
                d[k++]=set1[i++];
                else if(set1[i]>set2[j])
                d[k++]=set2[j++];
                else
                {
                    d[k++]=set2[j++];
                    i++;
                }
            }
            while(j<set_size2)
            d[k++]=set2[j++];

            while(i<set_size1)
            d[k++]=set1[i++];

            DisplaySet(d,k);

    }
}


void InsertSet(int set1[],int *set_size1)
{

                int element,w,j,ctr=0,setsize;
				printf("\n\t\t\tEnter Element: ");
				scanf("%d",&element);
				w=*set_size1;
				if(w==0)
				set1[w++]=element;
				else
				{
					j=w-1;
					while(j>=0)
					{
						if(set1[j]==element)
						{
							printf("\n\t\t\tElement Already Exists In Set..Kindly Enter Another Element");
							ctr=-1;
							break;
						}
						else
						ctr=0;
                        j--;
				   }
					if(ctr==0)
					set1[w++] = element;
				}
                *set_size1=w;
                setsize= *set_size1;
                DisplaySet(set1,setsize);
}
void DisplaySet(int set1[],int set_size1)
{   int x;
    if(set_size1==0)
        printf("\n\t\t\tSet Is Empty...Kindly Enter Values First");
    else
        {
            printf("\n\t\t\tSet Contains Elements..");
            printf("\n\t\t\t{");
            for( x=0;x<set_size1;x++)
            {
                printf("%d",set1[x]);
                printf(",");
            }
            printf("}");
        }
}
void SortSet(int set1[],int set_size1)
{
        int temp,i,j;
        for(i=0;i<set_size1;i++)
        {

            for( j=0;j<(set_size1-1)-i;j++)
            {
                if(set1[j]>set1[j+1])
                {
                    temp=set1[j];
                    set1[j]=set1[j+1];
                    set1[j+1]=temp;
                }
            }
        }


}
void DeleteSet(int set1[],int *set_size1)
{
    int setsize,item,loc=-1,p;
    if(*set_size1==0)
        printf("\n\t\t\tSet is Empty ...Cant Perform Deletion Operation ");
    else
    {
        printf("\n\t\t\tEnter Element Which Needs To Be Deleted From Set ");
        scanf("%d",&item);
        for( p=0;p<*set_size1;p++)
        {

            if(set1[p]==item)
            {
                loc=p;
                break;
            }
        }
        if(loc==-1)
        printf("\n\t\t\tElement Not Present In Set ");
        else
        {
            for(p=loc;p<*set_size1;p++)
                set1[p]=set1[p+1];
            *set_size1-=1;
            if(*set_size1==0)
                printf("\n\t\t\tSet Is Now Empty After Deletion");
            else
                printf("\n\t\t\tNow The Set Contains ");

            setsize = *set_size1;
            DisplaySet(set1,setsize);
        }
    }
}





void IntersectionSet(int set1[],int set2[],int set_size1,int set_size2)
{


    int c[20],k=0,i,j;
    for(i=0;i<set_size1;i++)
    {

        for(j=0;j<set_size2;j++)
        {
            if(set1[i]==set2[j])
                {c[k++]=set1[i];
                break;
                }

        }
    }
    if(k==0)
        printf("NULL");
    else

    {   DisplaySet(c,k);
    }

}
void DifferenceSet(int set1[],int set2[],int set_size1,int set_size2)
{


    int e[20],k=0,i,j,ctr=1;
    for(i=0;i<set_size1;i++)
    {

        for(j=0;j<set_size2;j++)
        {
            if(set1[i]==set2[j])
                {
                    ctr=0;
                    break;
                }
            else
                ctr=1;



        }
        if(ctr==1)
            e[k++]=set1[i];
    }



        if(k==0)
            printf("NULL");
        else
        {


        DisplaySet(e,k);
        }

}


void printPowerSet(int set1[], int set_size1)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size1);
    int counter, j;
      printf("{");
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {    printf("{");
      for(j = 0; j < set_size1; j++)
       {
	  /* Check if jth bit in the counter is set
	     If set then pront jth element from set */
	  if(counter & (1<<j))
	    {
	    printf("%d", set1[j]);
	    printf(",");
	    }
       }
       printf("}");
    }
    printf("}");
}

void CartesianProduct(int set1[],int set2[],int set_size1,int set_size2)
{      int i,j;
	printf("{");
   for(i=0;i<set_size1;i++)
   {
	for(j=0;j<set_size2;j++)
	{
		printf("{%d",set1[i]);
		printf(",");
		printf("%d",set2[j]);
		printf("},");
	}

   }
   printf("}");
}

