#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct chain{
                   char  data;
                   struct chain *next;
           }jd;


int main(int argc, char *argv[]) {
	jd *head;
	char ch[]="ABCDEFGH";
	jd *crechain(char *ch,int n);
	void showdata(jd *head);
	jd *dlbinsert(jd *head,char x,char y);
	jd *circulachain(jd *head);
	void showxydata(jd *head);
	
	//实验3 (1)
	head=crechain(ch,strlen(ch));
	head=circulachain(head);
	//实验4 (2.1)
	showxydata(head);
	//实验3 (2)
	//showdata(head);
	
	//实验4 (1)
//	head=dlbinsert(head,3,'2');
//	showdata(head);
	return 0;
}
//实验3 (2) 遍历链表 
void showdata(jd *head)
{
	if(head==NULL){
		return; 
	}
	while(head!=NULL){
		printf("%c \t",head->data);
		head=head->next;
	}
}

//实验3 (1) 创建链表 
jd *crechain(char *ch,int n)
{
	jd *head;
	jd *temp;
	int i;
	//判断ch是否为空 ABC123
	if(n<=0){
		return NULL;
	}
	//不为空的情况： 
	//从后往前  慢慢创建 
	else if(n==1) {
		//创建空间 
		head=(jd*) malloc(sizeof(jd));
		temp=head;
		//将值存储 
		head->data=*(ch+n-1);
		head->next=NULL;
	}else{  //12
	    //创建空间 
		head=(jd*) malloc(sizeof(jd));
		temp=head;
		//将值存储 
		head->data=*(ch+n-1);
		head->next=NULL;
		
		for(i=n-2;i>=0;i--)
		{
			head=(jd*) malloc(sizeof(jd));
			head->data=*(ch+i);
			head->next=temp;
			temp=head;
		}
	}	
	return temp;
}


//实验4:(1)新增链表 返回值：首地址head。
jd *dlbinsert(jd *head,char x,char y){// x=3  
	int i;
	jd *temp,*newNode,*temp1;
	if(head==NULL){
		return NULL;
	}
	//在结点数据为x的结点后插入数据为y的结点
	//A B C D E F G H 
	//0 1 2 3 4 5 6 7 
	//先获取被插入节点
	temp=head;
	for(i=0;i<x-1;i++){
		temp=temp->next;
	} 
	//temp获取到C的地址 temp1获取到D的地址
	temp1=temp->next;
	newNode=(jd*) malloc(sizeof(jd));
	//将值存储 
	newNode->data=y;
	newNode->next=temp1;
	temp->next=newNode;
	
	return head;
}

//实验4:(2) 上述单链表改为单循环链表，即尾结点H的链域存放首结点A的地址。
jd *circulachain(jd *head)
{
	int i;
	jd *temp,*temp1;
	temp=head;
	if(temp ==NULL){
		return NULL;
	} 
	//获取到链表的最后一个节点
	while(temp!=NULL){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=head;
	return head;
}

//实验4 (2.1)
void showxydata(jd *head){
	jd* temp;
	//jd* temp1; 
	if(head==NULL){
		return; 
	}
	temp=head;
	//该链表只有一个时 
//	if(temp->next==NULL){
//		printf("%c \t",temp->data);
//		return;
//	}
	while(1){
		printf("%c \t",temp->data);
		temp=temp->next;
		if(temp==head){
			return;
		}
	}
}


















