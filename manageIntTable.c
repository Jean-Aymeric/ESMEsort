//
// Created by jeana on 05/10/2021.
//

#include "manageIntTable.h"

void fillTableWithRandomInt(int *tableToFill, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        *(tableToFill + i) = rand() % 100;
    }
}

void showConsoleTable(int *tableToShow, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", *(tableToShow + i));
    }
}
