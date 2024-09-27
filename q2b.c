#include <stdio.h>

#include <stdlib.h>



int main() {

    char *heap_var = (char *)malloc(1024 * 1024);
    if (heap_var == NULL) {
        printf("malloc fail\n");
        exit(1);
    }
    //Write something to memory
    for(int i = 0; i < (1024*1024); i++){
        heap_var[i]= 'A';
    }
    //Write some more to memory
    heap_var[1024*1024] = 'B';

   void heap(){
    int myInt;
    scanf("%d", &myInt);
     }
    heap();
    return 0;

}


