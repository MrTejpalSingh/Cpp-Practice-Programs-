#include<iostream.h>
#include<conio.h>
#define Max 5
class Queue{
	int rear,front;
	int myQueue[Max];
	public:
		Queue(){
		front = -1;
		rear = -1;
		}
		void add(int item);
		void remove();
		int isEmpty();
		void display();
};
void Queue::add(int item){
		if(rear==-1){
		front+=1;
		rear+=1;
		myQueue[rear]=item;
		clrscr();
		cout<<"\nResult:-\t\t\t\t "<<item<<" got added into the Queue!";
	}
	if(rear>=Max-1){
		clrscr();
		cout<<"\nResult:-\t\t\t\t Queue Overflow!";
	}
	else{
		clrscr();
		rear+=1;
		myQueue[rear]=item;
		cout<<"\nResult:-\t\t\t\t "<<item<<" got added into the Queue!";
	}
}
int Queue::isEmpty(){
	if(rear==-1)
		return 1;
	else
		return 0;
}
void Queue::remove(){
	int ans;
	ans = isEmpty();
	if(ans!=1){
		for(int i=0;i<rear;i++){
			if(i==0)
				ans = myQueue[i];
			myQueue[i]=myQueue[i+1];
		}
		rear-=1;
		clrscr();
		cout<<"\nResult:-\t\t\t\t "<<ans<<" has got removed!";
		front+=1;
	}
	else{
		clrscr();
		cout<<"\nResult:-\t\t\t\t Queue Underflow!";
	}
}
void Queue::display(){
	int ans;
	ans = isEmpty();
	if(ans!=1){
		clrscr();
		cout<<"\n Elements of Queue are:-\t\t\t\t ";
		for(int i=0;i<=rear;i++){
		cout<<"\n\t\t\t\t"<<i<<") "<<myQueue[i];
		}
	}
	else{
		clrscr();
		cout<<"\nResult:-\t\t\t\t Queue is Empty!";
	}

}
int main(){
	Queue qu;
	int ch;
	clrscr();
	cout<<"******************************* Welcome to Queue Operations ******************";
	do{
		cout<<"\n------------------------------------------------------------------------------";
		cout<<"\n\n1) Add\n2) Remove\n3) Display\n4) Exit\n Enter your choice here";
		cin>>ch;
		switch(ch){
			case 1:
				int item;
				cout<<"\n Enter the element u wanna add into the Queue here__";
				cin>>item;
				qu.add(item);
				break;
			case 2:
				qu.remove();
				break;
			case 3:
				qu.display();
				break;
			case 4:
				break;
			default:
				cout<<"\nResult:-\t\t\t\t Enter a Valid choice!";
				break;
		}
	}while(ch!=4);
	getch();
	return 0;
}