#include<stdio.h>

void Cubes(int *arr,int size) 
{
    printf("\nCubes of all elements:\n");
    
    for (int e=0;e<size*size;e++) {
        int val=*(arr+e);
        int cube=val*val*val;   
        printf("%d ",cube);
        
        if ((e+1)%size==0) 
		{
            printf("\n");
        }
    }
}
int main()
 {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int a[size][size];
    printf("Enter array elements:\n");
    for (int e=0;e<size;e++) 
	{
        for (int f=0;f<size;f++) 
		{
            printf("a[%d][%d]=",e,f);
            scanf("%d", &a[e][f]);
        }
    }
    Cubes((int *)a,size);
}

\\
output

1)

Enter array size: 2
Enter array elements:
a[0][0]=
3
a[0][1]=2
a[1][0]=5
a[1][1]=4

Cubes of all elements:
27 8
125 64


\\
