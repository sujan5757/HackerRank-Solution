#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *nums = malloc(1000*sizeof(char));
    scanf("%s",nums);
    
    //reallocate the memory
    
    nums = realloc(nums, strlen(nums) + 1);
    
    // create the array
    
    int *arr = (int*)malloc(10*sizeof(int));
    
    for(int i = 0; i<strlen(nums);i++)
    {
        if(nums[i]>= 48 && nums[i]<=57){
            int index = nums[i]-48;
            arr[index]++;
        }
    }
    
    for(int i =0; i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
