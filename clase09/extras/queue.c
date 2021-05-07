// codigo fuente que implementa colas con listas enlazadas
#include <stdio.h> 
#include <stdlib.h> 

// estructura para representar un nodo
struct QNode { 
	int data; 
	struct QNode* next; 
}; 

// La lista, primero almacena nodo más antiguo. ultimo almacena mas nuevo
struct Queue { 
	struct QNode *primero, *ultimo; 
}; 

// funcion para crear un nuevo nodo
struct QNode* newNode(int k) 
{ 
	struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode)); 
	temp->data = k; 
	temp->next = NULL; 
	return temp; 
} 

// funcion para crear una cola
struct Queue* createQueue() 
{ 
	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue)); 
	q->primero = q->ultimo = NULL; 
	return q; 
} 

// Agrega un elemento en la cola (encolar)
void enQueue(struct Queue* q, int k) 
{ 
	// crea un nuevo nodo
	struct QNode* temp = newNode(k); 

	// en caso de que la cola este vacía. El nuevo nodo es ultimo y primero
	if (q->ultimo == NULL) { 
		q->primero = q->ultimo = temp; 
		return; 
	} 

    // Tomamos el actual ultimo inserta el nuevo nodo al final de la cola y lo deja como ultimo
	q->ultimo->next = temp; 
	q->ultimo = temp; 
} 

// Saca un elemento de la cola (des encolar)
void deQueue(struct Queue* q) 
{ 
	// si la cola está vacía, retorna NULL
	if (q->primero == NULL) 
		return; 

    // guarda el que estaba primero y se actualiza el primero
	struct QNode* temp = q->primero; 
	q->primero = q->primero->next; 

    // si primero es nulo (el unico en la cola), el ultimo se deja nulo 
	if (q->primero == NULL) 
		q->ultimo = NULL; 

	free(temp); 
} 

// simple programa para probar las funciones
int main() 
{ 
	struct Queue* q = createQueue(); 
	enQueue(q, 10); 
	enQueue(q, 20); 
	deQueue(q); 
	deQueue(q); 
	enQueue(q, 30); 
	enQueue(q, 40); 
	enQueue(q, 50); 
	deQueue(q); 
	printf("primero en la lista: %d \n", q->primero->data); 
	printf("ultimo en la lista: %d \n", q->ultimo->data); 
	return 0; 
} 
 