#include    <stdio.h>
#include    <cs50.h>
#include    <string.h>

int main(void){
    
    int arr1[5];
    int arr2[5];
    string result;
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr1[i]);
    }
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr2[i]);
    }    
    
    if((arr1[0] == arr2[4]) && (arr1[1] == arr2[3])){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    
    return 0;
}
