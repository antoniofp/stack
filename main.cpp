#include "Stack.hpp"
#include <iostream>

int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    std::cout << "el elemento después del pop es: " << stack.top() << std::endl;
}