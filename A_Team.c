#include<stdio.h>
int main(){
    int contestNumber, number1,number2,number3,solutionNumbers = 0;
    scanf("%d",&contestNumber);
    for(int i = 1; i <= contestNumber; i++){
        scanf("%d %d %d",&number1, &number2, &number3);
        if(number1 + number2 + number3 >= 2 ){
            solutionNumbers = solutionNumbers + 1;
        }
    }
    printf("%d",solutionNumbers);
}


// code_forces Problem Link ( A. Team ) : https://codeforces.com/problemset/problem/231/A