#include<stdio.h> 
int main (){
	int array[10] ={1,2,3,4,5,6,7,8,9,0};
	int n=0,flag=0; 
	printf("moi ban nhap so muon tim kiem");
	if (scanf("%d",&n)==1) {
		for(int i=0;i<n;i++){
			if(array[i]==n){
				printf("phan tu %d xuat hien tai vi tri %d",n,i) ;
				flag =1; 
				break; 
			} 
		} 
		if (flag==0){
			printf("khong tim thay phan tu") ;
		}  
	}else 
	printf("du lieu nhap khong hop le");
return 0;	 
} 
