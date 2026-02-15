// Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>

struct bankacc{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance; // these 4 are the basic details needed for a person's bank account
}; 

int main() {
    
    return 0;
}