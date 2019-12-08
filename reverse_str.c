#include <stdio.h>
#include <string.h>

void reverse(char *str, int len) {

     char *a;

     a = str + len - 1;

     while(str != (a + 1)) {

           printf("%c", *a);           

           a--; 
     }

}

int main() {

    char *str = "Rocky";

    int len = strlen(str);

    reverse(str, len);

return(0);

