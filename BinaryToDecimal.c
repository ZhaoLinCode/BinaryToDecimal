/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int convertBinarytoDecimal(long long n);

int main(){
    int result = 0;
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld",&n);
    result = convertBinarytoDecimal(n);
    printf("%lld in binary = %d in decimal",n,result);
     return 0;
}
int convertBinarytoDecimal(long long n){
    int decimalNumber = 0, i=0,remainder = 0;
    while(n!=0){
        remainder = n % 10;
        n = n/10;
        decimalNumber+= remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}