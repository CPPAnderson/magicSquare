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

// function gameCheck, makes sure everthing across, up, down, diagonal equals 15
bool gameCheck(int array[3][3]){
    if((array[0][0] + array [1][0] + array[2][0]) == 15){
        if((array[0][1] + array [1][1] + array[2][1]) == 15){
            if((array[0][2] + array [1][2] + array[2][2]) == 15){
                if((array[0][0] + array [1][1] + array[2][2]) == 15){
                    if((array[0][2] + array [1][1] + array[2][0]) == 15){
                        if((array[0][0] + array [0][1] + array[0][2]) == 15){
                            if((array[1][0] + array [1][1] + array[1][2]) == 15){
                                if((array[2][0] + array [2][1] + array[2][2]) == 15){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}


int main(){
    srand((unsigned) time(&t)); 
    int array[3][3];
    int acount;
    
    

}