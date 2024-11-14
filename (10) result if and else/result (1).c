#include <stdio.h>

void main () {

    int per = 97;

    if(per >= 90 ){
        printf("Grade A");
    }else if (per >= 80) {
        printf("Grade B");
    }else if (per >= 70) {
        printf("Grade C");
    }else if (per >= 60) {
        printf("Grade D");
    }else if (per >= 50) {
        printf("Grade E");
    }else {
        printf("Grade F");
    }
}
