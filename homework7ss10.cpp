#include<stdio.h> 
void sortRow(int row[], int size);
int main(){
	int i,j;
	printf("moi nhap so hang");
	scanf("%d",&i) ;
	printf("moi nhap so cot ");
	scanf("%d",&j) ;
	int array[i][j] ;
	for(int a=0;a<i;a++) {
		for(int b=0;b<j;b++){
			printf("nhap [%d][%d]",a,b) ;
			scanf("%d",&array[a][b]); 
		} 
	}
	for (int a=0;a<i;a++){
	   sortRow(array[a],j );
     }
     for(int a=0;a<i;a++) {
		for(int b=0;b<j;b++){
			printf("%d  ",array[a][b]) ;
		} 
		printf("\n"); 
	} 
	return 0; 
} 
void sortRow(int row[], int size) {
 int temp;
  for (int i = 0; i < size - 1; i++) {
   for (int j = i + 1; j < size; j++) {
    if (row[i] > row[j]) { 
    temp = row[i];
     row[i] = row[j];
	 row[j] = temp;
	  }
    } 
  }
}
