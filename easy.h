#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int easy1[9][9] = {{3,1,0,0,0,0,5,0,8},
                   {0,0,0,0,0,1,0,9,0},
                   {7,0,4,3,0,5,0,0,2},
                   {0,0,0,9,0,0,0,0,7},
                   {0,0,0,2,0,0,0,3,4},
                   {4,0,0,0,0,0,0,0,0},
                   {5,0,0,0,0,3,0,0,0},
                   {1,0,0,4,8,0,0,6,0},
                   {0,6,0,7,0,9,0,8,0}};


int easy1Binario[9][9] = {{1,1,0,0,0,0,1,0,1},
                          {0,0,0,0,0,1,0,1,0},
                          {1,0,1,1,0,1,0,0,1},
                          {0,0,0,1,0,0,0,0,1},
                          {0,0,0,1,0,0,0,1,1},
                          {1,0,0,0,0,0,0,0,0},
                          {1,0,0,0,0,1,0,0,0},
                          {1,0,0,1,1,0,0,1,0},
                          {0,1,0,1,0,1,0,1,0}};


int easy1Solucion[9][9] = {{3,1,9,6,2,7,5,4,8},
                           {6,5,2,8,4,1,7,9,3},
                           {7,8,4,3,9,5,6,1,2},
                           {8,2,6,9,3,4,1,5,7},
                           {9,7,5,2,1,6,8,3,4},
                           {4,3,1,5,7,8,9,2,6},
                           {5,4,8,1,6,3,2,7,9},
                           {1,9,7,4,8,2,3,6,5},
                           {2,6,3,7,5,9,4,8,1}};


int easy2[9][9] = {{8,9,0,4,0,0,5,7,0},
                   {0,0,0,0,0,0,2,0,0},
                   {0,0,7,0,0,0,0,6,1},
                   {0,8,0,2,0,0,0,0,6},
                   {0,2,5,0,0,1,8,0,0},
                   {0,0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0,2},
                   {6,1,0,0,5,0,0,8,0},
                   {7,0,0,3,0,6,0,4,0}};


int easy2Solucion[9][9] = {{8,9,1,4,6,2,5,7,3},
                           {5,6,4,1,3,7,2,9,8},
                           {2,3,7,5,8,9,4,6,1},
                           {4,8,3,2,9,5,7,1,6},
                           {9,2,5,6,7,1,8,3,4},
                           {1,7,6,8,4,3,9,2,5},
                           {3,4,9,7,1,8,6,5,2},
                           {6,1,2,9,5,4,3,8,7},
                           {7,5,8,3,2,6,1,4,9}};


int easy2Binario[9][9] =  {{1,1,0,1,0,0,1,1,0},
                           {0,0,0,0,0,0,1,0,0},
                           {0,0,1,0,0,0,0,1,1},
                           {0,1,0,1,0,0,0,0,1},
                           {0,1,1,0,0,1,1,0,0},
                           {0,0,0,0,0,0,0,0,0},
                           {0,0,0,0,0,0,0,0,1},
                           {1,1,0,0,1,0,0,1,0},
                           {1,0,0,1,0,1,0,1,0}};


int easy3[9][9] = {{3,5,0,0,9,7,0,0,0},
                   {0,0,9,0,0,0,0,5,0},
                   {7,8,0,3,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0,0},
                   {0,0,2,9,0,0,0,8,0},
                   {0,0,8,0,0,0,2,4,1},
                   {6,0,0,7,0,0,5,2,0},
                   {0,0,4,0,0,0,0,6,0},
                   {9,0,0,0,0,4,8,0,0}};


int easy3Solucion[9][9] = {{3,5,6,2,9,7,4,1,8},
                           {2,4,9,8,1,6,3,5,7},
                           {7,8,1,3,4,5,6,9,2},
                           {1,6,7,4,2,8,9,3,5},
                           {4,3,2,9,5,1,7,8,6},
                           {5,9,8,6,7,3,2,4,1},
                           {6,1,3,7,8,9,5,2,4},
                           {8,7,4,5,3,2,1,6,9},
                           {9,2,5,1,6,4,8,7,3}};


