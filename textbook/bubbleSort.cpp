#include <iostream>
using namespace std;

void bubbleSort(int arr[], int len){
	int i,j,temp;
	for(i=0;i<len;i++){
		for(j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	//¥Ú”°
	for(i=0;i<len;i++){
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
}

int main(){
	int arr[] = {6,9,8,3,1,2,4,5,7};
	bubbleSort(arr,9);
	return 0;
}
