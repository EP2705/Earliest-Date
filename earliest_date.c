/*
Earliest Date
Eliandro Pizzonia 251363956
CS 2211

this program will output the earliest entered date based on all the dates that the user has entered
*/

#include <stdio.h>

// global variables that will keep getting replaced by the earliest date the user enters
int earliest_day = 32;
int earliest_month = 13;
int earliest_year = 100;

// function to find the earliest date entered by the user
void earliest_date() {

// variables to store the user input
int user_day = 1;
int user_month = 1;
int user_year = 1;

// getting user input to enter a date
printf("Enter a date (mm/dd/yy): ");
scanf("%d/%d/%d", &user_month, &user_day, &user_year);

    // if user wishes to exit program 
    if (user_day == 0 && user_month == 0 && user_year == 0){
        printf("\n%02d/%02d/%02d is the earliest date\n", earliest_month, earliest_day, earliest_year);
        }
    
    // update the earliest date if the user date is earlier 
    else{
        if ((user_year < earliest_year) || (user_year == earliest_year && user_month < earliest_month)
        || (user_year == earliest_year && user_month == earliest_month && user_day < earliest_day)){
            earliest_year = user_year;
            earliest_day = user_day;
            earliest_month = user_month;
            earliest_date(); 
            }

        // recursive call to get the users next date
        else{
        earliest_date();
       }
    }   
}

// main function where the program begins
int main(){
earliest_date();
return 0;  
}



