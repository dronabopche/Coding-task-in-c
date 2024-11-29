#include <stdio.h>
#include <math.h>

int N;  //is the input Number

int No_of_Digit(int N){

    int NoD = 0;
    while(N!=0){
        N=N/10;
        NoD++;
    }
    printf("Here the No of Digits are : %d \n",NoD);
    printf("\n");
    return NoD;
}

int ArmStrong_Number(int N , int NoD){
    
    int a , sum = 0 ;
    
    for(int i=0; i<=NoD ; i++){
        a = N % 10;
        sum = pow(a,NoD)+ sum;
        N=N/10;
       
    }
   
    return sum;
}

int main(void) {
    int test ,test_1;
    printf("ENTER THE NUMBER TO CHECK :");
    scanf("%d" , &N);
    printf("\n");
    
    test_1 = No_of_Digit(N);
    test = ArmStrong_Number(N , test_1);
    
    if (test==N){
        printf("The no is an ArmStrong Number \n");
        printf("\n");
    }else{
        printf("The no is 'NOT' an ArmStrong Number \n");
        printf("\n");
    }
    
    return 0;
}
