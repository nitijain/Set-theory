#include<iostream>
#include<stdlib.h>
#include"set.h"
using namespace std;

void insert1(int a[],int &sz)
{

                int x,w,j,ctr=0;
				cout<<"\n\t\t\tEnter Element: ";
				cin>>x;
				w=sz;
				if(w==0)
				a[w++]=x;
				else
				{
					j=w-1;
					while(j>=0)
					{
						if(a[j]==x)
						{
							cout<<"\n\t\t\tElement Already Exists In Set..Kindly Enter Another Element";
							ctr=-1;
							break;

						}
						else
						ctr=0;
                        j--;
					}

					if(ctr==0)
					a[w++]=x;
				}
                sz=w;



}
void display(int a[],int sz)
{
    if(sz==0)
        cout<<"\n\t\t\tSet Is Empty...Kindly Enter Values First";
        else
        {
    cout<<"\n\t\t\tSet Contains Elements..";
    cout<<"\n\t\t\t{";
    cout<<a[0];
    for(int x=1;x<sz;x++)
        cout<<","<<a[x];
        cout<<"}";
        }
}
void sort(int ar[],int sz)

{
        int tmp;
        for(int i=0;i<sz;i++)
        {

            for(int j=0;j<(sz-1)-i;j++)
            {
                if(ar[j]>ar[j+1])
                {

                tmp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
                }
            }
        }


}
void delete1(int a[],int &sz)
{
    int item,loc=-1,p;
    if(sz==0)
       {

        cout<<"\n\t\t\tSet is Empty ...Cant Perform Deletion Operation ";

       }
    else
    {
    cout<<"\n\t\t\tEnter Element Which Needs To Be Deleted From Set ";
    cin>>item;

    for( p=0;p<sz;p++)
    {

        if(a[p]==item)
        {

            loc=p;
            break;
        }
    }
    if(loc==-1)
    {

        cout<<"\n\t\t\tElement Not Present In Set ";

    }
    else
    {


            for(p=loc;p<sz;p++)
            {

                a[p]=a[p+1];

            }
            sz=sz-1;

            if(sz==0)
                cout<<"\n\t\t\tSet Is Now Empty After Deletion";
            else
               cout<<"\n\t\t\tNow The Set Contains ";
                display(a,sz);
    }
    }
}
void union1(int a[],int b[],int sz,int sz1)
{

    int  i=0,j=0,k=0,d[20];
    if(sz==0&&sz==0)
    cout<<"\n\t\t\tSets Are Empty ...Enter Elements First ";

    else

    {       cout<<"\n\t\t\tUnion Is ";
            while(i<sz&&j<sz1)
            {
                if(a[i]<b[j])
                d[k++]=a[i++];
                else if(a[i]>b[j])
                d[k++]=b[j++];
                else
                {
                    d[k++]=b[j++];
                    i++;
                }
            }
            while(j<sz1)

                d[k++]=b[j++];

            while(i<sz)

                d[k++]=a[i++];

            display(d,k);

    }
}
void intersection(int a[],int b[],int sz,int sz1)
{


    int c[20],k=0,i,j;
    for(i=0;i<sz;i++)
    {

        for(j=0;j<sz1;j++)
        {
            if(a[i]==b[j])
                {c[k++]=a[i];
                break;
                }

        }
    }
    if(k==0)
        cout<<"NULL";
    else
    {   display(c,k);
    }

}
void difference(int a[],int b[],int sz ,int sz1)
{


    int e[20],k=0,i,j,ctr=1;
    for(i=0;i<sz;i++)
    {

        for(j=0;j<sz1;j++)
        {
            if(a[i]==b[j])
                {
                    ctr=0;
                    break;
                }
            else
                ctr=1;



        }
        if(ctr==1)
            e[k++]=a[i];
    }



        if(k==0)
            cout<<"NULL";
        else
        {


        display(e,k);
        }

}

