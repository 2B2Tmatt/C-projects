#include <stdio.h> 
#include <stdlib.h> 



struct val{
    int val; 
    int index; 
};

int compare(const void* a, const void* b){
    return (((struct val*)a)->val - ((struct val*)b)->val);
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize);


int main(){
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int returnSize; // Declare an int variable

    int* sol = twoSum(arr, n, 6, &returnSize); // Pass its address
    for(int i = 0; i<2; i++){
        printf("%d ", sol[i]); 
    }



    return 0; 
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   *returnSize = 2; 
   struct val* arr = malloc(numsSize * sizeof(struct val)); 
   for(int i = 0; i < numsSize; i++){
        arr[i].val = nums[i];
        arr[i].index = i;
   }
   qsort(arr, numsSize, sizeof(struct val), compare); 
   struct val* pLeft = arr; 
   struct val* pRight = arr + numsSize -1; 
   while(pLeft < pRight){
    int sum = pLeft->val + pRight->val; 
    if(sum == target){
        int* result = malloc(2 * sizeof(int)); 
        result[0] = pLeft->index;
        result[1] = pRight->index;
        return result;
    }
    else if(sum < target){
        pLeft++;
    } else {
        pRight--;
    }
   }
   
   return NULL; 
}