#include <iostream>
using namespace std;

//���ص��ַ���ģʽƥ���㷨����ƥ��ɹ�����������ƥ��ɹ������кţ����򷵻�0 
int BF(char s[], char t[]){
	int i=0, j=0, index=0;
	while(s[i] != '\0' && t[j] != '\0'){
		if(s[i] == t[j]){
			i++;
			j++;
		}
		else {
			index++;
			i = index;
			j = 0;
		}
	}
	
	if(t[j] == '\0'){
		cout<<"ƥ��ɹ������кţ�"<<index<<endl;
		return index;
	}
	else{
		cout<<"ƥ��ʧ��"<<endl; 
		return 0;	
	}
}

int main(){
	char s[6] = "abcad";
	char t[4] = "cad";
	BF(s,t);
	return 0;
}
