#include <stdio.h>
int add(int a, int b){
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if(b == 0)
        return 0;
    else 
        return a / b;
}

void performoperation(int (*operation)(int, int), int a, int b){
	printf("%d\n", operation(a,b));
}

int main(){
	performoperation(add, 1, 3);
	performoperation(sub, 1, 3);
	performoperation(multiply, 1, 3);
	performoperation(divide, 10, 5);
}

