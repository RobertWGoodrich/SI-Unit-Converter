#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void length_calc(), temp_calc(), mass_calc(), time_calc(); 
double begin_text();



int main(void){
        
       
    // ----------------------Introduction and List of Eligible units----------------------
     
    double n;
    int i=0;
    
    while(i<1){
        n = begin_text();
        if(n==1){
            length_calc();
            i++;
     }else if(n==2){
            mass_calc();
            i++;
     }else if(n==3){
            time_calc();
            i++;
        }else if(n==4){
            temp_calc();
            i++;
     }else{
            printf("Invalid input. Please choose a number between 1 and 4. ");}
    
    }
    return(0);
}
// ----------------------Function for introduction and list of eligible units----------------------
double begin_text(){
    double n;
        printf("| This is a SI Unit Converter |\n");
        printf("The converter can convert between the following units:\n");
        printf("1. Length: meter (m), kilometer (km), centimeter (cm)\n");
        printf("2. Mass: kilogram (kg), gram (g), milligram (mg)\n");
        printf("3. Time: second (s), minute (min), hour (h)\n");
        printf("4. Temperature: Celsius (°C), Fahrenheit (°F), Kelvin (K)\n");
        printf("Choose the number that corresponds to your units: \n");
        scanf("%lf",&n);
    return n;
        
}


// ----------------------Functions to ensure that the value to be converted is not negative----------------------
double no_negl_length(){
    double value = -1;
    while(value<0){
    printf("How much do you want to convert? Enter the value you want to convert. \n");
        scanf("%lf",&value);
        if(value<0){
            printf("Invalid input. Please enter a non-negative value.\n");
        }
    }
    printf("1. meter (m)\n 2. kilometer (km)\n 3. centimeter (cm)\n");
    return value;
}

double no_negl_mass(){
    double value = -1;
    while(value<0){
    printf("How much do you want to convert? Enter the value you want to convert. \n");
        scanf("%lf",&value);
        if(value<0){
            printf("Invalid input. Please enter a non-negative value.\n");
        }
    }
    printf("1. kilogram (kg)\n 2. gram (g)\n 3. miligram (mg)\n");
    return value;
}
double no_negl_time(){
    double value = -1;
    while(value<0){
    printf("How much do you want to convert? Enter the value you want to convert. \n");
        scanf("%lf",&value);
        if(value<0){
            printf("Invalid input. Please enter a non-negative value.\n");
        }
    }
    printf("1. second (s)\n 2. minute (min)\n 3. hour (h)\n");
    return value;
}
// ----------------------Functions for each unit type----------------------
void length_calc(){
    double n,y;
    double m;
    double value;
    int i=0; 
    while(i<1){

        printf("You have chosen to convert length units.\n");
        printf("1. meter (m)\n 2. kilometer (km)\n 3. centimeter (cm)\n");
        printf("What unit is your value in? Choose the number that corresponds to your unit. \n");
        scanf("%lf",&n);
        y=no_negl_length();
        printf("What unit do you want to convert to? Choose a different number that corresponds to the desired unit. \n");
        scanf("%lf",&m);
    
        if(n==1 && m==2){
            double result = y/1000.0;
            printf("%lf m is equal to %lf km", y, result);
            i++;
        }
        else if(n==1 && m==3){
            double result = y*100;
            printf("%lf m is equal to %lf cm", y, result);
            i++;
        }
        else if(n==2 && m==1){
            double result = y*1000;
            printf("%lf km is equal to %lf m", y, result);
            i++;
        }
        else if(n==2 && m==3){
            double result = y*100000;
            printf("%lf km is equal to %lf cm", y, result);
            i++;
        }
        else if(n==3 && m==1){
            double result = y/100;
            printf("%lf cm is equal to %lf m", y, result);
            i++;
        }
        else if(n==3 && m==2){
            double result = y/100000;
            printf("%lf cm is equal to %lf km", y, result);
            i++;
        }
        else{
            printf("Invalid input. Please choose a number between 1 and 3 to select the unit conversion.");
        }
    }
}


