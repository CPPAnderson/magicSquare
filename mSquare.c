#include <stdio.h>
#include <stdbool.h>
#include <time.h>

//global variables needed for program.
time_t t;
int num;

//random function returns a random int number once called
int random(){
    return ((rand() % 9) + 1);
}



int main(){
    srand((unsigned) time(&t)); 
    int array[3][3];
    int acount;
    
    

}