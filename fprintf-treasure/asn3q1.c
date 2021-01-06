
#include <stdio.h>



int main() {

    // Open the output file.
    FILE *outfile = fopen("treasure_journal.txt", "a");

    // Make sure it was opened successfully.
    if( outfile == NULL ) {
        printf("Failed to open output file treasure_journal.txt.\n");
        return 1;
    }

    // Read the first treasure value
    int nextValue;
    printf("Enter treasure value: ");
    scanf("%d", &nextValue);

    // If it was positive, write it to the file and read a new treasure value...
    while(nextValue > 0) {
        fprintf(outfile, "%d\n", nextValue);
        printf("Enter treasure value: ");
        scanf("%d", &nextValue);
    }

    // Close the output file.
    fclose(outfile);

}
