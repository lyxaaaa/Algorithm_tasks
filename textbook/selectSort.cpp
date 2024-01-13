#include <iostream>
using namespace std;

/*
选择排序：将整个记录序列划分为有序区和无序区。
初始时有序区为空，无序区为整个数组。
在无序区查找最小的记录，将它与无序区的第一个相交换，使得有序区扩展。
直至无序区只剩一个记录。 
*/
void selectSort(int arr[], int len){
	int i,j,temp;
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		} 
	}
	//打印
	for(i=0;i<len;i++){
		cout<<arr[i]<<" ";
	} 
	cout<<endl;
}

int main(){
	int arr[] = {6,9,8,3,1,2,4,5,7};
	selectSort(arr,9);
	return 0;
}
