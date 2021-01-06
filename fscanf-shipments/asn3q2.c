
#include <stdio.h>
#include <limits.h>


int main() {

    // Open the input file.
    FILE *infile = fopen("shipment-cases.txt", "r");

    // Make sure it was opened successfully.
    if( infile == NULL ) {
        printf("Failed to open the input file shipment-cases.txt.\n");
        return 1;
    }

    // Read the number of shipments
    unsigned int num_shipments;
    fscanf(infile, "%u", &num_shipments);


    unsigned int largest_shipment_cases = 0;
    unsigned int smallest_shipment_cases = UINT_MAX;
    float average_shipment_cases = 0;
    unsigned int current_cases;

    // Read the number of cases of each shipment
    for(unsigned int k = 0; k < num_shipments; k++) {
        fscanf(infile, "%u", &current_cases);
        if( current_cases > largest_shipment_cases ) {
            largest_shipment_cases = current_cases;
        }
        if( current_cases < smallest_shipment_cases) {
            smallest_shipment_cases = current_cases;
        }
        average_shipment_cases = average_shipment_cases + current_cases;
    }
    average_shipment_cases = average_shipment_cases / num_shipments;

    printf("The average shipment was %f cases.\n", average_shipment_cases);
    printf("The largest shipment was %u cases.\n", largest_shipment_cases);
    printf("The smallest shipment was %u cases.\n", smallest_shipment_cases);

    // Close the output file.
    fclose(infile);

}
