#include <iostream>
using namespace std;

void chicken(){
	int i, j, k, flag = 0;
	for(i=0; i<= 20; i++){
		for(j=0; j<=33; j++){
			k = 100 - i - j;
			if((k%3)==0 && (5*i+3*j+k/3 == 100)){
				cout<<"������"<<i<<"ֻ��"<<"ĸ����"<<j<<"ֻ��"<<"С����"<<k<<"ֻ��"<<endl;
				flag = 1;
			}
		}
	}
	if(!flag){
		cout<<"�����޽�"<<endl;
	}
} 

int main(){
	chicken();
	return 0;
}
