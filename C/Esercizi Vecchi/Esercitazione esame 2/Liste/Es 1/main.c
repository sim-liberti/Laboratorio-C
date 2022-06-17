#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
    int data;
    struct Nodo *next;
};

struct Nodo * create_node(int data){
    struct Nodo * new_node = (struct Nodo *) malloc(sizeof(struct Nodo));
    if (new_node != NULL){
        new_node -> data = data;
        new_node -> next = NULL;
    }

    return new_node;
}

int main(int argc, char **argv){
    Nodo * node;
    int node_number, input_data;
    printf("Insert node number: ");
    scanf("%d", &node_number);

    for (int i = 0; i < node_number; i++){
        printf("Insert integer data of node %d: ", i);
        scanf("%d", &input_data);
        node = create_node(input_data);
    }

    return 0;
}
