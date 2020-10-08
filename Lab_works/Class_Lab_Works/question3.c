#include<stdio.h>
int main(){
    int sum, i;
    sum=0;
    for(i=0;i<20;i++){
        if(i%2==1){
            continue;
        }
        sum=sum+i;
    }
    printf("%i\n",sum);
    return 0;

}