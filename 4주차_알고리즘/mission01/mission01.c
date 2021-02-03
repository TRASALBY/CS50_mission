#include    <stdio.h>
#include    <string.h>
#include    <math.h>

int main(void){
    
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {5,4,3,2,1};
    
    if((arr1[0] == arr2[4]) && (arr1[1] == arr2[3])){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    
    return 0;
}
