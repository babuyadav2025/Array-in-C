//#include<stdio.h>
// void greet(){
//      printf("Good morning\n");
//      printf("How are you?\n");
//      return;
//  }
//  int main(){
//      greet();
//      greet();
//      greet();
//      return 0;
// }
// int main(){
//     void india();
//     india();
//     return 0;
// }
// void england(){
//     printf("You are in england\n");
//     return;
// }

// void india(){
//     printf("You are in india\n");
//     void australia();
//     australia();
//     return;
// }
// void australia(){
//     printf("You are in australia\n");
//     void england();
//     england();
//     return;
// }
#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
    int row, col, i, j;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transpose
    printf("Transpose of the matrix:\n");
    for(i = 0; i < col; i++) {
        for(j = 0; j < row; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}






