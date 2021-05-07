// codiugo fuente que implementa stacks con listas enlazadas
#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 

// estructura para representar un nodo
struct StackNode { 
	int data; 
	struct StackNode* next; 
}; 

// creacion de un nuevo nodo en memoria
struct StackNode* newNode(int data) 
{ 
	struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode)); 
	stackNode->data = data;
	stackNode->next = NULL; 
	return stackNode; 
} 

// revisa si está vacío
int isEmpty(struct StackNode* top) 
{ 
	return !top; 
} 

// agregar un elemento
void push(struct StackNode** top, int data) 
{ 
	struct StackNode* temp = newNode(data);
	temp->next = *top; 
	*top = temp; 
	printf("%d agregado a la pila\n", data); 
} 

// sacar un elemento
int pop(struct StackNode** top) 
{ 
	if (isEmpty(*top)) 
		return INT_MIN; // viene de #include <limits.h>
	struct StackNode* temp = *top; 
	*top = (*top)->next; 

	int popped = temp->data; // imprimir
	free(temp); 

	return popped; 
} 

// mirar sin sacar
int peek(struct StackNode* top) 
{ 
	if (isEmpty(top)) 
		return INT_MIN; // viene de #include <limits.h>
	return top->data; 
} 

int main() 
{ 
	struct StackNode* top = NULL; 

	push(&top, 10); 
	push(&top, 20); 
	push(&top, 30); 

	printf("%d sacado de la pila\n", pop(&top)); 

	printf("último elemento agregado:  %d\n", peek(top)); 

	return 0; 
} 
