#include <stdio.h>
#include <stdlib.h>

int main() {

  void heap(){

    int myInt;
    scanf("%d", &myInt); 
    }

    // Declare a char pointer
    char *heap_var;
    while (1) { 
        heap_var = (char *)malloc(1024);    //(originally 1024 * 1024  *1024)	
                                            // then changed to 1024 * 1024 for the second try
                                            //without writing.
    // Check if allocation failed
        if (heap_var == NULL) {
            printf("Out of memory!\n");
            break; // exit the loop
        }
    // Write to the entire array with some character
        for(int i = 0; i < (1024); i++){
            heap_var[i] = 'A';
        }
        // Free the allocated memory? Nah
        //free(heap_var);
    }
    // Call the heap function after the loop to keep alive the process
    heap();
    return 0;

 }