int easy3Binario[9][9] = {{1,1,0,0,1,1,0,0,0},
                          {0,0,1,0,0,0,0,1,0},
                          {1,1,0,1,0,0,0,0,0},
                          {0,0,0,0,0,0,0,0,0},
                          {0,0,1,1,0,0,0,1,0},
                          {0,0,1,0,0,0,1,1,1},
                          {1,0,0,1,0,0,1,1,0},
                          {0,0,1,0,0,0,0,1,0},
                          {1,0,0,0,0,1,1,0,0}};


int easy4[9][9] = {{4,0,0,0,0,0,2,0,0},
                   {0,0,0,8,0,0,0,0,0},
                   {0,0,5,0,4,6,0,0,0},
                   {8,7,0,2,0,0,6,1,0},
                   {0,0,0,5,6,0,0,2,0},
                   {5,0,0,0,0,0,0,0,0},
                   {0,5,7,0,9,0,0,0,1},
                   {2,3,0,0,0,8,7,0,0},
                   {0,9,0,4,5,0,0,0,0}};

int easy4Solucion[9][9] = {{4,8,3,1,7,5,2,9,6},
                           {9,1,6,8,2,3,5,7,4},
                           {7,2,5,9,4,6,1,3,8},
                           {8,7,9,2,3,4,6,1,5},
                           {3,4,1,5,6,9,8,2,7},
                           {5,6,2,7,8,1,9,4,3},
                           {6,5,7,3,9,2,4,8,1},
                           {2,3,4,6,1,8,7,5,9},
                           {1,9,8,4,5,7,3,6,2}};

int easy4Binario[9][9] = {{1,0,0,0,0,0,1,0,0},
                          {0,0,0,1,0,0,0,0,0},
                          {0,0,1,0,1,1,0,0,0},
                          {1,1,0,1,0,0,1,1,0},
                          {0,0,0,1,1,0,0,1,0},
                          {1,0,0,0,0,0,0,0,0},
                          {0,1,1,0,1,0,0,0,1},
                          {1,1,0,0,0,1,1,0,0},
                          {0,1,0,1,1,0,0,0,0}};

int easy5[9][9] = {{6,0,0,0,0,0,0,0,0},
                   {0,0,0,0,7,0,1,4,0},
                   {0,0,0,0,3,0,0,0,8},
                   {0,0,0,3,5,0,0,1,0},
                   {7,0,0,0,1,9,2,0,0},
                   {0,3,0,0,0,8,6,0,0},
                   {0,0,0,0,0,0,0,0,0},
                   {0,0,8,1,0,0,4,5,9},
                   {4,9,0,0,0,0,0,8,2}};

int easy5Solucion[9][9] = {{6,7,9,4,8,1,5,2,3},
                           {8,2,3,9,7,5,1,4,6},
                           {5,1,4,2,3,6,9,7,8},
                           {9,4,6,3,5,2,8,1,7},
                           {7,8,5,6,1,9,2,3,4},
                           {1,3,2,7,4,8,6,9,5},
                           {2,5,7,8,9,4,3,6,1},
                           {3,6,8,1,2,7,4,5,9},
                           {4,9,1,5,6,3,7,8,2}};

int easy5Binario[9][9] = {{1,0,0,0,0,0,0,0,0},
                          {0,0,0,0,1,0,1,1,0},
                          {0,0,0,0,1,0,0,0,1},
                          {0,0,0,1,1,0,0,1,0},
                          {1,0,0,0,1,1,1,0,0},
                          {0,1,0,0,0,1,1,0,0},
                          {0,0,0,0,0,0,0,0,0},
                          {0,0,1,1,0,0,1,1,1},
                          {1,1,0,0,0,0,0,1,1}};


int easy6[9][9] = {{8,0,0,0,0,0,0,0,1},
                   {0,0,0,0,0,0,0,6,8},
                   {0,0,0,5,0,6,0,0,0},
                   {7,9,0,2,1,0,0,0,5},
                   {0,0,0,0,0,0,0,0,0},
                   {0,0,1,7,0,8,0,0,3},
                   {3,0,0,0,0,0,2,5,0},
                   {0,4,0,0,0,1,3,0,6},
                   {0,7,0,0,5,2,0,9,0}};


