#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>


//A Structure To Represent a STACK

struct Stack {

	int top;

	unsigned capacity;

	char *arr;
};

typedef struct Stack Stack;

Stack *createStack(unsigned capacity) {

    Stack *stack = (Stack*)malloc(sizeof(Stack));

           stack->capacity = capacity;

           stack->top = -1;

           stack->arr = (char*)malloc(sizeof(char) * stack->capacity);          

    return stack;
}

int isEmpty(Stack *stack) {
 
    return stack->top == -1;
}

int isFull(Stack *stack) {

	return ((stack->capacity - 1) == stack->top);
}

void push(Stack *stack, char item) {

      //stack overflow
      if( isFull(stack) ) return;

      stack->arr[++stack->top] = item;            
}

char pop(Stack *stack) {               
    
     //stack underflow
     if (isEmpty(stack)) return 0;

     return stack->arr[stack->top--]; 

}

int main(int argc, char const *argv[])
{
	char str[] = "likelihood";

	int i, 

	    n = strlen(str);

	    printf("%s\n", str);

	    struct Stack *stack;

	                  stack = createStack( n ); 

	    for(i = 0; i < n; ++i) push(stack, str[i]);

    	for(i = 0; i < n; ++i) { 

    		char c = pop(stack);

    		     printf("%c", c);
        }

        printf("\n");

	return 0;
}