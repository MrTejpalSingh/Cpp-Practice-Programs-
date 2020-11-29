#include<iostream.h>
#include<conio.h>
#define Max 5
class Queue{
	int top;
	int myQueue[Max];
	public:
		Queue(){ top = -1;}
		void add(int item);
		void remove();
		int isEmpty();
		void display();
};
void Queue::add(int item){
	if(top>=Max-1){
		clrscr();
		cout<<"\nResult:-\t\t\t\t Queue Overflow!";
	}
	else{
		top+=1;
		myQueue[top]=item;
		clrscr();
		cout<<"\nResult:-\t\t\t\t "<<item<<" has got Added into the Queue!";
	}
}
int Queue::isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void Queue::remove(){
	int ans;
	ans = isEmpty();
	if(ans!=1){
		clrscr();
		cout<<"\nResult:-\t\t\t\t "<<myQueue[0]<<" has got Removed from the Queue!";
		for(int i=0;i<top;i++){
			myQueue[i]=myQueue[i+1];
		}
		top-=1;
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
		cout<<"\nElements in Queue are:-\t\t\t\t ";
		for(int i=0;i<=top;i++){
			cout<<"\n\t\t\t\t "<<i<<") "<<myQueue[i];
		}
	}
	else{
		clrscr();
		cout<<"\nResult:-\t\t\t\t Queue is Empty!";
	}
}
int main(){
	Queue qu;
	int n,ch;
	clrscr();
	cout<<"*********************** Welcome to operations on Queue **********************";
	do{
		cout<<"\n-----------------------------------------------------------------------------";
		cout<<"\n\n1) Add element into the queue\n2) Remove element from the queue\n3) Display all the elements form the queue\n4) Exit\n Enter the choice here:---";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter the element u wanna add__";
				cin>>n;
				qu.add(n);
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
				clrscr();
				cout<<"\nResult:-\t\t\t\t Enter a valid choice!";
				break;
		}

	}while(ch!=4);
	getch();
	return 0;
}


