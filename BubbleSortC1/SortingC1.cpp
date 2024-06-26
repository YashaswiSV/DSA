#include <iostream>
using namespace std;
//===============================SORTING======================================
//============================Bubble sort==========================

void bubble_sort(int a[],int size){ //5
	int temp;
	for(int i=0;i<size-1;i++){     //passes 0,1,2,3
		for(int j=0;j<size-1-i;j++)// j=0,1,2,3
		if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	
}
void print(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int arr[5]={17,14,3,21,6};
	bubble_sort(arr,5);
	print(arr,5);
	
}




