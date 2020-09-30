#include <stdio.h>

typedef struct Ship_ {
    char name[25];
    int hitpoints;
} Ship;

int main(){

    int i, j;
    Ship sea = {'~',0};
    Ship *grid[15][15];
    for (i = 0; i < 15; i++){
        for (j = 0; j < 15; j++){
            grid[i][j] = &sea;
        }
    }
    Ship battleship = {"B", 4};
    int start = 3;
    int end = start + battleship.hitpoints;

    for (j = start; j < end; j++) {
        grid[1][j] = &battleship;
    }

    for (i = 0; i < 15; i++){
        for (j = 0; j < 15; j++){
            printf(" %s ", grid[i][j]->name);
        }
        printf("\n");
    }
    printf("\n");
}