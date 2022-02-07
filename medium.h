#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int med1[9][9] = {{0,0,0,2,0,0,0,1,5},
		  {0,3,9,0,0,0,6,0,0},
		  {0,0,0,5,0,0,0,0,0},
		  {0,0,0,0,0,7,0,0,9},
		  {0,0,3,6,0,0,0,0,0},
		  {8,0,7,1,2,5,0,0,0},
		  {0,8,0,0,0,0,0,2,0},
		  {0,0,0,0,0,0,4,0,0},
		  {2,0,0,0,7,0,0,6,0}
};

int med1Bin[9][9] = {{0,0,0,1,0,0,0,1,1},
		     {0,1,1,0,0,0,1,0,0},
		     {0,0,0,1,0,0,0,0,0},
		     {0,0,0,0,0,1,0,0,1},
		     {0,0,1,1,0,0,0,0,0},
		     {1,0,1,1,1,1,0,0,0},
		     {0,1,0,0,0,0,0,1,0},
		     {0,0,0,0,0,0,1,0,0},
		     {1,0,0,0,1,0,0,1,0},
};

int med1Sol[9][9] = {{4,6,8,2,9,3,7,1,5},
		     {5,3,9,7,1,4,6,8,2},
		     {7,1,2,5,6,8,9,3,4},
		     {6,2,4,3,8,7,1,5,9},
		     {1,5,3,6,4,9,2,7,8},
		     {8,9,7,1,2,5,3,4,6},
		     {9,8,1,4,3,6,5,2,7},
		     {3,7,6,8,5,1,4,9,1},
		     {2,4,5,9,7,1,8,6,3}};


int med2[9][9] = {{1,0,4,0,0,0,0,0,0},
		          {3,0,0,0,0,2,0,0,9},
		          {0,7,0,1,0,0,0,0,0},
                  {0,0,0,0,2,8,0,0,0},
		          {7,0,0,0,1,0,8,0,4},
		          {0,9,0,5,0,0,7,3,0},
                  {0,0,0,0,0,0,0,6,0},
		          {0,0,0,0,0,3,0,0,0},
		          {0,3,6,9,0,0,0,7,0}};


int med2Bin[9][9] = {{1,0,1,0,0,0,0,0,0},
		     {1,0,0,0,0,1,0,0,1},
		     {0,1,0,1,0,0,0,0,0},
		     {0,0,0,0,1,1,0,0,0},
		     {1,0,0,0,1,0,1,0,1},
		     {0,1,0,1,0,0,1,1,0},
		     {0,0,0,0,0,0,0,1,0},
		     {0,0,0,0,0,0,0,1,0},
		     {0,1,1,1,0,0,0,1,0}};


int med2Sol[9][9] = {{1,2,4,8,9,6,3,5,7},
		     {3,5,8,4,7,2,6,1,9},
		     {6,7,9,1,3,5,2,4,9},
		     {4,1,3,7,2,8,5,9,6},
		     {7,6,5,3,1,9,8,2,4},
		     {8,9,2,5,6,4,7,3,1},
		     {5,8,1,2,4,7,9,6,3},
		     {9,4,7,6,5,3,1,8,2},
		     {2,3,6,9,8,1,4,7,5}};


int med3[9][9] = {{0,0,9,0,0,1,0,0,2},
		  {8,0,6,0,0,9,0,0,0},
		  {0,7,0,0,3,4,0,0,0},
		  {0,0,3,0,0,0,0,0,0},
		  {0,0,0,9,0,0,8,0,0},
		  {0,9,0,2,4,0,5,0,0},
		  {0,5,0,0,0,0,0,3,0},
		  {0,4,8,0,5,0,2,0,9},
		  {0,0,0,0,0,0,1,0,0}};

int med3Bin[9][9] = {{0,0,1,0,0,1,0,0,1},
		     {1,0,1,0,0,1,0,0,0},
		     {0,1,0,0,1,1,0,0,0},
		     {0,0,1,0,0,0,0,0,0},
		     {0,0,0,1,0,0,1,0,0},
		     {0,1,0,1,1,0,1,0,0},
		     {0,1,0,0,0,0,0,1,0},
		     {0,1,1,0,1,0,1,0,1},
		     {0,0,0,0,0,0,1,0,0}};


