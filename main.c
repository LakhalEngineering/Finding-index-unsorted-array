#include <stdio.h>


int Fun_index(int arry[],int val,int size_array){
    // calc lengh of array
    int size;
    for(int i=0; i<size_array; i++){
        if(arry[i] == val){
            return i;
        }
    }
}

int main(){

    int index, num;
    int unsorted[] = {9,5,13,3,8,7,2,12,6,10,4,11,1};
    int length_array;
    length_array = sizeof(unsorted);
    printf("choose a number to found his index in array :\n");
    scanf("%d", &num);

    index = Fun_index(unsorted, num, length_array);
    printf("Index of the number : %d is :%d", num, index);

}