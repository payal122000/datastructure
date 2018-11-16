

#include <iostream>
using namespace std;
#define SIZE 10

class Queue
{
    int a[SIZE];
    int rear;   //same as tail
    int front;  //same as head

    public:
    Queue()
    {
        rear = front = -1;
    }

    //declaring enqueue, dequeue and display functions
    void enqueue(int x);
    void dequeue();
    void display();
};

// function enqueue - to add data to queue
void Queue :: enqueue(int x)
{
    if(front == -1) {
        front++;
    }
    if( rear == SIZE-1)
    {
        cout << "Queue is full";
    }
    else
    {
        a[++rear] = x;
    }
}

// function dequeue - to remove data from queue
void Queue :: dequeue()
{
	    //returning first element
	front++;
}
// function to display the queue elements
void Queue :: display()
{
    int i;
    for( i = front; i <= rear; i++)
    {
        cout << a[i] << endl;
    }
}

// the main function
int main()
{
	Queue q;
	int ch,el;
	for(int i=0;i<=50;i++){
	cout<<"\nEnter your choice:\n1. Insert Element\n2. Delete element\n";
	cin>>ch;
	if(ch==1){
		cout<<"Enter the element- ";
		cin>>el;
		q.enqueue(el);
	}else{
		q.dequeue();
	}
    q.display();
	}
    return 0;
}