int med3Sol[9][9] = {{4,3,9,5,6,1,7,8,2},
		     {8,1,6,7,2,9,3,4,5},
		     {2,7,5,8,3,4,6,9,1},
		     {7,8,3,6,1,5,9,2,4},
		     {5,2,4,9,7,3,8,1,6},
		     {6,9,1,2,4,8,5,7,3},
		     {9,5,2,1,8,6,4,3,7},
		     {1,4,8,3,5,7,2,6,9},
		     {3,6,7,4,9,2,1,5,8}};


int med4[9][9] = {{0,0,0,0,0,1,0,3,0},
		  {2,0,5,4,0,8,0,0,7},
		  {1,7,0,0,0,0,0,0,0},
		  {0,5,0,2,0,0,4,0,0},
		  {4,0,0,0,8,0,0,0,0},
		  {0,0,0,0,0,3,0,0,0},
		  {0,0,0,0,0,0,8,0,0},
		  {0,1,6,7,0,0,9,0,0},
		  {9,0,4,0,0,0,0,6,0}};

int med4Bin[9][9] = {{0,0,0,0,0,1,0,1,0},
		     {1,0,1,1,0,1,0,0,1},
		     {1,1,0,0,0,0,0,0,0},
		     {0,1,0,1,0,0,1,0,0},
		     {1,0,0,0,1,0,0,0,0},
		     {0,0,0,0,0,1,0,0,0},
		     {0,0,0,0,0,0,1,0,0},
		     {0,1,1,1,0,0,1,0,0},
		     {1,0,1,0,0,0,0,1,0}};

int med4Sol[9][9] = {{6,4,8,5,7,1,2,3,9},
		     {2,9,5,4,3,8,6,1,7},
		     {1,7,3,6,2,9,5,8,4},
		     {3,5,1,2,6,7,4,9,8},
		     {4,6,9,1,8,5,3,7,2},
		     {7,8,2,9,4,3,1,5,6},
		     {5,2,7,3,9,6,8,4,1},
		     {8,1,6,7,5,4,9,2,3},
		     {9,3,4,8,1,2,7,6,5}};


int med5[9][9] = {{3,0,1,0,0,4,0,0,0},
		  {0,2,0,0,0,0,0,0,3},
		  {0,0,6,5,0,0,0,4,1},
		  {0,1,7,8,0,2,0,0,4},
		  {0,0,0,0,6,0,2,0,0},
		  {6,0,0,0,0,0,0,1,7},
		  {0,5,0,0,9,0,0,0,0},
		  {0,0,0,0,0,5,0,6,0},
		  {4,0,0,0,0,0,0,0,0}};

int med5Bin[9][9] = {{1,0,1,0,0,1,0,0,0},
		     {0,1,0,0,0,0,0,0,1},
		     {0,0,1,1,0,0,0,1,1},
		     {0,1,1,1,0,1,0,0,1},
		     {0,0,0,0,1,0,1,0,0},
		     {1,0,0,0,0,0,0,1,1},
		     {0,1,0,0,1,0,0,0,0},
		     {0,0,0,0,0,1,0,1,0},
		     {1,0,0,0,0,0,0,0,0}};

int med5Sol[9][9] = {{3,9,1,7,8,4,5,2,6},
		     {5,2,4,9,1,6,7,8,3},
		     {7,8,6,5,2,3,9,4,1},
		     {9,1,7,8,3,2,6,5,4},
		     {8,4,5,1,6,7,2,3,9},
   		     {6,3,2,4,5,9,8,1,7},
		     {1,5,3,6,9,8,4,7,2},
		     {2,7,9,3,4,5,1,6,8},
		     {4,6,8,2,7,1,3,9,5}};

