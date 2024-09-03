#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){

/*
printf("I am sandesh who loves Yachu.\nThis is my first program in C and I am very excited to learn about C and will be very good at C by the end of it."); // \n breaks the line and starts below & needs to be inside of " \n"
*/

/*
// Making a grid lines
printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // \t creates spaces among char and \n  breaks the line.
*/

/*

// Displaying Quotes
printf("\"I did not come this far just to come this far\"\n");
*/

/*
// Variables
int x=73; // uses %d to print
const int PI=3.14789; // uses %d // makes it a constant
long long int r= 9090909999999099U; // uses %lld for placeholder & add U at the end to avoid crashing //very long integer.
float GPA=3.99; // Number with decimals // uses %f for float.
char Handsome[]="SK"; // Adding [] in the declaration is important. // Use %s for array.
char Name[]= "SANDESH"; // Cannot store strings as it is not an OOL. This is an array, set of characters.
double pi = 3.14448875940; // use %lf for double which is stores more than float.
bool Handsome1= true;   // use %d for bool. // have to include <stdbool.h>

printf("You are %d years old.\n",x); // Displaying variables using printf and "%d" is a pllace holder for the integer.
printf("I got a GPA of %f\n",GPA); // "%f" is a place holder for the float.
printf("Who is %s?\n",Name);  // "%s" is a place holder for array of char aka strings.
printf("%s is the abbreviated form for Sandesh Kakshapati.\n",Handsome);
printf("This is a very large integer so we uses long long integer %lld",r);
*/

/*
float item1=2.99;
float item2=6.99;
float item3=4.99;
printf("This is the price for Item 1: $%f\n", item1);
printf("This is the price for Item 2: $%.3f\n", item2); // placing .2 after % or any integer is stoping the float to display 2 places after decimal.
printf("This is the price for Item 3: $%.2f\n", item3);
*/

/*
// Arithmetic Operations
int x=12;
int y=4;

//float z=x+y; 
//float z=x-y;
//float z=x*y;
//int z= x%y; // To use % we gotta have int type cause if we dont float numbers dont have remainders.
printf("%.2f, is the answer\n",z);
*/

/*
// Accepting User Input & displaying
char name [26];
int age;
float GPA;

printf("What is your name?\n");
fgets(name,25,stdin); //  \n is included in this function && name[strlen(name)-1]='\0';

printf("What is your age?\n");
scanf("%d",&age); // scanf uses %d , and & variable

printf("What is your GPA?\n");
scanf("%f",&GPA);

printf("Your name is %d.\n",name);
printf("Your age is %d.\n",age);
printf("Your GPA is %.2f.\n",GPA);
*/

/*
// Math Functions
    // double A=sqrt(9);
    // double A=pow(3,2);
    //int A=round(3.12);
    //int A=floor(8.99);
    //int A=fabs(-1092);
    //int A= log(1);
    // int A= sin(0);
    // int A= cos(0);
    // int A=tan(0);

printf("%d",A); // make sure you use correct place holder with %
*/

/*
// Program to calculate Area of Circle with user input
const float PI= (22.f/7.f);         // Ensure that 22.f and 7.f not 22/7 as it will go for int division instead of float division.
float radius;
float areaOfCircle;
float circumferenceOfCircle;

printf("Enter the value for radius in meters: \n");
scanf("%f",&radius);
// calculating the area of the circle
areaOfCircle= PI*pow(radius,2);
// calculate the circumference
circumferenceOfCircle=2*PI*radius;
// Displaying the area & circumference
printf("The area of the circle with given radius is %.2f m^2. \n",areaOfCircle); 
printf("The circumference of circle is %.2f m.",circumferenceOfCircle);
*/

/*
// ElseIf & Switches Conditions
// ElseIfs
int age;
printf("Enter your age: \n");
scanf("%d", &age);              // have to use & in scanf, have to use & in scanf, have to use & in scanf, have to use & in scanf, have to use & in scanf, have to use & in scanf.
if(age > 18){
    printf("You are now eligible to vote.");
    }  
else if(age=18){
    printf("You are not allowed to drink.");
    }    
else {                      // else does not need to have the (age<18) it becomes a error.
    printf("You are not eligible to vote.");
    }

// Switch // more efficient than else ifs 
char grade;
printf("\nEnter your grade: \n");
scanf("%s",&grade);
switch(grade){
    case'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("You did well.\n");
        break;
    case'C':
        printf("You did Okay!\n");
        break;
    case'D':
        printf("You need to work on a lot of things!\n");
        break;
    case'F':
        printf("You failed the class.\n");    
        break;

    default: 
    printf("Please enter a valid grade. Use capital letters in your garde.\n");    
}
*/
    return 0;
}