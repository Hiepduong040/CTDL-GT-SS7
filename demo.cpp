#include<stdio.h>
#include<stdlib.h>

#define MAX 5 

typedef struct Queue{
	int array[MAX];
	int front;
	int rear; 
}; 

// khoi tao hang doi
void initalQueue(Queue* queue){
	queue-> front = -1;
	queue-> rear = -1; 
	
} 

// kiem tra hang doi trong
int isEmpty(Queue* queue){
	if(queue->front==-1){
		return 1 ;
	} 
	return 0; 
} 

// kiem tra hang doi day
int isFull(Queue* queue){
	if(queue->rear == MAX - 1){
		return 1; 
	} 
	return 0; 
} 

// Enqueue (them 1 phan tu vao cuoi hang doi)
void enqueue(Queue* queue, int value){
	if(isFull(queue) == 1){
		printf("xin loi, het slot roi");
		return; 
	}
	if(isEmpty(queue) == 1){
		queue -> front = 0; 
	} 
	queue -> rear ++;
	queue-> array[queue->rear] = value; 
	
} 

// Dequeue ( xoa 1 phan tu dau hang doi)
void dequeue(Queue* ) 

// display queue
void displayQueue(Queue* queue){
	for(int i = queue->front; i <= queue -> rear; i++){
		printf("%d\t", queue->array[i]); 
	} 
	printf("\n"); 
} 



int main(){
	Queue queue;
	initalQueue(&queue);
	int value;
	do{
		printf("=================================MENU=====================================\n");
		printf("0. Thoat.\n");
		printf("1. Them 1 phan tu vao cuoi hang doi\n");
		printf("2. In danh sach phan tu co trong mang\n"); 
		printf("Moi lua chon 0-2\n");
	 	int choice;
		scanf("%d", &choice);
		switch(choice){
			case 0: 
				exit(0);
			case 1:
				printf("Moi ban nhap vao gia tri ");
				scanf("%d", &value); 
				enqueue(&queue, value); 
				break; 
			case 2:
				displayQueue(&queue) ;
				break; 
			case 3:
				printf("Moi nhap vao gia tri"):
				scanf("%d", &value); 
				dequeue(&queue,value); 
			default:
				printf("Lua chon sai roi"); 
		} 
		
	}while(1 == 1) ;
	return 0; 
} 
