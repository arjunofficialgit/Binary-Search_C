//Transpose Matrices
#include<stdio.h>
int main(){
	int a[10][10],t[10][10],r,c,i,j;
	printf("Enter The Rows - ");
	scanf("%d",&r);
	printf("Enter The Column - ");
		scanf("%d",&c);
	printf("Enter The Array Element\n");
	for(i=0;i<r;i++){
	
		for(j=0;j<c;j++){
		
		scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=a[i][j];
		
		}
	}
	printf("Transpose Of Given Matrices is\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("[%d]",t[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}