int med6[9][9] = {{0,0,0,4,0,0,0,0,0},
		  {7,9,0,6,0,5,0,1,0},
		  {0,0,0,0,0,0,0,8,0},
		  {0,0,0,0,0,0,0,0,1},
		  {0,0,2,7,6,0,0,0,0},
		  {6,1,7,0,0,0,0,0,0},
		  {0,0,6,0,0,3,4,7,0},
		  {0,0,8,0,0,0,9,3,2},
		  {3,0,0,0,9,0,0,0,0}};

int med6Bin[9][9] = {{0,0,0,2,0,0,0,0,0},
		     {1,1,0,1,0,1,0,1,0},
		     {0,0,0,0,0,0,0,1,0},
		     {0,0,0,0,0,0,0,0,1},
		     {0,0,1,1,1,0,0,0,0},
		     {1,1,1,0,0,0,0,0,0},
		     {0,0,1,0,0,1,1,1,0},
		     {0,0,1,0,0,0,1,1,1},
		     {1,0,0,0,1,0,0,0,0}};

int med6Sol[9][9] = {{8,6,1,4,7,2,5,9,3},
		     {7,9,3,6,8,5,2,1,4},
		     {2,4,5,3,1,9,6,8,7},
		     {4,3,9,2,5,8,7,6,1},
		     {5,8,2,7,6,1,3,4,9},
		     {6,1,7,9,3,4,8,2,5},
		     {9,5,6,1,2,3,4,7,8},
		     {1,7,8,5,4,6,9,3,2},
		     {3,2,4,8,9,7,1,5,6}};


int med7[9][9] = {{0,0,8,0,0,0,0,0,0},
		  {0,3,0,0,5,0,0,0,0},
		  {0,0,0,3,0,7,0,0,0},
		  {0,0,1,0,0,0,5,0,8},
		  {5,0,7,9,0,8,6,0,0},
		  {0,9,0,0,0,0,0,0,0},
		  {0,1,0,7,0,0,0,0,4},
		  {0,4,0,0,1,0,8,0,6},
		  {0,0,0,0,0,5,0,2,0}};

int med7Bin[9][9] = {{0,0,1,0,0,0,0,0,0},
		     {0,1,0,0,1,0,0,0,0},
		     {0,0,0,1,0,1,0,0,0},
		     {0,0,1,0,0,0,1,0,1},
		     {1,0,1,1,0,1,1,0,0},
		     {0,1,0,0,0,0,0,0,0},
		     {0,1,0,1,0,0,0,0,1},
		     {0,1,0,0,1,0,1,0,1},
		     {0,0,0,0,0,1,0,1,0}};

int med7sol[9][9] = {{2,7,8,1,9,4,3,6,5},
		     {4,3,9,8,5,6,7,1,2},
		     {1,5,6,3,2,7,4,8,9},
		     {3,6,1,4,7,2,5,9,8},
		     {5,2,7,9,3,8,6,4,1},
		     {8,9,4,5,6,1,2,7,3},
		     {6,1,2,7,8,3,9,5,4},
		     {7,4,5,2,1,9,8,3,6},
		     {9,8,3,6,4,5,1,2,7}};

int med8[9][9] = {{2,0,0,0,0,0,6,8,4},
		  {0,0,0,0,1,0,0,7,0},
		  {0,0,8,0,0,0,9,0,0},
		  {3,0,0,0,6,0,0,0,0},
		  {0,0,0,0,0,0,3,0,0},
		  {0,0,4,0,7,1,0,2,0},
		  {0,0,0,0,0,0,8,0,0},
		  {4,6,5,0,0,0,0,0,7},
	          {9,0,0,5,0,0,0,0,0}};

int med8Bin[9][9] = {{1,0,0,0,0,0,1,1,1},
		     {0,0,0,0,1,0,0,1,0},
		     {0,0,1,0,0,0,1,0,0},
	   	     {1,0,0,0,1,0,0,0,0},
		     {0,0,0,0,0,0,1,0,0},
		     {0,0,1,0,1,1,0,1,0},
		     {0,0,0,0,0,0,1,0,0},
		     {1,1,1,0,0,0,0,0,1},
		     {1,0,0,1,0,0,0,0,0}};

