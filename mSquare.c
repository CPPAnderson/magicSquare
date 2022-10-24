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

//function check, makes sure computer randomizies a number that hasn't been already chosen.
bool check(int array2[9]){
    for(int i = 0; i < 9; i++){
        if (num == array2[i]){
            num = random();
            check(array2);
        }
        else if (i == 8){
            return true;
        }
    }
}

//function printBoard, just prints the board
void printBoard(int array[3][3]){
    printf("[%d %d %d]\n", array[0][0], array[1][0], array[2][0]);
    printf("[%d %d %d]\n", array[0][1], array[1][1], array[2][1]);
    printf("[%d %d %d]\n", array[0][2], array[1][2], array[2][2]);
}

int main(){
    srand((unsigned) time(&t)); 
    int array[3][3];
    int acount;
    
    //loop that gives every open spot with the double array a random number that is generated
    while (true){
        //single array makes sure number hasn't already been called
        int array2[9] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
        int count = 0;
        for (int y = 0; y < 3; y++){
            for (int x = 0; x < 3; x++){
                
                num = random();
                if (check(array2) == true){
                    array[x][y] = num;
                    array2[count] = num;
                    count++;
                }
                 
            }
        }
        // if everything added up to 15, game is over and prints out board along with how many overall counts
        if (gameCheck(array) == true){
            printBoard(array);
            printf("count: %d\n", acount);
            return 0;
        }
         acount++;           
    }

}