//Determine whether an integer is a palindrome. Do this without extra space.
#include <stdio.h>
bool ispalindrome(int x) {
    int s=x;
    int r=0;
    if (x<0){
        return false;
    }
    if (x==0){
        return true;
    }
    while(x){
       r=r*10+x%10;
       x=x/10;
    }
    if(r == s) {
        return true;
    }

return false;
}



int main() {
 int a =23432;
 printf("%d\n", ispalindrome(a));
}
