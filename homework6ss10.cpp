#include<stdio.h>
int main(){
	int array[] ={1,2,3,3,6,6,0,0,68,5,6,7,8,9,0},position[20]; 
	int n;
	int size=sizeof(array)/sizeof(int) ;
	int count =0; 
	printf("ban muon tim kiem phan tu no trong mang");
	scanf("%d",&n) ;
	for (int i=0;i<size;i++) {
		if(array[i]==n) {
			position[count]=i;
			count++; 
		}
	}
	if (count==0 ){
		printf("khong co phan tu n trong mang"); 
	}else
	printf("n xuat hien %d lan ",count); 
	for (int i=0;i<count;i++){
		printf("n xuat hien tai %d ", position[i]); 
	} 
 return 0;	 
	 
} 
