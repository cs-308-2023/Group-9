#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    printf("\n");
    printf("Calculating the factorial program\n");
    printf("enter a number\n");
    int n; cin>> n;
    int fact = factorial(n);
    if(fact > 0) cout << "Factorial of "<< n << "is"<< factorial(n)<< endl;
    else printf("kindly enter positive number\n");
    
    return 0;
}
