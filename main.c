#include <stdio.h>
#include <stdlib.h>
#include "facil.h"
#include "medio.h"
#include "dificil.h"


int main(void){

    char mode;
    static int uno = 0;


    if(uno <10){

    printf("Bienvenido a Sudoku ! \n");
    printf("Elegi el modo de juego : F (facil) I (intermedio) D (dificil) \n");
    scanf(" %c", &mode);



        if(mode == 'f'){

        printf("elegiste modo facil,el juego esta por comenzar... \n");
        uno++;
        printf("\n");
        seleccionFacil();

    }


        if(mode == 'm'){

        printf("elegiste modo intermedio,el juego esta por comenzar... \n");
        uno++;
        printf("\n");
        seleccionMedium();

    }


    if(mode == 'd'){

        printf("elegiste modo intermedio,el juego esta por comenzar... \n");
        uno++;
        printf("\n");
        seleccionHard();

    }


    }else{

        printf("fin del juego \n");

    }


return 0;
} 
