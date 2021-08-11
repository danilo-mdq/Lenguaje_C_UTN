#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <windows.h>
#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
#endif


#define tamanio 100

void mostrarArregloNumeros (int A[], int validos);
void mostrarArreglochar (char A[], int validos);
void mostrarArregloReales (float A[], int validos);


void cargarArreglo (int A[], int dimension, int *validos);
int cargaLetra(char A[], int dimension);
int cargarArregloReales (float A[], int dimension);

int sumaElementosEnteros(int A[],int validos);
void sumElemReal(float A[],int validos, float *suma);

void pasarApila (int A[],int validos, Pila *p);

int buscaChar(char A[], int c, char dato);
char buscaMenorchar (char A[], int pos, int c);
char buscaMayorchar (char A[], int pos, int c);
int buscaMenor (int A[], int pos, int validos);

int insertarChar(char A[],int validos, char dato);
void insertar(int A[], int u, int dato);
void ordenacionInsercion (int A[], int validos);

void ordenarChar (char A[], int c);
void ordenarXSeleccion (int A[], int validos);

void invertir2(int A[],int validos);

int arregloCapicua(int A[],int validos);

int pasarArregloChar (char A[], int validos, char B[], int validos2,char C[], int dimension);

void gotoxy(int X,int Y);

void cuentaRegresiva();
void perder();
void ganar();
void fin();







