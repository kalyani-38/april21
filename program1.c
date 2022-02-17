[200~#include <stdio.h>

void main()
{

	    int arr[] = { 0,0,0,1,1,1,0},i,count_0=0,count_1=0;
	        for(i=0;i<7;i++){

			      if(arr[i]==0){
				            count_0++;
					          printf("print the count_0 value=%d\n",i);
						      }
			            else if(arr[i]==1){
					          count_1++;

						         printf("print the one value=%d\n",i);

							       } 
				          printf("position=%d\n",i);
					        }
