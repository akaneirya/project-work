#include<stdio.h>

int main() {
    int n;
    
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Negative elements from an Array: ");
    for(int i = 0; i < n; i++) {
      if(arr[i] < 0) {
        printf("%d ", arr[i]);
      }
    }
}
/*
output
Enter the array's size: 5
Enter array elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Negative elements from an Array: -4 -3 -5
/*