int main()
{
    void gotoxy(int X,int Y);
    void color(int x);
    int whereX();
    int whereY();
    void hidecursor(int ver);

    int opcion;
    int cantidad=0;
    int can=0;
    int cant=0;
    int cant2=0;
    int cant3=0;
    int flag=0;
    int i=0;
    int numerosEnteros[tamanio];
    int numerosEnteros2[tamanio];
    int numer[5]= {5,2,7,4,1};
    int suma=0;
    float numerosReales[tamanio];
    float sumar=0;
    char arregloCaracter[tamanio];
    char arregloCaracterdos[tamanio];
    char arregloCaracter4[tamanio];
    char letra,mayor;
    Pila pilita;
    inicpila(&pilita);


    system("color A");
    gotoxy(40,2);
    printf("BIENVENIDO AL TRABAJO PRACTICO 4 \n");
    Sleep(2000);
    printf("\n");
    printf("\nConecta el sonido y sube el volumen para una mejor experiencia.\n");
    printf("\n");
    Sleep(1500);

    printf("\nLo primero que tenes que hacer es cargar los arreglos.\n");
    Sleep(2500);
    printf("\nPresta atencion que algunos solicitan numeros y otros letras!!\n");
    Sleep(2500);
    printf("\nVamos a hacerlo!!\n");
    Sleep(2000);
    system("CLS");
    printf("Carga tu arreglo con al menos 3 numeros\n");
    printf("\n");
    Sleep(2000);
    cargarArregloNumeros(numerosEnteros, tamanio, &cantidad);
    system("CLS");

    printf("Este es tu arreglo de numeros enteros:\n");
    mostrarArregloNumeros(numerosEnteros,cantidad);
    Sleep(2000);
    ganar();
    Sleep(150);
    printf("\nPerfecto, con eso resolviste el punto 1 y el 2\n");
    Sleep(1500);
    printf("\nContinuemos\n");
    printf("\n");
    system("pause");
    system("CLS");


    printf("Ahora vamos a cargar un arreglo de numeros reales\n");
    Sleep(2000);
    printf("\nRecorda que puede contener numeros con decimales, separandolos con un punto.\n");
    Sleep(2000);
    system("pause");
    system("cls");
    can=cargarArregloReales(numerosReales,tamanio);
    system("cls");

    printf("Este es tu arreglo de numeros reales:\n");

    mostrarArregloReales(numerosReales,can);

    Sleep(2000);
    ganar();
    Sleep(150);
    printf("\n");
    printf("Muy bien! Ya realizaste el punto 5\n\n");
    Sleep(1500);
    printf("\n");
    system("pause");
    system("CLS");

    printf("\nYa falta poco\n");
    Sleep(1500);
    printf("\nAhora carguemos 2 arreglos de 3 caracteres cada uno\n\n");
    Sleep(1000);
    system("cls");
    cant=cargaLetra(arregloCaracter,tamanio);

    system("CLS");
    printf("\n");

    printf("Carguemos el segundo arreglo con 3 caracteres\n");
    Sleep(1000);
    system("cls");
    printf("\n");
    cant2=cargaLetra(arregloCaracterdos,tamanio);

    Sleep(500);

    system("CLS");

    printf("\nEste es tu arreglo de caracteres numero 1\n");
    mostrarArreglochar(arregloCaracter,cant);
    printf("\n");
    printf("-------------------------------------------------------------\n");
    Sleep(2000);
    printf("\nEste es tu arreglo de caracteres numero 2\n");
    mostrarArreglochar(arregloCaracterdos,cant2);
    printf("\n");
    printf("-------------------------------------------------------------\n");
    Sleep(2000);
    perder();
    Sleep(150);
    printf("\nLo lamento, con eso no realizaste ningun punto del trabajo :(\n");
    Sleep(1000);
    printf("\nPero te sera util mas adelante, No te preocupes!\n");

    Sleep(2000);
    printf("\n");
    system("pause");
    system("CLS");

    printf("\nMuy bien, Ya terminaste de cargar los datos necesarios\n");
    Sleep(2500);
    system("cls");

    do
    {



        printf("\nAhora elige que quieres hacer:\n");
        Sleep(1500);

        printf("\n 1- Sumar los numeros de tu arreglo de enteros\n");
        Sleep(300);

        printf("\n 2- Pasar a una pila los numeros de tu arreglo de enteros\n");

        Sleep(300);
        printf("\n 3- Sumar los numeros de tu arreglo de reales\n");

        Sleep(300);
        printf("\n 4- Buscar letra en un arreglo\n");

        Sleep(300);
        printf("\n 5- Insertar una letra en un arreglo\n");

        Sleep(300);
        printf("\n 6- Buscar el caracter mayor\n");

        Sleep(300);
        printf("\n 7- Comprobar si el arrreglo es capicua\n");

        Sleep(300);
        printf("\n 8- Invertir elementos\n");

        Sleep(300);
        printf("\n 9- Ordenacion por seleccion\n");

        Sleep(300);
        printf("\n 10- Ordenacion por insercion\n");

        Sleep(300);
        printf("\n 11- Pasar elementos de 2 arreglos a 1\n");

        Sleep(300);
        printf("\n 12- Salir\n");

        printf("\n");

        scanf("\n%d",&opcion);

        system("CLS");

        switch (opcion)
        {
        case 1:

            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");

            printf("\nEste es el arreglo que habias cargado\n");
            printf("\n");

            mostrarArregloNumeros(numerosEnteros,cantidad);
            Sleep(2000);

            printf("Juguemos una competencia...\n");
            Sleep(1000);
            printf("\nApreta enter y el que primero logre resolver la suma gana\n");
            printf("\n");

            system("pause");
            system("cls");

            Sleep(1500);

            suma = sumaElementosEnteros(numerosEnteros,cantidad);
            Sleep(1500);

            perder();
            printf("\nFuiste demasiado lento jajaja\n\n la suma es:%d\n",suma);
            Sleep(3000);
            ganar();
            Sleep(200);
            printf("\nMuy bien, resolviste el punto 3\n\n Sigamos...\n");
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 2:

            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");

            printf("\nEste es el arreglo que habias cargado\n");
            Sleep(1000);
            mostrarArregloNumeros(numerosEnteros,cantidad);
            Sleep(2000);

            printf("\n");
            system("pause");
            system("cls");

            printf("\nVamos a pasar los elementos a la pila...\n");
            Sleep(1500);
            printf("\n");
            system("pause");
            system("cls");

            cuentaRegresiva();

            pasarApila(numerosEnteros,cantidad,&pilita);

            printf("\nEstos son los elementos del arreglo copiados en la pila\n");
            Sleep(1000);
            printf("\nPILITA\n");

            mostrar(&pilita);
            Sleep(2500);


            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 4\n");
            printf(" \nSigamos...\n");
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 3:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");

            printf("\nEste es el arreglo que habias cargado\n");
            Sleep(1000);
            mostrarArregloReales(numerosReales, can);
            printf("\n");
            Sleep(2000);
            printf("\nSi insistes podemos competir otra vez\n");
            Sleep(1000);
            printf("\nCuando estes listo apreta enter y preparte!\n");
            printf("\n");
            system("pause");
            system("cls");

            cuentaRegresiva();

            sumElemReal(numerosReales,can,&sumar);

            printf("\nla suma es:%.2f\n",sumar);
            printf("\n");
            printf("Esta vez como te fue? te di un poco mas de tiempo\n");
            printf("\n");
            Sleep(2000);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 5\n Sigamos...\n");
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 4:

            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            printf("Ahora vamos a jugar un poco\n");
            printf("\n");
            Sleep(1000);
            printf("Veremos si recuerdas las letras que cargaste en el arreglo de caracteres.\n");
            printf("\n");
            Sleep(1000);
            printf("ingrese una letra que hayas cargado\n");
            fflush(stdin);
            scanf("%c",&letra);
            printf("\n");
            Sleep(1000);
            printf("buscando letra: %c\n",letra);
            printf("\n");
            Sleep(2000);

            system("CLS");

            flag = buscaChar(arregloCaracter,cant,letra);

            if(flag==1)
            {
                printf("\nBuena memoria!! la letra se encuentra en el arreglo\n");

            }
            else
            {
                printf("\nHay que trabajar mas ese cerebro, la letra no se encurntra en el arreglo\n");

            }
            printf("\n");
            Sleep(2500);
            printf("Este es el arreglo que habias cargado con caracteres\n");
            printf("\n");
            mostrarArreglochar(arregloCaracter,cant);
            printf("\n");
            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(2000);
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 6\n");
            printf("\n");
            printf("Sigamos...\n ");
            printf("\n");
            Sleep(1500);
            system("pause");
            system("CLS");

            break;

        case 5:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            printf("Este es el arreglo que habias cargado con caracteres\n");
            printf("\n");
            Sleep(1000);
            mostrarArreglochar(arregloCaracter,cant);
            printf("\n");
            Sleep(2000);
            printf("Antes que nada, vamos a ordenar ese arreglo\n");
            printf("\n");
            Sleep(1000);
            system("pause");
            system("cls");
            printf("\n");
            cuentaRegresiva();

            ordenarChar(arregloCaracter,cant);

            printf("Listo!\n");
            Sleep(1500);
            printf("\n");
            mostrarArreglochar(arregloCaracter,cant);
            Sleep(1000);
            printf("vamos a insertar la letra |D|\n");
            printf("\n");
            system("pause");
            system("cls");
            Sleep(1500);

            cantidad = insertarChar(arregloCaracter,cant,'d');
            mostrarArreglochar(arregloCaracter,cant);
            printf("\n");

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 7\n");
            printf("\n");
            Sleep(1000);
            printf("Sigamos...\n");
            Sleep(1500);
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 6:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            printf("\nEste es el arreglo que habias cargado con caracteres\n");
            printf("\n");
            Sleep(1000);
            mostrarArreglochar(arregloCaracter,cant);
            printf("\n");
            Sleep(2000);

            printf("Ahora vamos a buscar el mayor elemento\n");
            printf("\n");
            Sleep(1000);
            system("pause");
            system("cls");

            mayor=buscaMayorchar(arregloCaracter, i, cant);

            printf("El mayor elemento es: %c\n",mayor);
            printf("\n");
            Sleep(2000);

            printf("\n");

            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 8\n");
            printf("\n");
            printf("  Sigamos...\n");
            printf("\n");

            system("pause");
            system("CLS");

            break;

        case 7:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            printf("Este es el arreglo que habias cargado\n");
            printf("\n");
            Sleep(1500);
            mostrarArregloNumeros(numerosEnteros,cantidad);
            printf("\n");
            Sleep(1000);

            printf("Ahora veremos si tu arreglo es capicua\n");
            printf("\n");
            Sleep(1000);
            system("pause");
            system("cls");
            Sleep(1500);

            flag=arregloCapicua(numerosEnteros,cantidad);
            printf("\n");
            if(flag==1)
            {
                printf("es capicua\n");
            }
            else
            {
                printf("no es capicua\n");
            }
            printf("\n");
            Sleep(2000);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 9\n");
            printf("\n");
            printf("Sigamos...\n");
            Sleep(1000);
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 8:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            printf("Este es el arreglo que habias cargado\n");
            printf("\n");
            Sleep(2000);
            mostrarArregloNumeros(numerosEnteros,cantidad);
            printf("\n");
            Sleep(1500);
            printf("Ahora vamos a invertir los elementos\n");
            Sleep(1000);
            printf("\n");
            system("pause");
            system("cls");
            Sleep(1000);

            invertir2(numerosEnteros,cantidad);

            printf("Arreglo con elementos invertidos:\n");
            printf("\n");
            mostrarArregloNumeros(numerosEnteros,cantidad);
            printf("\n");
            Sleep(1500);
            printf("-------------------------------------------------------------\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste el punto 10\n");
            printf("\n");
            printf("Sigamos...\n");
            printf("\n");
            Sleep(1000);

            system("pause");
            system("CLS");

            break;

        case 9:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            printf("Este es el arreglo que habias cargado\n");
            printf("\n");
            Sleep(1000);
            mostrarArregloNumeros(numerosEnteros,cantidad);
            printf("\n");
            Sleep(1000);
            printf("Lo ordenaremos por el metodo de seleccion\n");
            printf("\n");
            Sleep(1000);
            system("pause");
            system("cls");

            ordenarXSeleccion(numerosEnteros,cantidad);

            printf("Asi queda ordenado:\n");
            printf("\n");
            Sleep(800);
            mostrarArregloNumeros(numerosEnteros,cantidad);
            printf("\n");
            Sleep(1500);


            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste la primera parted del punto 11\n");
            printf("\n");
            printf("Sigamos...\n");
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 10:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(1000);
            printf("Para comprobar este metodo usaremos un arreglo cargado por defecto\n");
            printf("\n");
            Sleep(800);
            mostrarArregloNumeros(numer,5);
            printf("\n");
            Sleep(1000);

            printf("Vamos a ordenarlo por el metodo de insercion\n");
            Sleep(800);
            printf("\n");
            system("pause");
            system("cls");

            ordenacionInsercion(numer,5);

            printf("Arreglo ordenado:\n");
            printf("\n");
            Sleep(800);
            mostrarArregloNumeros(numer,5);
            printf("\n");
            Sleep(1500);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste la segunda parte del punto 11\n");
            printf("\n");
            printf("Sigamos...\n");
            printf("\n");

            system("pause");
            system("CLS");


            break;

        case 11:
            system("CLS");

            printf("seleccionaste ejercicio %d\n",opcion);

            printf("-------------------------------------------------------------\n");
            printf("\n");
            Sleep(100);
            printf("Este es el arreglo que habias cargado con caracteres\n");
            printf("\n");
            Sleep(800);
            mostrarArreglochar(arregloCaracter,cant);
            printf("\n");
            Sleep(1000);
            printf("\nEste es tu arreglo de caracteres numero 2\n");
            printf("\n");
            Sleep(800);
            mostrarArreglochar(arregloCaracterdos,cant2);
            printf("\n");
            Sleep(2500);

            cant3=pasarArregloChar(arregloCaracter,cant,arregloCaracterdos,cant2,arregloCaracter4,tamanio);
            printf("Este contiene a los 2 arreglos juntos y ordenados\n");
            printf("\n");
            Sleep(800);
            mostrarArreglochar(arregloCaracter4,cant3);
            printf("\n");
            Sleep(1500);

            printf("-------------------------------------------------------------\n");
            ganar();
            Sleep(200);
            printf("Muy bien, resolviste la segunda parte del punto 12\n");
            printf("\n");
            printf("Sigamos...\n");
            printf("\n");
            system("pause");
            system("CLS");

            break;

        case 12:
            fin();
            perder();
            printf("\n\n");
            break;
        }

    }
    while(opcion!=12);
    Sleep(2500);
    return 0;
}

