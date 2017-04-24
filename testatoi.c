#include <stdio.h>
int min =1 <<31;
int max = ~(1<<31);
int myAtoi(char* str) {
    int flag=1;
    long a=0;
    while(*str == ' ') str++;
    if(*str=='-'||*str=='+') {
        if (*str == '-'){
            flag =-1;
        }
        str++;
    }
    while(*str && *str<='9' && *str>='0'){
        a = (a*10)+*str-'0';
        if( (a-max)>0) {
            if(flag>0){
                return max;
            }else{
                return min;
            }
        }
        str++;
    }
    return a*flag;
    
}
int main() {
    printf("max %d\n", max);
    printf("%d\n", atoi("-2147d483649"));
    printf("%d\n", myAtoi("-2147d483649"));
    printf("%d\n", atoi("21"));
    printf("%d\n", myAtoi("21"));
    printf("%d\n", atoi("123.3113"));
    printf("%d\n", myAtoi("123.3113"));
    printf("%d\n", atoi("   10522545459"));
    printf("%d\n", myAtoi("   10522545459"));
    printf("%d\n", atoi("-2147483649"));
    printf("%d\n", myAtoi("-2147483649"));
    printf("%d\n", atoi("-2147483648"));
    printf("%d\n", myAtoi("-2147483648"));
    printf("%d\n", atoi("-2147483647"));
    printf("%d\n", myAtoi("-2147483647"));
}
