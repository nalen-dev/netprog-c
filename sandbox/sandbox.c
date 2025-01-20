/*  */

#include <stdio.h>
#include <time.h>

int main(){
    int a = 2;
   
    time_t timer;
    time(&timer);

    printf("%ld\n",timer);
    printf("Local time is: %s", ctime(&timer));
    
    return 0;
}