int easy6Solucion[9][9] = {{8,6,7,4,2,9,5,3,1},
                           {9,2,5,1,3,7,4,6,8},
                           {1,3,4,5,8,6,9,7,2},
                           {7,9,6,2,1,3,8,4,5},
                           {2,8,3,6,4,7,7,1,9},
                           {4,5,1,7,9,8,6,2,3},
                           {3,1,9,8,6,4,2,5,7},
                           {5,4,2,9,7,1,3,8,6},
                           {6,7,8,3,5,2,1,9,4}};


int easy6Binario[9][9] ={{1,0,0,0,0,0,0,0,1},
                         {0,0,0,0,0,0,0,1,1},
                         {0,0,0,1,0,1,0,0,0},
                         {1,1,0,1,1,0,0,0,1},
                         {0,0,0,0,0,0,0,0,0},
                         {0,0,1,1,0,1,0,0,1},
                         {1,0,0,0,0,0,1,1,0},
                         {0,1,0,0,0,1,1,0,1},
                         {0,1,0,0,1,1,0,1,0}};


int easy7[9][9] = {{0,5,0,0,6,0,0,0,0},
                   {0,0,1,0,0,7,8,0,3},
                   {0,0,7,0,3,4,0,0,0},
                   {0,0,0,0,0,5,9,0,0},
                   {0,0,0,0,9,0,0,0,0},
                   {8,6,0,1,7,0,0,0,4},
                   {0,0,0,0,0,3,2,1,0},
                   {0,0,0,0,5,0,6,0,7},
                   {0,4,0,0,0,0,5,0,9}};


int easy7Solucion[9][9] = {{3,5,8,9,6,1,4,7,2},
                           {4,9,1,5,2,7,8,6,3},
                           {6,2,7,8,3,4,1,9,5},
                           {7,1,4,3,8,5,9,2,6},
                           {5,3,2,4,9,6,7,8,1},
                           {8,6,9,1,7,2,3,5,4},
                           {9,7,5,6,4,3,2,1,8},
                           {1,8,3,2,5,9,6,4,7},
                           {2,4,6,7,1,8,5,3,9}};


int easy7Binario[9][9] ={{0,1,0,0,1,0,0,0,0},
                         {0,0,1,0,0,1,1,0,1},
                         {0,0,1,0,1,1,0,0,0},
                         {0,0,0,0,0,1,1,0,0},
                         {0,0,0,0,1,0,0,0,0},
                         {1,1,0,1,1,0,0,0,1},
                         {0,0,0,0,0,1,1,1,0},
                         {0,0,0,0,1,0,1,0,1},
                         {0,1,0,0,0,0,1,0,1}};


int easy8[9][9] = {{0,0,8,0,0,4,6,0,0},
                   {0,0,0,5,2,0,0,0,3},
                   {0,6,0,0,3,0,9,4,0},
                   {4,0,0,0,5,0,0,0,0},
                   {0,3,6,0,0,0,0,0,0},
                   {0,8,5,0,6,0,0,0,0},
                   {0,0,0,2,4,0,0,6,0},
                   {0,0,2,0,0,0,0,7,0},
                   {0,0,1,8,0,7,0,0,2}};


int easy8Solucion[9][9] = {{3,5,8,9,7,4,6,2,1},
                           {9,1,4,5,2,6,7,8,3},
                           {2,6,7,1,3,8,9,4,5},
                           {4,2,9,7,5,1,8,3,6},
                           {1,3,6,4,8,2,5,9,7},
                           {7,8,5,3,6,9,2,1,4},
                           {8,7,3,2,4,5,1,6,9},
                           {5,9,2,6,1,3,4,7,8},
                           {6,4,1,8,9,7,3,5,2}};


int easy8Binario[9][9] = {{0,0,1,0,0,1,1,0,0},
                          {0,0,0,1,1,0,0,0,1},
                          {0,1,0,0,1,0,1,1,0},
                          {1,0,0,0,1,0,0,0,0},
                          {0,1,1,0,0,0,0,0,0},
                          {0,1,1,0,1,0,0,0,0},
                          {0,0,0,1,1,0,0,1,0},
                          {0,0,1,0,0,0,0,1,0},
                          {0,0,1,1,0,1,0,0,1}};


