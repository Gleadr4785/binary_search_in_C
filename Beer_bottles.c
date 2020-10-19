// You are given an integer n representing n full beer bottles.
// Given that you can exchange 3 empty beer bottles for 1 full beer bottle, 
// return the number of beer bottles you can drink.
// example input n=9 --- output=13


#include <stdio.h>

int give_me_bottle(int n);

int main(void){
    
    printf("you can drink %d bottles of beer",give_me_bottle(22));
}

int give_me_bottle(int n){

    int bottles=n;

    while (n>2)
    {
        bottles=bottles+n/3;
        n=n/3+n%3;
    }
    return bottles;
}
