#include <stdio.h>
#include <stdlib.h>

// Определяем структуру узла двунаправленного связного списка
struct Node {
    int data;              // Значение узла
    struct Node* next;     // Указатель на следующий узел
    struct Node* prev;     // Указатель на предыдущий узел
};

int main() 
{
    // Создаём три узла, выделяя память для каждого
    struct Node* node1 = malloc(sizeof(struct Node)); // Узел 1
    struct Node* node2 = malloc(sizeof(struct Node)); // Узел 2
    struct Node* node3 = malloc(sizeof(struct Node)); // Узел 3

    // Проверяем, удалось ли выделить память
    if (!node1 || !node2 || !node3) 
    {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    // Инициализируем значения узлов
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // Связываем узлы в прямом направлении
    node1->next = node2; 
    node2->next = node3;
    node3->next = NULL;  // Последний узел

    // Связываем узлы в обратном направлении
    node3->prev = node2; 
    node2->prev = node1;
    node1->prev = NULL;  // Первый узел

    // Прямой обход списка
    printf("Прямой обход:\n");
    for (struct Node* current = node1; current != NULL; current = current->next) 
    {
        printf("%d ", current->data);
    }

    // Обратный обход списка
    printf("\nОбратный обход:\n");
    for (struct Node* current = node3; current != NULL; current = current->prev) 
    {
        printf("%d ", current->data);
    }

    // Освобождаем память
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
