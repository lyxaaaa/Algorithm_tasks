#include <iostream>
using namespace std;

void getNext(char *t,int next[]){
	int i,j,len;
	// 初始化，表示在第一个位置之前没有字符与之匹配
	next[0] = -1;
	for(int j=1;t[j] != '\0';j++){ //依次求next[j] 
		for(int len = j-1;len>=1;len--){ //向前检查可能的相等前缀后缀
			for(int i=0;i<len;i++){ //比较t[0]-t[len-1] 和 t[j-len]-t[j-1] 
				if(t[i] != t[j-len+i]) break;
			}
			if(i == len){
				next[j] = len;
				break;
			}
		}
		if(len < 1) next[j] = 0; //无相同前缀后缀 
	}
} 

int KMP(char s[], char t[]){
	int i=0, j=0;
	int next[80];//假定子串最长为80个字符 
	getNext(t,next);
	while(s[i] != '\0' && t[j] != '\0'){
		if(s[i] == t[j]){
			i++;
			j++;
		}
		else{
			j = next[j];
			//说明此时子串开头就不匹配 
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
	if(res) cout<<"匹配成功，序列号为 "<<res<<endl;
	else cout<<"匹配失败"<<endl;
	return 0;
}
