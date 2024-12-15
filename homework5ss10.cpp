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
	int n;
	printf("ban muon tim phan tu nao trong mang");
	scanf("%d",&n) ;
	for(int i=0;i<10;i++){
		if(array[i]==n) {
			printf("phan tu nam o vi tri %d",i+1) ;
			break ; 
		}
	} 
return 0;	
	 
} 
