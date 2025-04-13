#include <vector>
#include "Item.h"

using namespace std;

// Partition function
int partition(vector<Item*>& items, int low, int high) {
    int pivotId = items[high]->getId();
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (items[j]->getId() < pivotId) {
            i++;
            swap(items[i], items[j]);
        }
    }
    swap(items[i + 1], items[high]);
    return i + 1;
}

// QuickSort function
void quickSort(vector<Item*>& items, int low, int high) {
    if (low < high) {
        int pi = partition(items, low, high);
        quickSort(items, low, pi - 1);
        quickSort(items, pi + 1, high);
    }
}
