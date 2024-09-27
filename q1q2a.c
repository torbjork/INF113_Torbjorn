
#include <stdio.h>

#include <stdlib.h>

int global_var;

int global_var2;

int main() {

    int main_stack_var = 0;

    int *heap_var = malloc(1500000);

    global_var = 1337;

    printf("=========\n");

    printf("[%p] [Code - address of the Main function]\n", main);

    printf("[%p] [Code - address of initialized global variable global_var]\n", &global_var);

    printf("[%p] [Code - address of global uninitialized variable global_var2] \n", &global_var2);

    global_var2 = 42;

    printf("[%p] [Code - address of global now initialized variable global_var2 \n", &global_var2);

    void f(int i) {
        int f_stack_var = 0;
        char* addresses[10];
        if (i == 0)
            return;
        else
            f_stack_var+=1000;
            printf("[%p] [Address of new value for stack variable f_stack_var]\n", &f_stack_var);
            addresses[i] = &f_stack_var;
            f(i - 1);
            }

    printf("[%p] [Heap - address of heap variable heap_var] \n", heap_var);

    printf("Not used\n--------------\n");

    printf("[%p] [Stack - address of the variable main:stack_var] \n", &main_stack_var);

    f(10);
    printf("=========\n");
   heap_var+=1492;
   //This function was used to print out the contents of the first 16 bytes of memory

   //allocated by malloc(). After some compilation changes, the addresses were different so

   //the code will cause a segmentation fault.

   void heap(){
   //char *address1 = (char *)0x00007ffff7e3b000;

   //char *address2 = (char *)0x00007ffff7e3b001;

   //char *address3 = (char *)0x00007ffff7e3b002;

    //char *address4 = (char *)0x00007ffff7e3b003;

    //char *address5 = (char *)0x00007ffff7e3b004;

    //char *address6 = (char *)0x00007ffff7e3b005;

    //char *address7 = (char *)0x00007ffff7e3b006;

    //char *address8 = (char *)0x00007ffff7e3b007;

    //char *address9 = (char *)0x00007ffff7e3b008;

    //char *address10 = (char *)0x00007ffff7e3b009;

    //char *address11 = (char *)0x00007ffff7e3b00a;

    //char *address12 = (char *)0x00007ffff7e3b00b;

    //char *address13 = (char *)0x00007ffff7e3b00c;

    //char *address14 = (char *)0x00007ffff7e3b00d;

    //char *address15 = (char *)0x00007ffff7e3b00e;

    //char *address16 = (char *)0x00007ffff7e3b00f;


    // printf("Content of 0 address is: 0x%d\n", *address1);

    //printf("Content of 1 address is: 0x%d\n", *address2);

    // printf("Content of 2 address is: 0x%d\n", *address3);

    // printf("Content of 3 address is: 0x%d\n", *address4);

    // printf("Content of 4 address is: 0x%d\n", *address5);

    // printf("Content of 5 address is: 0x%d\n", *address6);

    //printf("Content of 6 address is: 0x%d\n", *address7);

    // printf("Content of 7 address is: 0x%d\n", *address8);

    //printf("Content of 8 address is: 0x%d\n", *address9);

    // printf("Content of 9 address is: 0x%d\n", *address10);

    // printf("Content of a address is: 0x%d\n", *address11);

    // printf("Content of b address is: 0x%d\n", *address12);

    // printf("Content of c address is: 0x%d\n", *address13);

    //printf("Content of d address is: 0x%d\n", *address14);

    //printf("Content of e address is: 0x%d\n", *address15);

    //printf("Content of f address is: 0x%d\n", *address16);

    int myInt;
    scanf("%d", &myInt);
     }
    heap();
    return 0;

}


