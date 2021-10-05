#include "manageIntTable.h"

#define TABLE_SIZE 100

int main() {
    int intTableToSort[TABLE_SIZE];
    fillTableWithRandomInt(intTableToSort, TABLE_SIZE);
    showConsoleTable(intTableToSort, TABLE_SIZE);
    return 0;
}