int med8Sol[9][9] = {{2,1,7,9,5,3,6,8,4},
		     {5,4,9,6,1,8,2,7,3},
		     {6,3,8,7,2,4,9,5,1},
		     {3,5,2,4,6,9,7,1,8},
		     {1,7,6,2,8,5,3,4,9},
		     {8,9,4,3,7,1,5,2,6},
		     {7,2,3,1,4,6,8,9,5},
		     {4,6,5,8,9,2,1,3,7},
		     {9,8,1,5,3,7,4,6,2}};


int med9[9][9] = {{0,0,4,0,0,0,0,0,0},
		  {0,0,0,0,0,0,3,0,0},
		  {6,0,8,0,3,0,0,2,5},
		  {0,6,0,0,1,0,7,0,0},
		  {0,0,0,7,0,0,0,5,0},
		  {5,0,0,2,0,0,9,0,0},
		  {0,0,6,4,0,0,0,0,0},
		  {0,4,9,6,0,0,0,0,8},
		  {0,0,0,0,0,2,0,3,0}};

int med9Bin[9][9] = {{0,0,1,0,0,0,0,0,0},
		     {0,0,0,0,0,0,1,0,0},
		     {1,0,1,0,1,0,0,1,1},
		     {0,1,0,0,1,0,1,0,0},
		     {0,0,0,1,0,0,0,1,0},
		     {1,0,0,1,0,0,1,0,0},
		     {0,0,1,1,0,0,0,0,0},
		     {0,1,1,1,0,0,0,0,1},
		     {0,0,0,0,0,1,0,1,0}};

int med9Sol[9][9] = {{1,3,4,5,2,7,8,6,9},
		     {2,9,5,1,6,8,3,4,7},
		     {6,7,8,9,3,4,1,2,5},
		     {9,6,2,3,1,5,7,8,4},
		     {4,1,3,7,8,9,6,5,2},
		     {5,8,7,2,4,6,9,1,3},
		     {8,2,6,4,7,3,5,9,1},
		     {3,4,9,6,5,1,2,7,8},
		     {7,5,1,8,9,2,4,3,6}};


int med10[9][9] = {{0,9,0,2,0,4,0,5,0},
		   {0,0,2,0,0,0,7,0,0},
		   {0,3,0,0,0,6,0,0,0},
		   {6,0,0,8,0,0,0,0,0},
		   {0,0,3,0,0,0,0,0,9},
		   {7,1,0,0,9,0,0,0,6},
		   {0,0,0,0,0,0,3,9,8},
		   {0,0,5,6,0,1,0,0,0},
		   {0,0,0,0,0,0,0,0,1}};


int med10Bin[9][9] = {{0,1,0,1,0,1,0,1,0},
		              {0,0,1,0,0,0,1,0,0},
                      {0,1,0,0,0,1,0,0,0},
		              {1,0,0,1,0,0,0,0,0},
		              {0,0,1,0,0,0,0,0,1},
		              {1,1,0,0,1,0,0,0,1},
		              {0,0,0,0,0,0,1,1,1},
		              {0,0,1,1,0,1,0,0,0},
		              {0,0,0,0,0,0,0,0,1}};

int med10Sol[9][9] = {{8,9,7,2,1,4,6,5,3},
		              {5,6,2,3,8,9,7,1,4},
		              {4,3,1,7,5,6,9,8,2},
		              {6,4,9,8,2,3,1,7,5},
		              {2,5,3,1,6,7,8,4,9},
		              {7,1,8,4,9,5,2,3,6},
		              {1,7,6,5,4,2,3,9,8},
		              {9,8,5,6,3,1,4,2,7},
                      {3,2,4,9,7,8,5,6,1}};



