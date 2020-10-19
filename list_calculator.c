#include <stdio.h>

int* list_calculator(int nums[], char op[2], int val);

int main(void){

    int nums[]={1,2,3};
    list_calculator(nums,"+",2);

    return 0;
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
        if(op =="/" && val!=0){
            for(int i=0;i<3;i++){
                nums[i]/=val;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            
        }
        return nums;
    }