int easy9[9][9] = {{0,0,0,0,0,3,8,0,0},
                   {0,0,0,6,2,0,9,0,0},
                   {0,0,0,8,9,0,0,3,7},
                   {0,0,5,0,0,0,0,9,0},
                   {0,0,0,0,0,4,0,7,2},
                   {0,0,0,2,3,0,0,0,0},
                   {0,0,0,0,4,0,0,8,0},
                   {0,6,1,0,0,8,0,0,4},
                   {9,8,0,3,0,5,0,2,0}};


int easy9Solucion[9][9] = {{7,9,2,4,5,3,8,1,6},
                           {3,1,8,6,2,7,9,4,5},
                           {4,5,6,8,9,1,2,3,7},
                           {8,2,5,7,1,6,4,9,3},
                           {6,3,9,5,8,4,1,7,2},
                           {1,4,7,2,3,9,5,6,8},
                           {5,7,3,1,4,2,6,8,9},
                           {2,6,1,9,7,8,3,5,4},
                           {9,8,4,3,6,5,7,2,1}};


int easy9Binario[9][9] = {{0,0,0,0,0,1,1,0,0},
                          {0,0,0,1,1,0,1,0,0},
                          {0,0,0,1,1,0,0,1,1},
                          {0,0,1,0,0,0,0,1,0},
                          {0,0,0,0,0,1,0,1,1},
                          {0,0,0,1,1,0,0,0,0},
                          {0,0,0,0,1,0,0,1,0},
                          {0,1,1,0,0,1,0,0,1},
                          {1,1,0,1,0,1,0,1,0}};


int easy10[9][9] = {{2,0,0,1,0,0,3,4,0},
                    {0,0,0,0,8,0,6,0,1},
                    {0,0,0,0,0,0,0,5,0},
                    {0,2,0,4,0,0,0,0,0},
                    {1,0,8,3,0,6,7,0,0},
                    {6,7,0,0,9,2,1,0,0},
                    {0,5,6,0,0,0,0,0,8},
                    {0,9,3,0,0,0,0,0,0},
                    {0,0,0,0,0,4,0,0,0}};


int easy10Solucion[9][9] = {{2,8,7,1,6,5,3,4,9},
                            {5,3,4,7,8,9,6,2,1},
                            {9,6,1,2,4,3,8,5,7},
                            {3,2,9,4,1,7,5,8,6},
                            {1,4,8,3,5,6,7,9,2},
                            {6,7,5,8,9,2,1,3,4},
                            {4,5,6,9,3,1,2,7,8},
                            {7,9,3,6,2,8,4,1,5},
                            {8,1,2,5,7,4,9,6,3}};


int easy10Binario[9][9] = {{1,0,0,1,0,0,1,1,0},
                           {0,0,0,0,1,0,1,0,1},
                           {0,0,0,0,0,0,0,1,0},
                           {0,1,0,1,0,0,0,0,0},
                           {1,0,1,1,0,1,1,0,0},
                           {1,1,0,0,1,1,1,0,0},
                           {0,1,1,0,0,0,0,0,1},
                           {0,1,1,0,0,0,0,0,0},
                           {0,0,0,0,0,1,0,0,0}};




void tablerosEasy(int a){



        switch(a){

        case(0) :
            printf("tablero uno \n");
            printf("\n");
            imprimir(easy1);
            ingresaValor(easy1Binario,easy1Solucion,easy1);
            break;

        case(1) :
            printf("tablero dos \n");
            printf("\n");
            imprimir(easy2);
            ingresaValor(easy2Binario,easy2Solucion,easy2);
            break;

        case(2) :
            printf("tablero tres \n");
            printf("\n");
            imprimir(easy3);
            ingresaValor(easy3Binario,easy3Solucion,easy3);
            break;

        case(3) :
            printf("tablero cuatro \n");
            printf("\n");
            imprimir(easy4);
            ingresaValor(easy4Binario,easy4Solucion,easy4);
            break;

        case(4) :
            printf("tablero cinco \n");
            printf("\n");
            imprimir(easy5);
            ingresaValor(easy5Binario,easy5Solucion,easy5);
            break;

        case(5) :
            printf("tablero seis \n");
            printf("\n");
            imprimir(easy6);
            ingresaValor(easy6Binario,easy6Solucion,easy6);
            break;

        case(6) :
            printf("tablero siete \n");
            printf("\n");
            imprimir(easy7);
            ingresaValor(easy7Binario,easy7Solucion,easy7);
            break;

        case(7) :
            printf("tablero ocho \n");
            printf("\n");
            imprimir(easy8);
            ingresaValor(easy8Binario,easy8Solucion,easy8);
            break;

        case(8) :
            printf("tablero nueve \n");
            printf("\n");
            imprimir(easy9);
            ingresaValor(easy9Binario,easy9Solucion,easy9);
            break;

        case(9) :
            printf("tablero diez \n");
            printf("\n");
            imprimir(easy10);
            ingresaValor(easy10Binario,easy10Solucion,easy10);
            break;

        }
}




