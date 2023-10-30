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
	//初始化 
	int i;
	DataType x;
	sq* q=InitQueue();
	//实验6.2
	//--------------------------------------------------- 
	char a[]="12345678";
	int size=strlen(a);
	//移动3位 
	int k=3; 
	//先将所有人都放入队列中 
	for(i=0;i<strlen(a);i++){
		InQueue(q,a[i]);
	}
	for(i=0;i<k;i++){
		showQueue(q,&x); 
		//先放
		InQueue(q,x);
		//再删
		OutQueue(q);
	} 
	for(i=q->front;i<q->rear;i++){
		printf("%c",q->data[i]);
	}
	//--------------------------------------------------- 
	
	
	
	
	//实验6.1 
	//--------------------------------------------------- 
//	char a[]="12345678";
//	int size=strlen(a);
//	//报数为2则出列 
//	int num=2;
//	//先将所有人都放入队列中 
//	for(i=0;i<strlen(a);i++){
//		InQueue(q,a[i]);
//	}
//	//删到只剩下一个的时候就跳出 
//	while(size!=1){
//		for(i=0;i<num-1;i++){
//			//不需要删除都队头放到队尾 
//			showQueue(q,&x); 
//			//先放
//			InQueue(q,x);
//			 //再删
//			OutQueue(q);
//		} 
//		//上面for循环将不需要删除的都搞完，下一个就是要被删的
//		printf("出列:%c\n",q->data[q->front]); 
//		OutQueue(q);
//		size--;
//	} 
//	printf("出列:%c\n",q->data[q->front]); 
//--------------------------------------------------- 
	return 0;
}

//读取头元素
 int showQueue(sq* q,DataType* x)
 {
 	if(isEmpty(q)){
 		printf("队列为空");
 		*x=NULL;
		return 0;
	}else{
	 	*x=q->data[q->front];
	 	return 1;
 	}
 }
 

//出队
int OutQueue(sq* q)
{
	//判断是否为空 
	if(isEmpty(q)){
		printf("队列为空");
		return 0;
	}else{
		q->data[q->front];
		q->front=(q->front+1)%MAXSIZE;
	}
} 


//入队 1:入队成功  0:入队失败 
int InQueue(sq* q,DataType x)
{
	//入队前先判断是否满
	 if(isFull(q)){
	 	return 0;
	 }else{
	 	//调用尾部下标进行加入并且更新尾下标 
	 	 q->data[q->rear]=x;
		 q->rear=(q->rear+1)% MAXSIZE;
		 return 1;
	 }
} 




//判断是否满  我们利用队是环形数组来实现队列
//当rear+1==front 即为满 1:满  0:未满 
int isFull(sq* q)
{
	if(q&&(((q->rear+1)%MAXSIZE)==q->front)){
		return 1;
	}else{
		return 0;
	}
}




//判断队列是否为空  1:为空  0：不为空 
int isEmpty(sq* q)
{
	//保证q创建成功 并且头等于尾 
	if(q&&(q->front==q->rear)){
		return 1;
	}else{
		return 0;
	}
} 


//初始化队列 
sq* InitQueue()
{
	sq* q=(sq*)malloc(sizeof(sq));
	//判断是否创建成功 
	if(q){
		q->front=0;
		q->rear=0;
	}
	return q;
}
//实验6.1 
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	OutQueue(q);
//	for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
//		for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
//	printf("\n");
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	
//	OutQueue(q);
//	showQueue(q,&x);
//	printf("头元素:%c\n",x);
//	for(i=q->front;i<q->rear;i++){
//		printf("%c",q->data[i]);
//	}
//	OutQueue(q);
//	for(i=0;i<strlen(a);i++){
//		printf("%c",q->data[i]);
//	}
