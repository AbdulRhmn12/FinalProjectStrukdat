#include <stdio.h>
#include <iostream>
#include <conio.h>
#define MAX 8
using namespace std;

typedef struct{
		int data[MAX];
		int head;
		int tail;
}Queue;
Queue antrian;

void Create(){
   antrian.head=antrian.tail=-1;
}
Enqueue(int data)
{
    if(IsEmpty()==1)
    {
        antrian.head=antrian.tail=0;
        antrian.data[antrian.tail]=data;
        printf("%d sudah dimasukan",antrian.data[antrian.tail]);
    } else
    if(IsFull()==0)
    {
        antrian.tail++;
        antrian.data[antrian.tail]=data;	
        printf("%d sudah dimasukan",antrian.data[antrian.tail]);
    }
}
void Tampil()
{
    if(IsEmpty()==0)
    {
        for(int i=antrian.head;i<=antrian.tail;i++)
        {
            printf(" %d,",antrian.data[i]);
        }
    }else printf("data kosong!\n");
}

int top=-1, Stack[MAX];

void push(){
    if(top == MAX-1){
    	cout << ">> Stack sudah Penuh !" << endl;
    }else{
    	top++;
    	cout << ">> Masukan Data : ";
    	cin >> Stack[top];
    	cout << "\nPada Index ke '" << top << "'\n";
    	cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
    }
}
