#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct stack{
                                char data[100];
                                int top;
}sqstk;

 /*
    声明：数组以0索引为底部   原因：数组删除最顶层性能最高
    低			顶
    0	1	2	 3
    */
void  push (sqstk  * s , char  x );
char  pop (sqstk  *s );
int isFull(sqstk  * s);
int isEmpty(sqstk  * s);

	
int main(int argc, char *argv[]) {
	sqstk  s;
	int i,num,time=0,x;
	//char a[]="12";
	char c;
	//*s->data;
	s.top=0;
	//实验5 （1.1） 
//printf("%d\t",s.top);
//	push(&s,'A');
//	push(&s,'B');
//	push(&s,'C');
//	for(i=0;i<s.top;i++){
//		printf("PUSH:%c\t",s.data[i]);
//	}
	//实验5 （1.2） 
//	printf("\n");
//    //printf("%d\t",s.top); 
//	c=pop(&s);
//	printf("POP:%c\t",c);
//	c=pop(&s);
//	printf("POP:%c\t",c);
//	c=pop(&s);
//	printf("POP:%c\t",c);
//	printf("\n");
//	printf("---------\n");
//	for(i=0;i<s.top;i++){
//		printf("剩余：%c\t",s.data[i]);
//	}

	//实验5 （2.1）任意输入一串字符，试将其逆序输出,编写调用的主函数。
//	printf("请输入：");   
//	scanf("%s",s.data);
//	//printf("多少:%d",strlen(s.data));   
//	for(i=0;i<strlen(s.data);i++){
//		push(&s,s.data[i]);
//	} 
//	for(i=0;i<strlen(s.data);i++){
//		c=pop(&s);
//		printf("%c\t",c);
//	} 
	//实验5 （2.2）任意输入一个十进制整数，试将二进制系数输出。
	printf("请输入：");   
	scanf("%d",&num);
	//num=atoi(s.data); 
	while(num!=0){
		time++;
		push(&s,num%2+'0');
		num=num/2;
	}
	for(i=0;i<time;i++){
		c=pop(&s);
//		printf("二进制:%c",c);
		x=(int)(c-'0');
		printf("二进制:%d",x);
	}
	
	return 0;
}




//数据入栈
void  push (sqstk  * s , char  x ){
	if(isFull(s)){
		return;
	} 
	s->data[s->top]=x;
	s->top++;
}

//数据出栈 
char  pop (sqstk  *s )
{
	char c;
	if(isEmpty(s)){
		return '0';
	}
	c= s->data[s->top-1];
	s->top--;
	return c;
}

//判断是否满  满则返回1  反则返回0 
int isFull(sqstk  * s)
{
	if(s->top==(sizeof((s->data))/sizeof(char))){
		return 1;
	}
	return 0;
} 

//判断是否为空  空则返回1  反则返回0 
int isEmpty(sqstk  * s)
{
	if(s->top==0){
		return 1;
	}
	return  0;
} 
