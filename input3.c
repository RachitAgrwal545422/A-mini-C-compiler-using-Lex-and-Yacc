#include<stdio.h>
#include<string.h>

int main() {
    int x=1;
    float f;
    int y = 2;
    int a = 3;
    int x;
    a = x * 3 + 5;
    if(x>a) {
        for(int t = 0;t<2;t = t+1){
            printf("Hello");
        }
        printf("Hi!");
        a = x * 3 + 100;
        if(x>a) {
            printf("Hi!");
            a = x * 3 + 100;
        }
        else {
            x = a * 3 + 100;
        }
    }
    else {
        x = a * 3 + 100;
    }

}