void ingresaValor2(int a[][9],int b[][9],int c[][9]){


    int i,j,var;
    char ayuda;
    static int k = 0;

    printf("ayudas utilizadas %d / 3 \n", k);
    printf("usar ayuda ? Y/N \n");
    scanf(" %c", &ayuda);

    if((ayuda == 'y') & (k < 5)){

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


    printf("ingresa valor \n");
    scanf("%d", &var);


   if((var < 1 ) | (var > 9)){

     printf("el numero debe ser del 1 al 9 \n");
     imprimir(c);
     ingresaValor(a,b,c);

   }


   if((a[i][j] != 0)){

    printf("posicion invalida \n");
    printf("ingresa valor nuevamente... \n");
    ingresaValor(a,b,c);

   }


   int uno = validarColumna2(c,var,j);
   int dos = validarFila2(c,var,i);
   int tres = validarArea2(c,var,i,j);
   int cuatro =  validar2(c,a,var,uno,dos,tres,i,j);
   int seis = tableroCompleto2(c);
   int siete = compararTableros2(c,b);
   char ocho;


   if(cuatro == 0){

        printf("numero Valido ! \n");
        printf("\n");
        imprimir2(c);

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

        ingresaValor2(a,b,c);

   }
}



 int validarColumna2(int a[][9],int num,int columna){

    int i;

        for(i = 0;i < 9;i++){

            if( a[i][columna] == num ){
            return 1;
            }
        }
    return 0;
    }



 void imprimir2(int a[][9]){

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



int validarFila2(int a[][9],int num,int fila){

    int j;

        for(j = 0;j < 9;j++){

            if( a[fila][j] == num ){
            return 1;

            }
        }
    return 0;
}



int validarArea2(int a[][9],int num,int fila,int columna){

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



int validar2(int a[][9],int b[][9],int var,int fila,int columna,int area,int i,int j){

    if(((fila + columna + area) == 0 )  & (b[i][j] == 0 )){

        a[i][j] = var;

        return 0;
    }
return 1;
}



int tableroCompleto2(int a[][9]){

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



int compararTableros2(int a[][9],int b[][9]){

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



void borrar2(int a[][9],int b[][9],int i,int j){

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
    imprimir2(a);
}



void ayuda2(int a[][9],int b[][9],int c[][9]){

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
        imprimir2(c);

    }else{

      printf("no se encontro valor,buscando... \n");
      ayuda2(a,b,c);
}
}



void tablerosMedium(int a){

        switch(a){

        case(0) :
            printf("tablero uno \n");
            printf("\n");
            imprimir2(med1);
            ingresaValor2(med1Bin,med1Sol,med1);
            break;

        case(1) :
            printf("tablero dos \n");
            printf("\n");
            imprimir2(med2);
            ingresaValor2(med2Bin,med2Sol,med2);
            break;

        case(2) :
            printf("tablero tres \n");
            printf("\n");
            imprimir2(med3);
            ingresaValor2(med3Bin,med3Sol,med3);
            break;

        case(3) :
            printf("tablero cuatro \n");
            printf("\n");
            imprimir2(med4);
            ingresaValor2(med4Bin,med4Sol,med4);
            break;

        case(4) :
            printf("tablero cinco \n");
            printf("\n");
            imprimir2(med5);
            ingresaValor2(med5Bin,med5Sol,med5);
            break;

        case(5) :
            printf("tablero seis \n");
            printf("\n");
            imprimir2(med6);
            ingresaValor2(med6Bin,med6Sol,med6);
            break;

        case(6) :
            printf("tablero siete \n");
            printf("\n");
            imprimir2(med7);
            ingresaValor2(med7Bin,med7sol,med7);
            break;

        case(7) :
            printf("tablero ocho \n");
            printf("\n");
            imprimir2(med8);
            ingresaValor2(med8Bin,med8Sol,med8);
            break;

        case(8) :
            printf("tablero nueve \n");
            printf("\n");
            imprimir2(med9);
            ingresaValor2(med9Bin,med9Sol,med9);
            break;

        case(9) :
            printf("tablero diez \n");
            printf("\n");
            imprimir2(med10);
            ingresaValor2(med10Bin,med10Sol,med10);
            break;

        }
}



void seleccionMedium(){

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
            tablerosMedium(uno);

        }

        if(dos[uno] == 1 ){

            printf("cargando... \n");
            seleccionMedium();

        }


}
