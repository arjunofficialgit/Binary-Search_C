
//Write A program For Binary Search
#include<stdio.h>
int main(){
	int n,i,item,a[100],mid,beg,end; //Where beg=First index, mid=Middle,end=End index,item=Search Element.
	printf("Enter the number of Element:-\n");
	scanf("%d",&n);
	printf("Enter the Array Element:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value to find :-\n");
	scanf("%d",&item);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	
	while(beg<=end){
		if (a[mid]<item)
		beg=mid+1;
		else if (a[mid]==item){
			printf("%d is present at index %d",item,mid+1);
			break;
		}
		else
		    end=mid-1;
		    mid=(beg+end)/2;
		}
		if (beg>end)
		printf("Not found! %d is not in the list.\n",item);
		    return 0;
}
