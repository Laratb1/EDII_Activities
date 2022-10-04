#include <stdio.h>
#include "item.h"

void sort(Item *array, int lo, int hi){   
    for(int i = 0; i < hi; i++){
        int less = i;
        for(int j = i+1; j < hi; j++){
            if(less(array[j], array[less])){
                less = j;
            }
        }
        exch(array[i], array[less]);
    }
}