#include <iostream>
using namespace std;

/*
ѡ�����򣺽�������¼���л���Ϊ����������������
��ʼʱ������Ϊ�գ�������Ϊ�������顣
��������������С�ļ�¼���������������ĵ�һ���ཻ����ʹ����������չ��
ֱ��������ֻʣһ����¼�� 
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
	//��ӡ
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
