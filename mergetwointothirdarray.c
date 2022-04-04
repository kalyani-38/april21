//Write a C program to merge two arrays to third array.


#include<stdio.h>
 
int main()
{
 	
	int a[10], b[10], Merged[20],i,j,m,n;
  
 	printf("\n Please Enter the First Array Size  :  ");
 	scanf("%d", &n);
 
 	printf("\nPlease Enter the First Array Elements :  ");
 	for(i = 0; i < n; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\n Please Enter the Second Array Size  :  ");
 	scanf("%d", &n);
   
 	printf("\nPlease Enter the Second Array Elements  :  ");
 	for(i = 0; i < n; i++)
  	{
      	scanf("%d", &b[i]);
  	}
  	
  	for(i = 0; i < n; i++)
  	{
      	Merged[i] = a[i];
  	}
  	
	m = n+n;
 	for(i = 0, j = n; j < m && i < n; i++, j++)
  	{
  		Merged[j] = b[i];
  	}
 
 	printf("\n a[%d] Array Elements After Merging \n", m); 
 	for(i = 0; i < m; i++)
  	{
    	printf(" %d \t ",Merged[i]);
  	}
 
  	return 0;
}
