typedef struct node {
		   char data;
		   struct node *next;
		    }jd;
#include "stdlib.h"
#include "stdio.h"
main()
{
   char b[]="ABCDEFGH";
    jd *preinsert(jd *head,char x,char y);
   jd *jldlb(char *a,int n);
   void showdata(jd *head);
   jd *delenode(jd *head,char x);
   jd *head;
   head=jldlb(b,8);
   showdata(head);
   head=delenode(head,'Y');
   showdata(head);
}
jd *jldlb(char *a,int n)
 {
    jd *p,*q=NULL;
    int i;
    for(i=n-1;i>=0;i--)
     {
	p=(jd *)malloc(sizeof(jd));
	p->data=a[i];
	p->next=q;
	q=p;
     }
   return p;
 }
 void showdata(jd *head)
 {
   jd *p;
   p=head;
   printf("\n");
   while(p!=NULL)
     {
       printf("%c     ",p->data);
       p=p->next;
     }
 }
 jd *preinsert(jd *head,char x,char y)
 {
    jd *p,*q,*t;
    p=head,q=p->next;
    if(p->data==x)
      {
	t=(jd *)malloc(sizeof(jd));
	t->data=y;
	t->next=head;
	return t;/*address of firstnode of new singlechain */
      }
    while(q->data!=x)
       { p=q;
       q=q->next;
       }
      	t=(jd *)malloc(sizeof(jd));
	t->data=y;
	p->next=t;
	t->next=q;
      return head;
 }
 jd *delenode(jd *head,char x)
   {
     jd *p,*q;
     p=head,q=p->next;
     if(p->data==x)
       {
	  free(p);
	  return q;
       }
       while(q!=NULL&&q->data!=x)
       {
	  p=q;
	  q=q->next;
       }
       if(q!=NULL)
       {p->next=q->next;
	free(q);
       }
       return head;
   }

