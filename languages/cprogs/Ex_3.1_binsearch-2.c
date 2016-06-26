

#include<stdio.h>


int main(void)
{
    int i;
    i=0;
	int arr[]={2,4,6,7,9,29,45,46,49,50,51};
    while (arr[i] != 9){
    	i=i+1;
	}
	printf("%d",i);

    return 0;
}