void seleccionFacil(){

    static int bandera = 0;

    if(bandera == 0){

    srand(time(NULL));
    bandera = 1;

    }

    int uno = (rand()%10 );
   // printf("%d \n", uno);
    static int dos[10] = {0,0,0,0,0,0,0,0,0,0};


       // printf("VALOR DE A : %d \n", tres);

        if(dos[uno] == 0 ){

            dos[uno] = 1;
            tablerosEasy(uno);

        }

        if(dos[uno] == 1 ){

            printf("cargando... \n");
            seleccionFacil();

        }

}




void ingresaValor(int a[][9],int b[][9],int c[][9]){


    int i,j,var;
    char ayuda;
    static int k = 0;

    printf("ayudas utilizadas %d / 3 \n", k);
    printf("usar ayuda ? Y/N \n");
    scanf(" %c", &ayuda);

    if((ayuda == 'y') & (k < 4)){

        ayuda1(a,b,c);
        k++;
}

    char cinco;
    printf("desea borrar valor ? Y/N \n");
    scanf(" %c", &cinco);

            if(cinco == 'y'){

                borrar(c,a,i,j);

            }


    printf("ingresa numero de fila : \n");
    scanf("%d", &i);

    while((i < 0) | (i > 8)){

        printf("numero de fila incorrecto \n");
        printf("ingresa nuevamente la fila \n");
        scanf("%d", &i);
    }

    printf("ingresa numero de columna : \n");
    scanf("%d", &j);

    while((j < 0) | (j > 8)){

        printf("numero de columna incorrecto \n");
        printf("ingresa nuevamente la columna \n");
        scanf("%d", &j);
    }

    if((a[i][j] != 0)){

    printf("posicion invalida \n");
    printf("ingresa valor nuevamente... \n");
    ingresaValor(a,b,c);

   }

    printf("ingresa valor \n");
    scanf("%d", &var);


   if((var < 1 ) | (var > 9)){

     printf("el numero debe ser del 1 al 9 \n");
     imprimir(c);
     ingresaValor(a,b,c);

   }




   int uno = validarColumna(c,var,j);
   int dos = validarFila(c,var,i);
   int tres = validarArea(c,var,i,j);
   int cuatro =  validar(c,a,var,uno,dos,tres,i,j);
   int seis = tableroCompleto(c);
   int siete = compararTableros(c,b);
   char ocho;


   if(cuatro == 0){

        printf("numero Valido ! \n");
        printf("\n");
        imprimir(c);

   }else{

        printf("numero invalido... \n");

   }


    if(seis == 0){

        printf("el tablero esta completo \n");
   }

      if(siete == 0){

            printf("el tablero fue completado con exito,felicitaciones ! \n");
            printf("desea continuar ? Y / N \n");
            scanf(" %c", &ocho);

        }


   if(ocho == 'y'){

        main();


    }else{

        printf("fin del juego \n");
    }

    if(ocho == 'n'){

        printf("fin del juego... \n");
    }

    if(siete != 0 ){

        ingresaValor(a,b,c);

   }
}



 int validarColumna(int a[][9],int num,int columna){

    int i;

        for(i = 0;i < 9;i++){

            if( a[i][columna] == num ){
            return 1;
            }
        }
    return 0;
    }



 void imprimir(int a[][9]){

        printf("  0   1   2   3   4   5   6   7   8\n");

        for(int i=0;i<9;i++)
        {
            printf("____________________________________\n|");
        for(int j=0;j<9;j++)
            printf(" %d |",a[i][j]);
        printf("  %d\n",i);
        }

        printf("\n");

}