void mass_calc(){
    double n, y;
    double m;
    double value;
    int i=0;

    while(i<1){

        printf("You have chosen to convert mass units.\n");
        printf("1. kilogram (kg)\n 2. gram (g)\n 3. miligram (mg)\n");
        printf("What unit is your value in? Choose the number that corresponds to your unit.\n");
        scanf("%lf",&n);
        y=no_negl_mass();
        printf("What unit do you want to convert to? Choose a different number that corresponds to the desired unit.\n");
        scanf("%lf",&m);
    
        if(n==1 && m==2){
            double result = y*1000;
            printf("%lf kg is equal to %lf g", y, result);
            i++;
        }
        else if(n==1 && m==3){
            double result = y*1000000;
            printf("%lf kg is equal to %lf mg", y, result);
            i++;
        }
        else if(n==2 && m==1){
            double result = y/1000;
            printf("%lf g is equal to %lf kg", y, result);
            i++;
        }
        else if(n==2 && m==3){
            double result = y*100000;
            printf("%lf g is equal to %lf mg", y, result);
            i++;
        }
        else if(n==3 && m==1){
            double result = y/100;
            printf("%lf mg is equal to %lf kg", y, result);
            i++;
        }
        else if(n==3 && m==2){
            double result = y/100000;
            printf("%lf mg is equal to %lf g", y, result);
            i++;
        }
        else{
            printf("Invalid input. Please choose a number between 1 and 3 to select the unit conversion.\n");
        
        }
    }
}



void time_calc(){
    double n, y;
    double m;
    double value;
    int i = 0;


    while(i<1){    
        printf("You have chosen to convert time units.\n");
        printf("1. seconds (s)\n 2. minutes (min)\n 3. hours (h)\n");
        printf("What unit is your value in? Choose the number that corresponds to your unit.\n");
        scanf("%lf",&n);
        y=no_negl_time();
        printf("What unit do you want to convert to? Choose a different number that corresponds to the desired unit.\n");
        scanf("%lf",&m);
    
        if(n==1 && m==2){
            double result = y/60.0;
            printf("%lf s is equal to %lf min", y, result);
            i++;
        }
        else if(n==1 && m==3){
            double result = y/3600.0;
            printf("%lf s is equal to %lf h", y, result);
            i++;
        }
        else if(n==2 && m==1){
            double result = y*60;
            printf("%lf min is equal to %lf s", y, result);
            i++;
        }
        else if(n==2 && m==3){
            double result = y/60;
            printf("%lf min is equal to %lf h", y, result);
            i++;
        }
        else if(n==3 && m==1){
            double result = y*3600.0;
            printf("%lf h is equal to %lf s", y, result);
            i++;
        }
        else if(n==3 && m==2){
            double result = y/60.0;
            printf("%lf h is equal to %lf min", y, result);
            i++;
        }
         else{
            printf("Invalid input. Please choose a number between 1 and 3 to select the unit conversion.\n");
        }
    }
}



void temp_calc(){
    double n;
    double m;
    double value;
    int i = 0;
    while(i<1){
        printf("You have chosen to convert temperature units.\n");
        printf("1. Celsius (°C)\n 2. Fahrenheit (°F)\n 3. Kelvin (K)\n");
        printf("What unit is your value in? Choose the number that corresponds to your unit.\n");
        scanf("%lf",&n);
        printf("How much do you want to convert? Enter the value you want to convert.\n");
        scanf("%lf",&value);
        printf("What unit do you want to convert to? Choose a different number that corresponds to the desired unit.\n");
        scanf("%lf",&m);
    
        if(n==1 && m==2){
            double result = value * 9.0/5.0 + 32;
            printf("%lf °C is equal to %lf °F", value, result);
            i++;
        }
        else if(n==1 && m==3){
            double result = value + 273.15;
            printf("%lf °C is equal to %lf K", value, result);
            i++;
        }
        else if(n==2 && m==1){
            double result = (value -32)*5.0/9.0; ;
            printf("%lf °F is equal to %lf °C", value, result);
            i++;
        }
        else if(n==2 && m==3){
            double result = (value -32)*(5.0/9.0) + 273.15;
            printf("%lf °F is equal to %lf K", value, result);
            i++;
        }
        else if(n==3 && m==1){
            double result = value -273.15;
            printf("%lf K is equal to %lf °C", value, result);
            i++;
        }
        else if(n==3 && m==2){
            double result = (value -273.15)*9.0/5.0 + 32;
            printf("%lf K is equal to %lf °F", value, result);
            i++;
        }
        else{
            printf("Invalid input. Please choose a number between 1 and 3 to select the unit conversion.\n");
        }
    }
    
}