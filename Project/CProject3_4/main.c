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
	
	//ʵ��3 (1)
	head=crechain(ch,strlen(ch));
	head=circulachain(head);
	//ʵ��4 (2.1)
	showxydata(head);
	//ʵ��3 (2)
	//showdata(head);
	
	//ʵ��4 (1)
//	head=dlbinsert(head,3,'2');
//	showdata(head);
	return 0;
}
//ʵ��3 (2) �������� 
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

//ʵ��3 (1) �������� 
jd *crechain(char *ch,int n)
{
	jd *head;
	jd *temp;
	int i;
	//�ж�ch�Ƿ�Ϊ�� ABC123
	if(n<=0){
		return NULL;
	}
	//��Ϊ�յ������ 
	//�Ӻ���ǰ  �������� 
	else if(n==1) {
		//�����ռ� 
		head=(jd*) malloc(sizeof(jd));
		temp=head;
		//��ֵ�洢 
		head->data=*(ch+n-1);
		head->next=NULL;
	}else{  //12
	    //�����ռ� 
		head=(jd*) malloc(sizeof(jd));
		temp=head;
		//��ֵ�洢 
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


//ʵ��4:(1)�������� ����ֵ���׵�ַhead��
jd *dlbinsert(jd *head,char x,char y){// x=3  
	int i;
	jd *temp,*newNode,*temp1;
	if(head==NULL){
		return NULL;
	}
	//�ڽ������Ϊx�Ľ����������Ϊy�Ľ��
	//A B C D E F G H 
	//0 1 2 3 4 5 6 7 
	//�Ȼ�ȡ������ڵ�
	temp=head;
	for(i=0;i<x-1;i++){
		temp=temp->next;
	} 
	//temp��ȡ��C�ĵ�ַ temp1��ȡ��D�ĵ�ַ
	temp1=temp->next;
	newNode=(jd*) malloc(sizeof(jd));
	//��ֵ�洢 
	newNode->data=y;
	newNode->next=temp1;
	temp->next=newNode;
	
	return head;
}

//ʵ��4:(2) �����������Ϊ��ѭ��������β���H���������׽��A�ĵ�ַ��
jd *circulachain(jd *head)
{
	int i;
	jd *temp,*temp1;
	temp=head;
	if(temp ==NULL){
		return NULL;
	} 
	//��ȡ����������һ���ڵ�
	while(temp!=NULL){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=head;
	return head;
}

//ʵ��4 (2.1)
void showxydata(jd *head){
	jd* temp;
	//jd* temp1; 
	if(head==NULL){
		return; 
	}
	temp=head;
	//������ֻ��һ��ʱ 
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


















