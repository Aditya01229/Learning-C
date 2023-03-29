#include <stdio.h>
void show(int row, int col, int (*q)[col]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%-3d", *(*(q + i) + j));
        }
        printf("\n");
    }
}
void transpose5x5(int (*q)[5]){
    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            int temp= *(*(q+i)+j);
            *(*(q+i)+j)=*(*(q+j)+i);
            *(*(q+j)+i)=temp; 
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    show(5, 5, arr);
    transpose5x5(arr);
    printf("\n");
    show(5,5,arr);
    return 0;
}
