#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct chain{
                   char  data;
                   struct chain *next;
           }jd;


int main(int argc, char *argv[]) {
	jd *crechain(char *ch,int n);
	
	
	return 0;
}

void showdata(jd *head){
	if(head==NULL){
		return; 
	}
	while(head!=NULL){
		printf("%c \t",head->data);
		head=head->next;
	}
}


jd *crechain(char *ch,int n)
{
	jd *head;
	jd *temp;
	int i;
	//判断ch是否为空 ABC123
	if(strlen(ch)<=0){
		return NULL;
	}
	//不为空的情况： 
	//从后往前  慢慢创建 
	else if(strlen(ch)==1) {
		head=(jd*) malloc(sizeof(jd));
		head->data=*(ch+strlen(ch)-1);
		head->next=NULL;
		temp=head;
	}else{  //a b c
		for(i=strlen(ch)-2;i>=0;i--)
		{
			head->data=*(ch+i);
			head->next=temp;
			temp=head;
		}
	}	
	return temp;
}
