#include<stdio.h> 
int main (){
	int array[10] ={1,2,3,4,5,1,7,8,1,0};
	int n=0,soLuong =0; 
	printf("ban muon tim so nao trong mang ?") ;
	scanf("%d",&n) ;
	for(int i=0;i<10;i++) {
		if (array[i]==n) {
		printf("xuat hien t?i phan tu thu%d\n",i+1);
		soLuong++;	
		}
	}
	printf("xuat hien %d lan ",soLuong) ;
	return 0; 
} 
