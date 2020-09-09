//Search for a given element in an integer array (randomly placed elements)
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
	
	int find;
	printf("\nEnter the element to search: ");
	scanf("%d",&find);
	
	for(i=0;i<n;i++){
		if(arrNum[i]==find){
			break;
		}
	}
	
	if(i==n){
		printf("\nElement not found!");
	}else{
		printf("\nElement %d found at Location %d",find, i+1);
	}
	
	return 0;
}