void cargarArregloNumeros(int A[], int dimension, int *validos)
{
    char control ='s';

    while(control=='s' && *validos < dimension)
    {
        printf("ingrese un valor entero\n");
        fflush(stdin);

        scanf("%d",&A[*validos]);

        (*validos)= (*validos) + 1;
        printf("desea continuar?: s/n \n ");
        fflush(stdin);
        control= getch();
    }
}

void mostrarArregloNumeros(int A[], int validos)
{
    int i=0;

    printf("\n");

    while(i<validos)
    {
        printf("|%d|", A[i]);
        i++;
    }
    printf("\n");
}

int cargarArregloReales (float A[], int dimension)
{
    char control ='s';
    float num;
    int i=0;

    while(control=='s' && i < dimension)
    {
        printf("ingrese un valor real\n");
        fflush(stdin);

        scanf("%f", &num);
        A[i] = num;
        printf("desea continuar?: s/n \n ");
        fflush(stdin);
        control= getch();
        i++;
    }
    return i;
}

void mostrarArregloReales (float A[], int validos)
{
    int i=0;

    printf("\n");

    while(i<validos)
    {
        printf("|%.2f|", A[i]);
        i++;
    }
    printf("\n");
}


int cargaLetra(char A[], int dimension)
{
    int i= 0;
    char caracter;
    char control = 's';
    do
    {
        printf("Ingrese un caracter y presiona enter...\n");
        fflush(stdin);
        scanf("%c", &caracter);
        A[i] = caracter;
        i+=1;
        printf("desea continuar?");
        fflush(stdin);
        control=getchar();


    }
    while (control=='s');
    return i;
}

