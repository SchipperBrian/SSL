#include <stdio.h>

int main() {

    FILE *file_excercise0 = fopen("output.txt", "w");

    if (file_excercise0 == NULL)
    {  
        printf("Error in file excercise0 \n");
        //exit(1);
    }

    fprintf(file_excercise0, " Hello world! "); 

    return 0;
}