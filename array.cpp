#include <iostream>
using namespace std;

int insertiondeletion(){
	int arr[100],element,size,i,pos;
		cout<<"Enter the size of array - ";
		cin>>size;

		cout<<"\nEnter the elements - ";
		for(i=0; i<size; i++){
			cin>>arr[i];
		}
		cout<<"\nYour entered ARRAY is - ";
		for(i=0; i<size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\nEnter the position of new Element - ";
		cin>>pos;
		pos = pos-1;
		cout<<"\nEnter the Element - ";
		cin>>element;
		for(i=size; i>pos; i--){
			arr[i]=arr[i-1];
		}
		arr[pos]=element;
		cout<<"\nFinal ARRAY is - ";
		for(i=0; i<=size; i++){
			cout<<arr[i]<<" ";
		}


		cout<<"\nEnter the position of value you want to delete - ";
		cin>>pos;
		pos=pos-1;
		for(i=pos;i<=size;i++){
			arr[i]=arr[i+1];
		}
		cout<<"\nARRAY after deletion is - ";
		for(i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		return 0;
}
int main() {
	insertiondeletion();
}
