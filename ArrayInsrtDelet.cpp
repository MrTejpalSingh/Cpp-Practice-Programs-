#include<iostream>
#include<conio.h>
using namespace std;

int main(){
		int n,pos,item;
		cout<<"Enter the size of the array";
		cin>>n;
		int arr[n];
		cout<<"Enter "<<n<<" elements into the array: ";
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}
		
// for deletion
		cout<<endl<<"Enter the postion of element to be deleted: ";
		cin>>pos;
		if(pos>=0 && pos<=n-1){
			int p = arr[pos];
			cout<<endl<<"Array elements before deletion of "<<p<<": ";
			for(int i=0;i<=n-1;i++){
				cout<<arr[i]<<" ";
			}	
			for(int i=pos;i<=n-2;i++){
				arr[i]=arr[i+1];
			}
			cout<<endl<<"Array elements After deletion of "<<p<<": ";
			for(int i=0;i<=n-2;i++){
				cout<<arr[i]<<" ";
			}	
		}
		else{
			cout<<endl<<"Failed!";
			cout<<endl<<pos<<" is not a valid position";
		}

// for insertion
		cout<<endl<<"Enter the element to be Added: ";
		cin>>item;
		cout<<endl<<"Enter the postion of element to be Added : ";
		cin>>pos;
		if(pos>=0 && pos<=n-1){
			int p = arr[pos];
			cout<<endl<<"Array elements before Adding of "<<item<<": ";
			for(int i=0;i<=n-1;i++){
				cout<<arr[i]<<" ";
			}	
			for(int i=;i>=pos-1;i--){
				arr[i]=arr[i-1];
			}
			arr[pos]=item;
			cout<<endl<<"Array elements After deletion of "<<item<<": ";
			for(int i=0;i<=n-1;i++){
				cout<<arr[i]<<" ";
			}	
		}
		else{
			cout<<endl<<"Failed!";
			cout<<endl<<pos<<" is not a valid position";
		}
}
