//Sort the array elements in ascending order.
#include<stdio.h>

int main(){
	
	int n;
	printf("\nEnter Array Size: ");
	scanf("%d",&n);
	int i, arrNum[n];
	for(i=0;i<n;i++){
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arrNum[i]);
	}
	
	//Bubble Sort
	int j;
	for (i=0;i<n;i++){
		for(j=0; j<n-1;j++){
			if(arrNum[j]>arrNum[j+1]){
				//Swapping using Bitwise Operator
				arrNum[j]=arrNum[j]^arrNum[j+1];
				arrNum[j+1]=arrNum[j]^arrNum[j+1];
				arrNum[j]=arrNum[j]^arrNum[j+1];
			}
		}
	}
	
	printf("\nSorted Array: ");
	for(i=0;i<n;i++){
		printf("%d ",arrNum[i]);
	}
	
	return 0;
}