void mostrarArreglochar (char A[], int validos)
{
    int i;
    for (i = 0; i < validos; i++)
    {
        printf("%c | ", A[i]);
    }
    printf("\n");
}


int sumaElementosEnteros(int A[],int validos)
{
    int suma=0,i=0;

    while(i<validos)
    {
        suma = suma + A[i];
        i++;
    }

    return suma;

}

void pasarApila (int A[],int validos, Pila *p)
{
    int i=0;

    while(i<validos)
    {
        apilar(p,A[i]);
        i++;
    }
}

void sumElemReal(float A[],int validos, float *suma)
{

    int i=0;

    while(i<validos)
    {
        (*suma) = (*suma) + A[i];
        i++;
    }
}

int buscaChar(char A[], int validos, char dato)
{
    int i=0;
    int flag=0;

    while (i<validos && flag==0)
    {
        if (dato==A[i])
        {
            flag=1;
        }
        else
        {
            i++;
        }
    }
    return flag;
}

char buscaMenorchar (char A[], int pos, int c)
{
    char menor = A[pos];
    char posmenor = pos;
    int i = pos +1;
    while (i<c)
    {
        if (menor > A[i])
        {
            menor = A[i];
            posmenor = i;
        }
        i++;
    }
    return posmenor;
}

void ordenarChar(char A[], int c)
{
    char posmenor;
    char aux;
    int i = 0;
    while (i<c-1)
    {
        posmenor = buscaMenorchar(A,i,c);
        aux = A[posmenor];
        A[posmenor]=A[i];
        A[i]= aux;
        i++;
    }
}

