#include <iostream>
using namespace std;

void getNext(char *t,int next[]){
	int i,j,len;
	// ��ʼ������ʾ�ڵ�һ��λ��֮ǰû���ַ���֮ƥ��
	next[0] = -1;
	for(int j=1;t[j] != '\0';j++){ //������next[j] 
		for(int len = j-1;len>=1;len--){ //��ǰ�����ܵ����ǰ׺��׺
			for(int i=0;i<len;i++){ //�Ƚ�t[0]-t[len-1] �� t[j-len]-t[j-1] 
				if(t[i] != t[j-len+i]) break;
			}
			if(i == len){
				next[j] = len;
				break;
			}
		}
		if(len < 1) next[j] = 0; //����ͬǰ׺��׺ 
	}
} 

int KMP(char s[], char t[]){
	int i=0, j=0;
	int next[80];//�ٶ��Ӵ��Ϊ80���ַ� 
	getNext(t,next);
	while(s[i] != '\0' && t[j] != '\0'){
		if(s[i] == t[j]){
			i++;
			j++;
		}
		else{
			j = next[j];
			//˵����ʱ�Ӵ���ͷ�Ͳ�ƥ�� 
			if(j == -1) {
				i++;
				j++;
			}
		}
	}
	if(t[j] == '\0') return (i-j+1);
	else return 0;
}

int main(){
	char s[7] = "ababcd";
	char t[4] = "abc";
	int res = KMP(s,t);
	if(res) cout<<"ƥ��ɹ������к�Ϊ "<<res<<endl;
	else cout<<"ƥ��ʧ��"<<endl;
	return 0;
}
