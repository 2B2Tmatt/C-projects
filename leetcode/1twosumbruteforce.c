#include <stdio.h>
#include <stdlib.h>
//better solutions exist, come back later
int* twoSum(int* nums, int numsSize, int target, int* returnSize);


int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize = 0;

    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL && returnSize == 2) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }
    

    return 0;
}
// two sum expects a pointer to an array of integers.  
// nums is the pointer to the array of ints to work with
// numsSize is the number of elements in nums
// returnSize is a pointer to the size of the int array being returned. 
// Its needed in most functions that return array ints but not for voids that take
// int array args
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   *returnSize = 2; 
   int *answers = malloc(2* sizeof(int)); 
   for(int i = 0; i< numsSize; i++){
    for(int j = 0; j< numsSize; j++){
        if(nums[i] + nums[j] == target && i!=j){
            
        }
    }
   }
    
}