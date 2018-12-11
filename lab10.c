#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define READING_LINES 30
#define NUMBER_OF_QUESTIONS 11
#define MAX_NAME_SIZE 32
#define MAX_RESPONSE_COUNT 100

int scan_options( int option );
void specific_id();
void specific_name();
void range_of_ids();
void last_name();
void open_cvs_file();


typedef struct {
        int id;
        char full_name[ MAX_NAME_SIZE ];
        char responses[ NUMBER_OF_QUESTIONS ];
} bubble_response;


int main(){

        int o;
        int s_type;
        s_type  = scan_options( o );
        switch( s_type ){

                case 1: specific_id();
                        break;

                case 2: specific_name();
                        break;

                case 3: range_of_ids();
                        break;

                case 4: last_name();
                        break;

                case 5: return EXIT_SUCCESS;
                        break;

        }


}


int scan_options( int option )
{
        puts("\tBubble Sheet Results Data Mining Menu");
        puts("1. Display specific id");
        puts("2. Display specific name");
        puts("3. Display range of ids");
        puts("4. Display last name");
        puts("5. End the program");
        puts("***Please enter the number corresponding to the way you would like to search***\n");
        scanf("%d", &option);

        return option;
}

void open_cvs_file( char *fname )
{
        FILE *IN = fopen("fname", "r");



}

void specific_id()
{
        open_cvs_file("CheatingLab10");



}
void specific_name()
{
        open_cvs_file("CheatingLab10");

}
void range_of_ids()
{
        open_cvs_file("CheatingLab10");

}
void last_name()
{
        open_cvs_file("CheatingLab10");

}
