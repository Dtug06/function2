#include<stdio.h> 
int main (){
	int array[10] ={0,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<10;i++) {
		printf("%d\n",array[i]); 
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
			if (array[j]>array[j+1]) {
			int temp=array[j] ;
			array[j]=array[j+1] ;
			array[j+1]=temp; 
		}
		} 
	} 
	printf("sau khi sap xep\n"); 
	for(int i=0;i<10;i++) {
		printf("%d\n",array[i]); 
	}
	return 0; 
}
