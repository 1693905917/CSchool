#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define  MAXSIZE   100
typedef char  DataType;
typedef  struct queue{
                       DataType   data[MAXSIZE];
                       int    front,rear;
                    }sq;
sq* InitQueue();
int isEmpty(sq* q); 
int isFull(sq* q);
int InQueue(sq* q,DataType x);
int OutQueue(sq* q); 
int showQueue(sq* q,DataType* x); 
int main(int argc, char *argv[]) {
	//��ʼ�� 
	int i;
	DataType x;
	sq* q=InitQueue();
	//ʵ��6.2
	//--------------------------------------------------- 
	char a[]="12345678";
	int size=strlen(a);
	//�ƶ�3λ 
	int k=3; 
	//�Ƚ������˶���������� 
	for(i=0;i<strlen(a);i++){
		InQueue(q,a[i]);
	}
	for(i=0;i<k;i++){
		showQueue(q,&x); 
		//�ȷ�
		InQueue(q,x);
		//��ɾ
		OutQueue(q);
	} 
	for(i=q->front;i<q->rear;i++){
		printf("%c",q->data[i]);
	}
	//--------------------------------------------------- 
	
	
	
	
	//ʵ��6.1 
	//--------------------------------------------------- 
//	char a[]="12345678";
//	int size=strlen(a);
//	//����Ϊ2����� 
//	int num=2;
//	//�Ƚ������˶���������� 
//	for(i=0;i<strlen(a);i++){
//		InQueue(q,a[i]);
//	}
//	//ɾ��ֻʣ��һ����ʱ������� 
//	while(size!=1){
//		for(i=0;i<num-1;i++){
//			//����Ҫɾ������ͷ�ŵ���β 
//			showQueue(q,&x); 
//			//�ȷ�
//			InQueue(q,x);
//			 //��ɾ
//			OutQueue(q);
//		} 
//		//����forѭ��������Ҫɾ���Ķ����꣬��һ������Ҫ��ɾ��
//		printf("����:%c\n",q->data[q->front]); 
//		OutQueue(q);
//		size--;
//	} 
//	printf("����:%c\n",q->data[q->front]); 
//--------------------------------------------------- 
	return 0;
}

//��ȡͷԪ��
 int showQueue(sq* q,DataType* x)
 {
 	if(isEmpty(q)){
 		printf("����Ϊ��");
 		*x=NULL;
		return 0;
	}else{
	 	*x=q->data[q->front];
	 	return 1;
 	}
 }
 

//����
int OutQueue(sq* q)
{
	//�ж��Ƿ�Ϊ�� 
	if(isEmpty(q)){
		printf("����Ϊ��");
		return 0;
	}else{
		q->data[q->front];
		q->front=(q->front+1)%MAXSIZE;
	}
} 


//��� 1:��ӳɹ�  0:���ʧ�� 
int InQueue(sq* q,DataType x)
{
	//���ǰ���ж��Ƿ���
	 if(isFull(q)){
	 	return 0;
	 }else{
	 	//����β���±���м��벢�Ҹ���β�±� 
	 	 q->data[q->rear]=x;
		 q->rear=(q->rear+1)% MAXSIZE;
		 return 1;
	 }
} 




//�ж��Ƿ���  �������ö��ǻ���������ʵ�ֶ���
//��rear+1==front ��Ϊ�� 1:��  0:δ�� 
int isFull(sq* q)
{
	if(q&&(((q->rear+1)%MAXSIZE)==q->front)){
		return 1;
	}else{
		return 0;
	}
}




//�ж϶����Ƿ�Ϊ��  1:Ϊ��  0����Ϊ�� 
int isEmpty(sq* q)
{
	//��֤q�����ɹ� ����ͷ����β 
	if(q&&(q->front==q->rear)){
		return 1;
	}else{
		return 0;
	}
} 


//��ʼ������ 
sq* InitQueue()
{
	sq* q=(sq*)malloc(sizeof(sq));
	//�ж��Ƿ񴴽��ɹ� 
	if(q){
		q->front=0;
		q->rear=0;
	}
	return q;
}
//ʵ��6.1 
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	OutQueue(q);
//	for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
//		for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
//	printf("\n");
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("ͷԪ��:%c\n",x);
//	for(i=q->front;i<q->rear;i++){
//		printf("%c",q->data[i]);
//	}
//	OutQueue(q);
//	for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