char buscaMayorchar (char A[],int pos, int c)
{

    char mayor = A[pos];
    char posmayor = pos;
    int i = pos +1;
    while (i<c)
    {
        if (mayor < A[i])
        {
            mayor = A[i];
            posmayor = i;
        }
        i++;
    }

    return mayor;
}

int insertarChar(char A[],int validos, char dato)
{
    int i= validos-1;
    int pos;
    while (i>=0 && dato<A[i])
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=dato;

    return validos+1;
}

int arregloCapicua(int A[],int validos)
{
    int i=0;
    int flag=0;

    for (i=0; i<validos; i++)
    {
        if(A[i]==A[validos-1-i])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    return flag;

}

void invertir2(int A[],int validos)
{
    int i=0;
    int temp;

    for(i=0; i<(validos/2); i++)
    {
        temp=A[i];
        A[i]=A[validos-1-i];
        A[validos-1-i]=temp;

    }

}
void ordenarXSeleccion (int A[], int validos)
{
    int posmenor;
    int aux;
    int i = 0;
    while (i<validos-1)
    {
        posmenor = buscaMenor(A,i,validos);
        aux = A[posmenor];
        A[posmenor]=A[i];
        A[i]= aux;
        i++;
    }
}
void ordenacionInsercion (int A[], int validos)
{
    int u = 0;
    while (u<validos-1)
    {
        insertar(A,u,A[u+1]);
        u++;
    }
}

int pasarArregloChar (char A[], int validos, char B[], int validos2,char C[], int dimension)
{
    int iF=0;
    int i1=0;
    int i2=0;


    while(i1 < validos && i2 < validos2 && iF<dimension)
    {
        if (A[i1] < B[i2])

        {
            C[iF] = A[i1];

            i1 += 1;
        }
        else
        {
            C[iF] = B[i2];

            i2 += 1;
        }
        iF +=1;
    }
    while (i1<validos)
    {
        C[iF]=A[i1];
        i1+=1;
        iF+=1;
    }
    while (i2<validos2)
    {
        C[iF]=B[i2];
        i2+=1;
        iF+=1;
    }

    return iF;
}

    int buscaMenor (int A[], int pos, int validos)
    {
        int menor = A[pos];
        int posmenor = pos;
        int i = pos +1;
        while (i<validos)
        {
            if (menor > A[i])
            {
                menor = A[i];
                posmenor = i;
            }
            i++;
        }
        return posmenor;
    }

    void insertar(int A[], int u, int dato)
    {
        int i = u;
        while(i>=0 && dato <A[i])
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=dato;
    }

    void gotoxy(int X,int Y)
    {
        /// Cambia las coordenadas del cursor
        HANDLE hcon;
        hcon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos;
        dwPos.X=X;
        dwPos.Y=Y;
        SetConsoleCursorPosition(hcon,dwPos);
    }

    void fin()
    {
        int i, resta=0;
        int cuenta=3;
        char A[]="FIN";

        for(i=0; i<3; i++)
        {

            resta= cuenta--;
            gotoxy(50,11);
            printf("%d",resta);

            Sleep(1000);
            system("cls");
        }
        gotoxy(50,11);
        printf("%s",A);

    }

    void cuentaRegresiva()
    {
        int i, resta=0;
        int cuenta=3;

        Sleep(500);
        gotoxy(1,1);
        for(i=0; i<3; i++)
        {
            resta= cuenta--;
            gotoxy(1,1);
            printf("%d",resta);

            Sleep(1000);
            system("cls");
        }

    }
    void perder()
    {
        MessageBeep(MB_ICONERROR);

    }


    void ganar()
    {
        MessageBeep(MB_ICONEXCLAMATION);
    }

