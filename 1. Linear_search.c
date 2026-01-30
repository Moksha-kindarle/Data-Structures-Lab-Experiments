#include<stdio.h>
void main() {

	int n,key;
	int arr[100];
	int flag = 0,pos;
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	for(int i=0; i<n; i++){
		if(arr[i] == key){
			flag = 1;
			pos = i;
			break;
		}
	
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}
