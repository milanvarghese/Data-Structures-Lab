//Search for all the occurrence of an element in an integer array (positions)
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
	
	int find,flag=0;
	printf("\nEnter the element to search: ");
	scanf("%d",&find);
	
	for(i=0;i<n;i++){
		if(arrNum[i]==find){
			printf("\nElement %d found at Location %d",find, i+1);
			flag=1;
		}
	}
	
	if(flag==0){
		printf("\nElement not found!");
	}
	
	return 0;
}
