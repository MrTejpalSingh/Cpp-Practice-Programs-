#include<iostream.h>
#include<conio.h>
#define Max 10

// Program for implementing stack by using Pointers

class Stack{

	int *top;
	int myStack[Max];
	public:
		Stack(){ *top = -1;}
		void push(int item);
		void pop();
		int isEmpty();
		void display();
};
void Stack::push(int item){
	if(*top>=Max-1){
		clrscr();
		cout<<"\nResult:-\t\t\t\t Stack Overflow!";
	}
	else{
		clrscr();
		*top+=1;
		myStack[*top]=item;
		cout<<"\nResult:-\t\t\t\t "<<item<<" got pushed into the stack!";
	}
}
int Stack::isEmpty(){
	if(*top==-1)
		return 1;
	else
		return 0;
}
void Stack::pop(){
	int ans;
	ans = isEmpty();
	if(ans!=1){
		clrscr();
		cout<<"\nResult:-\t\t\t\t "<<myStack[*top]<<" has got popped!";
		*top-=1;
	}
	else{
		clrscr();
		cout<<"\nResult:-\t\t\t\t Stack Underflow!";
	}
}
void Stack::display(){
	int ans;
	ans = isEmpty();
	if(ans!=1){
		clrscr();
		cout<<"\n Elements of stack are:-\t\t\t\t ";
		for(int i=*top;i>=0;i--){
		cout<<"\n\t\t\t\t"<<i<<") "<<myStack[i];
		}
	}
	else{
		clrscr();
		cout<<"\nResult:-\t\t\t\t Stack is Empty!";
	}

}
int main(){
	Stack st;
	int ch;
	clrscr();
	cout<<"*********************** Welcome to Stack Operations(Using Pointers)  **********";
	do{
		cout<<"\n1) PUSH\n2) POP\n3) DISPLAY\n4) Exit\n Enter your choice here";
		cin>>ch;
		switch(ch){
			case 1:
				int item;
				cout<<"\n Enter the element u wanna add into the stack here__";
				cin>>item;
				st.push(item);
				break;
			case 2:
				st.pop();
				break;
			case 3:
				st.display();
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
