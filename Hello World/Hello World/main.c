//
//  main.c
//  Hello World
//
//  Created by Pallavi Kanoor on 9/21/16.
//  Copyright © 2016 Pallavi Kanoor. All rights reserved.
//

#include <stdio.h>
static const float PI=3.14159;
// This is a function prototype or function signature
void class_exercise();
float simple_interest(float principal,float rate,int years) ;
float area_of_circle(float radius);
float circumference_of_circle(float radius);
void decorate(char * name);
int main(int argc, const char * argv[]) {
    int age= 3456789; // This is used to store age
    float price= 3.69; //This is used to store price
    char name[50]; // This is used to store name
    strcpy (name, "PALLAVI");
    // insert code here...
    printf("Hello,\n %s!\n", name);
    printf(" %s In hexadecimal, you are %#x or %X years old\n", name, age, age);
    printf("In octal, you are %O  or %o years old\n", age, age);
    printf("In decimal, you are %i years old\n", age);

    age= 3;
    strcpy (name, "PRIYA");
    decorate(name);
       printf("You are %d years old\n", age);
    printf("simple interest is %f\n", simple_interest(6000.0,5.0,5));
    printf("simple interest is %e\n", simple_interest(3000.0,5.0,5));
    printf("area of circle is %+f\n", area_of_circle(54));
    printf("area of circle is %f\n", area_of_circle(5.4));
    printf("\a circumference_of_circle is %f\n", circumference_of_circle(23));
    printf("circumference_of_circle is %f\n", circumference_of_circle(0.0009));
    printf("the price of pizza is $%f\n" , price );
    class_exercise();
    
    return 0;
}
float simple_interest(float principal,float rate,int years) {
    return principal*rate*years;
}

float area_of_circle(float radius) {
 
    float area;
    area= PI*radius*radius;
    return area;
}

float circumference_of_circle(float radius) {
    
    float diameter= radius*2;
    float circumference= PI*diameter;
    return circumference;
    
}

void decorate(char * name) {
    
    printf("-----------------\n");
    printf("Hello %s\n", name);
    printf("<3<3<3<3<3<3<3<3<3<3<3\n");
    printf("-----------------\n");
}

void class_exercise(){
    printf("left justify is %+d\n", -123);
    printf("left justify is %+d\n", -1);
    printf("left justify is %+d\n", -1567);
    printf("left justify is %+d\n", -99);
    printf("right justify is %+d\n", 123);
    printf("right justify is %+d\n", 1);
    printf("right justify is %+d\n", 1567);
    printf("right justify is %+d\n", 99);
    printf("0 padding %09d\n", 300);
    printf("max width padding %*d\n", 10, 348);
    printf("max width padding %*d\n", 9, 348);
    printf("max width padding %*d\n", 8, 348);
    printf("max width padding %*d\n", 7, 348);
    printf("max width padding %*d\n", 6, 348);
    printf("max width padding %*d\n", 5, 348);
    printf("max width padding %*d\n", 4, 348);
    printf("max width padding %*d\n", 3, 348);
    printf("max width padding %*d\n", 2, 348);
    printf("max width padding %*d\n", 1, 348);
}





