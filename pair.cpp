#include <iostream>
 
//栈大小 
#define stackSize 10000
 
using namespace std;
 
// 判断输入字符是否为左括号 
bool isLeft(char c);
// 判断输入字符是否为右括号 
bool isRight(char c);
// 获取右括号对应的左括号 
char getSignal(char c);
// 判断是否匹配 
bool judge(char* statement);
 
int main(){
	char statement[stackSize];
	
	while(cin>>statement){
		// 空行退出
		if(statement[0] == '\0')break;
		
		if(judge(statement)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	
	return 0;
}
 
bool judge(char* statement){
	char stack[stackSize];// 栈大小 
	
	int top = 0;// 栈顶 
	
	for(int i=0;statement[i]!='\0';i++){
		if( isLeft(statement[i]) ){
			
			// 栈溢出 
			if(top==stackSize-1) return false;
			// 入栈 
			stack[top++]= statement[i];
			
		} else if( isRight(statement[i]) ){
			
			// 当前右括号对应的左括号 
			char signal = getSignal(statement[i]);
			
			// 栈越界
			if(top==0) return false; 
			// 左右匹配成功，出栈
			else if(stack[top-1] == signal) top-- ;
			// 匹配错误 
			else return false;
		}
	}
	
	// 循环结束，栈已空，匹配成功
	if(top==0) return true;
	// 循环结束，栈非空，匹配失败
	return false;
}
 
bool isLeft(char c){
	return c=='(' || c=='[' || c=='{';
}
 
bool isRight(char c){
	return c==')' || c==']' || c=='}';
}
 
char getSignal(char c){
	switch(c){
		case ')':return '(';
		case ']':return '[';
		case '}':return '{';
	}
}
