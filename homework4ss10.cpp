#include<stdio.h>
int main (){
	int array[10] ={1,2,3,68,5,6,7,8,9,0};
	int minNumber,temp; 
	for (int i=0;i<10-1;i++) {
		minNumber=i;
		for(int j=i+1;j<10;j++) {
			if (array[j]<array[i]){
				temp=array[j];
				array[j]=array[i] ;
				array[i]=temp; 
			} 
			minNumber=j ;
		}
	}
	for(int i=0;i<10;i++){
		printf("%d\n",array[i]); 
	} 
return 0;	
	 
} 
