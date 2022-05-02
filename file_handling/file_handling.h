#ifndef FILE_HANDLING_H_INCLUDED
#define FILE_HANDLING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//#define SIZE 1000
#define SIZE 1
#define NUMELEM 5

struct threeNum
{
    int n1, n2, n3;
};

typedef struct Car
{
    char brand[15];
    char model[5];
    float volume_of_engine;
    float price;
    char registration;
}vehicle;

void fill_info(vehicle *car)
{
    printf("Information for the car:\n");
    printf("Brand: ");
    scanf("%s", car->brand);
    printf("Model: ");
    scanf("%s", car->model);
    printf("Volume of the engine: ");
    scanf("%f", &car->volume_of_engine);
    printf("Price: ");
    scanf("%f", &car->price);
    fflush(stdin);
    printf("Registration[Y/N]: ");
    scanf("%c", &car->registration);
}
void add_car(vehicle *car)
{
    printf("Information for the new car:\n");
    printf("Brand: ");
    scanf("%s", car->brand);
    printf("Model: ");
    scanf("%s", car->model);
    printf("Volume of the engine: ");
    scanf("%f", &car->volume_of_engine);
    printf("Price: ");
    scanf("%f", &car->price);
    fflush(stdin);
    printf("Registration[Y/N]: ");
    scanf("%c", &car->registration);
}
void disp_info(vehicle car)
{
    printf("Information in the file:\n");
    printf("Brand: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Volume of the engine: %.2f\n", car.volume_of_engine);
    printf("Price: %.2f\n", car.price);
    printf("Registration[Y/N]: %c\n", car.registration);
}


#endif // FILE_HANDLING_H_INCLUDED
