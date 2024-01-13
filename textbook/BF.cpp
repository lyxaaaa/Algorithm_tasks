#include <iostream>
using namespace std;

//朴素的字符串模式匹配算法：若匹配成功，返回主串匹配成功的序列号；否则返回0 
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
		cout<<"匹配成功，序列号："<<index<<endl;
		return index;
	}
	else{
		cout<<"匹配失败"<<endl; 
		return 0;	
	}
}

int main(){
	char s[6] = "abcad";
	char t[4] = "cad";
	BF(s,t);
	return 0;
}
