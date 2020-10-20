//Given a list of integers nums, a string op representing either "+", "-",
// "/", or "*", and an integer val, perform the operation on every 
// number in nums with val and return the result.
//Example 1
//Input 
//  nums = [3, 1, 6]
//  op = "+"
//  val = 4
//Output
//  [7,5,11]

#include <stdio.h>

int* list_calculator(int nums[], char op[2], int val);

int main(void){

    int nums[]={1,2,3};
    list_calculator(nums,"/",0);

    printf("[ ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", nums[i]);
        
    }
    printf("]");
}

int* list_calculator(int nums[], char op[2], int val){
    if(op =="+"){
            for(int i=0;i<3;i++){
                nums[i]+=val;
            }
        }
        if(op =="-"){
            for(int i=0;i<3;i++){
                nums[i]-=val;
            }
        }
        if(op =="*"){
            for(int i=0;i<3;i++){
                nums[i]*=val;
            }
        }
        if(op =="/"){
            if (val == 0){
                printf("\nYou cant divide by zero\n");
            }
            for(int i=0;i<3;i++){
                nums[i]/=val;
            }
        }
        
        return nums;
    }
