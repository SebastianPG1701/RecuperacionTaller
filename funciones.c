#include <stdio.h>
#include <string.h>
#include "funciones.h"

void listarProductos(char productos[][3][40], double precio[], int indice[]) {
    printf("Numero\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[][3][40], double precio[]) {
    char marca[40];
    printf("Ingrese la marca a buscar: ");
    scanf("%s", marca);
    printf("Numero\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for(int i = 0; i < 10; i++) {
        if (strcmp(productos[i][2], marca) == 0) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXCategoria(char productos[][3][40], double precio[]) {
    char categoria[40];
    printf("Ingrese la categoria a buscar: ");
    scanf("%s", categoria);
    printf("Numero\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for(int i = 0; i < 10; i++) {
        if (strcmp(productos[i][1], categoria) == 0) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
    double limite;
    printf("Ingrese el precio limite: ");
    scanf("%lf", &limite);
    printf("Numero\tNombre\t\tCategoria\tMarca\t\tPrecio\n");
    for(int i = 0; i < 10; i++) {
        if (precio[i] < limite) {
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", i + 1, productos[i][0], productos[i][1], productos[i][2], precio[i]);
        }
    }
}

void editarProducto(char productos[][3][40], double precio[], int indice[]) {
    int num;
    printf("Ingrese el numero del producto a editar: ");
    scanf("%d", &num);
    num -= 1;  
    if (num < 0 || num >= 10) {
        printf("Numero de producto no valido.\n");
        return;
    }
    printf("Ingrese el nuevo nombre del producto: ");
    scanf("%s", productos[num][0]);
    printf("Ingrese la nueva categoria del producto: ");
    scanf("%s", productos[num][1]);
    printf("Ingrese la nueva marca del producto: ");
    scanf("%s", productos[num][2]);
    printf("Ingrese el nuevo precio del producto: ");
    scanf("%lf", &precio[num]);
}