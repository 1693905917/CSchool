#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct stack{
                                char data[100];
                                int top;
}sqstk;

 /*
    ������������0����Ϊ�ײ�   ԭ������ɾ������������
    ��			��
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
	//ʵ��5 ��1.1�� 
//printf("%d\t",s.top);
//	push(&s,'A');
//	push(&s,'B');
//	push(&s,'C');
//	for(i=0;i<s.top;i++){
//		printf("PUSH:%c\t",s.data[i]);
//	}
	//ʵ��5 ��1.2�� 
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
//		printf("ʣ�ࣺ%c\t",s.data[i]);
//	}

	//ʵ��5 ��2.1����������һ���ַ����Խ����������,��д���õ���������
//	printf("�����룺");   
//	scanf("%s",s.data);
//	//printf("����:%d",strlen(s.data));   
//	for(i=0;i<strlen(s.data);i++){
//		push(&s,s.data[i]);
//	} 
//	for(i=0;i<strlen(s.data);i++){
//		c=pop(&s);
//		printf("%c\t",c);
//	} 
	//ʵ��5 ��2.2����������һ��ʮ�����������Խ�������ϵ�������
	printf("�����룺");   
	scanf("%d",&num);
	//num=atoi(s.data); 
	while(num!=0){
		time++;
		push(&s,num%2+'0');
		num=num/2;
	}
	for(i=0;i<time;i++){
		c=pop(&s);
//		printf("������:%c",c);
		x=(int)(c-'0');
		printf("������:%d",x);
	}
	
	return 0;
}




//������ջ
void  push (sqstk  * s , char  x ){
	if(isFull(s)){
		return;
	} 
	s->data[s->top]=x;
	s->top++;
}

//���ݳ�ջ 
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

//�ж��Ƿ���  ���򷵻�1  ���򷵻�0 
int isFull(sqstk  * s)
{
	if(s->top==(sizeof((s->data))/sizeof(char))){
		return 1;
	}
	return 0;
} 

//�ж��Ƿ�Ϊ��  ���򷵻�1  ���򷵻�0 
int isEmpty(sqstk  * s)
{
	if(s->top==0){
		return 1;
	}
	return  0;
} 
