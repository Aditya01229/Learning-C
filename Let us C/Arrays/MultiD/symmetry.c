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
void symmetry(int m, int (*q)[m]){
    int TEST = 1;
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(*(*(q+i)+j) != *(*(q+j)+i)){
                TEST = 0;
                break;
            }
        }
    }
    if(TEST == 1){
        printf("Symmetric matric!");
    }
    else{
        printf("Not a symmetric matrix!");
    }
}
int main(int argc, char const *argv[])
{
    int arr[5][5] = {{1,2,3,4,5},{2,3,4,5,1},{3,4,5,1,2},{4,5,1,2,3},{5,1,2,3,4}};
    int m=5;
    show(5,5,arr);
    symmetry(m,arr);
    return 0;
}
