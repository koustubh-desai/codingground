/* queue impl using array implmentation*/

#include<stdio.h>
#include<stdlib.h>

void Print(void);
void Insert(int);

int arr[10];
/*int top=0;*/
int rear;
int length = 10;

int main(){
    rear = -1;
    Insert(5);
    Insert(4);
    Insert(32);
    Insert(12);
    Insert(9);
    Insert(11);
    Insert(7);
    Insert(15);
    Insert(2);
    Insert(8);
    Insert(1);
    
    return 0;
}

void Insert(int num){
    printf("\n Inserting %d ...",num);
    if(rear == length-1){printf("\n ERROR: QUEUE FULL!");return;}
    arr[++rear] = num; 
    Print();
    return;
    
}

void Print(){
    int i;
    printf("\n");
    for(i=0; i<=rear; i++){
        printf("\t arr[%d] => %d",i,arr[i]);
    }
    printf("\n");
}