int validarFila(int a[][9],int num,int fila){

    int j;

        for(j = 0;j < 9;j++){

            if( a[fila][j] == num ){
            return 1;

            }
        }
    return 0;
}



int validarArea(int a[][9],int num,int fila,int columna){

    int i,j;

    // AREA 1

    if(((fila < 3) & (fila >= 0)) & ((columna >= 0) & (columna < 3))){

    for(i = 0;i < 3;i++){
        for(j = 0;j < 3;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}

    // AREA 2
       else if(((fila >= 0) & (fila < 3)) & ((columna >= 3) & (columna < 6))){

    for(i = 0;i < 3;i++){
        for(j = 3;j < 6;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


    // AREA 3

    else if(((fila >= 0) & (fila < 3)) & ((columna >= 6) & (columna < 9))){

    for(i = 0;i < 3;i++){
        for(j = 6;j < 9;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;

}


    // AREA 4

    else if(((fila < 6) & (fila >= 3)) & ((columna >= 0) & (columna < 3))){

    for(i = 3;i < 6;i++){
        for(j = 0;j < 3;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


    // AREA 5

    else if(((fila >= 3) & (fila < 6)) & ((columna >= 3) & (columna < 6))){

    for(i = 3;i < 6;i++){
        for(j = 3;j < 6;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


    // AREA 6

    else if(((fila >= 3) & (fila < 6)) & ((columna >= 6) & (columna < 9))){

    for(i = 3;i < 6;i++){
        for(j = 6;j < 9;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


   // AREA 7

    else if(((fila >= 6) & (fila < 9)) & ((columna >= 0) & (columna < 3))){

    for(i = 6;i < 9;i++){
        for(j = 0;j < 3;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


// AREA 8

else if(((fila >= 6) & (fila < 9)) & ((columna >= 3) & (columna < 6))){

    for(i = 6;i < 9;i++){
        for(j = 3;j < 6;j++){

            if(a[i][j] == num){

                return 1;
            }
        }
    }
return 0;
}


    // AREA 9


   else if(((fila >= 6) & (fila < 9)) & ((columna >= 6) & (columna < 9))){

    for(i = 6;i < 9;i++){
        for(j = 6;j < 9;j++){

            if(a[i][j] == num){

                return 1;
            }
            }
        }
    return 0;
    }
};



int validar(int a[][9],int b[][9],int var,int fila,int columna,int area,int i,int j){

    if(((fila + columna + area) == 0 )  & (b[i][j] == 0 )){

        a[i][j] = var;

        return 0;
    }
return 1;
}



int tableroCompleto(int a[][9]){

    int i,j;

        for(i = 0;i < 9;i++){
            for(j = 0;j < 9;j++){

                if(a[i][j] == 0){
                    return 1;
                }
            }
        }
return 0;
}



int compararTableros(int a[][9],int b[][9]){

    int i,j;

    for(i = 0;i < 9;i++){
        for(j = 0;j < 9;j++){

                if( a[i][j] != b[i][j] ){

                    return 1;
                }
        }
    }
return 0;
}



void borrar(int a[][9],int b[][9],int i,int j){

    printf("ingresa fila : \n");
                scanf("%d",&i);
                printf("ingresa columna : \n");
                scanf("%d",&j);

                while(b[i][j] != 0 ){

                    printf("volve a ingresar fila : \n");
                    scanf("%d",&i);
                    printf("volve a ingresar columna : \n");
                    scanf("%d",&j);

                }

    a[i][j] = 0;
    printf("numero borrado en la fila %d y columna %d \n",i,j);
    imprimir(a);
}



void ayuda1(int a[][9],int b[][9],int c[][9]){

    int var;
    static int bandera = 0;

    if(bandera == 0){

        srand(time(NULL));
        bandera = 1;
    }


    int i = rand() %9;
    int j = rand() %9;

    printf("%d \n",i);
    printf("%d \n",j);

    if(a[i][j] == 0){

       var = b[i][j];
       c[i][j] = var;

        printf("        exito...! \n");
        imprimir(c);

    }else{

      printf("no se encontro valor,buscando... \n");
      ayuda1(a,b,c);
}
}
