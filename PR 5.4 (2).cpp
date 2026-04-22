#include <stdio.h>

int main() {
    int r, c;

    // find size
    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    //find elements
    printf("Enter array elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int row, col, sum = 0;

    //find Row 
    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    sum = 0;
    for(int j = 0; j < c; j++) {
        printf("%d ", a[row][j]);
        sum += a[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, sum);

    // find Column 
    printf("Enter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    sum = 0;
    for(int i = 0; i < r; i++) {
        printf("%d ", a[i][col]);
        sum += a[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, sum);
    
}

/*
output 

Enter the array's row size: 3
Enter the array's column size: 3
Enter array elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6
Enter row number: 0
Elements of row 0: 2 7 1
The sum of row 0: 10
Enter column number: 2
Elements of column 2: 1 4 6
The sum of column 2: 11

/*