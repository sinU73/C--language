#include<stdio.h>
int main(){
    int num, encrypt, passwd, key = 1010;
    printf("input 3 numbers:"), scanf("%d", &num);
    encrypt=num^key;
    printf("encrypt: %d\n", encrypt);
    while(1){
    printf("password: %d"), scanf("%d", &passwd);
    printf("original data: %d\n", encrypt^passwd);
    }
    return 0;
}