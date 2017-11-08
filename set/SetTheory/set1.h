#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED

void InsertSet(int set1[],int *set_size1);
void SortSet(int set1[],int set_size1);
void DisplaySet(int set1[],int set_size1);
void DeleteSet(int set1[],int *set_size1);
void UnionSet(int set1[],int set2[],int set_size1,int set_size2);
void IntersectionSet(int set1[],int set2[],int set_size1,int set_size2);
void DifferenceSet(int set1[],int set2[],int set_size1,int set_size2);
void printPowerSet(int set1[], int set_size1);
void CartesianProduct(int set1[],int set2[],int set_size1,int set_size2);
#endif // SET_H_INCLUDED
