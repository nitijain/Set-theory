
#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED
void InsertSet(int set1[],int *set_size1);	//Function to Insert Elements Into Set
int  BitMap(int set1[], int set_size1);		//Function to Convert Set into Bitmap
void UnionSet(int set1[], int set_size1,int set2[], int set_size2);       //Function to Perform Union of Two Sets
void  IntersectionSet(int set1[], int set_size1,int set2[], int set_size2);  //Function to Perform Intersection of Two Sets
void DifferenceSet(int set1[], int set_size1,int set2[], int set_size2);    //Function to Perform Difference of Two Sets
void Change(int  bitmap);							//Function to convert Bitmap into Set
void printPowerSet(int set1[], int set_size1);      //Function To Print PowerSet of a Given Set
void CartesianProduct(int set1[],int set_size1,int set2[],int set_size2);  //Function to Find Cartesian Product of two Sets
void DisplaySet(int set1[],int set_size1);			//Function to Display the Set
void DeleteSet(int set1[],int *set_size1);			//Function to Delete element from Set

#endif // SET_H_INCLUDED

