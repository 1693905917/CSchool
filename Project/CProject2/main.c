#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student {
                          char  xh[4];    /* ����ѧ��     */
                          int   sx;       /* ������ѧ�ɼ�   */
                          int   jsj;       /* ���������ɼ� */
                          int   yy;       /* ����Ӣ��ɼ�   */
}xs;

int main(int argc, char *argv[]) {
  	//��������a����
	  xs a[5],*p;
    int i;
    float t;
    p=a;
   	for(i=0;i<4;i++)
    {
      scanf("%s%d%d%d",a[i].xh,&(a[i].sx),&(a[i].jsj),&(a[i].yy));
      //p++;
	}
	printf("ѧ��  ��ѧ ����� Ӣ�� ƽ���ɼ� \n");
	p=a;
	for(i=0;i<4;i++)
    {
      t=(a[i].sx+a[i].jsj+a[i].yy)/3.;
      printf("%s    %d    %d     %d  %.2f\n",a[i].xh,a[i].sx,a[i].jsj,a[i].yy,t);
      //p++;
  	} 
  	
	return 0;
	
	//	xs a[5],*p;
//    int i;
//    float t;
//    p=a;
//   	for(i=0;i<4;i++)
//    {
//      scanf("%s%d%d%d",p->xh,&p->sx,&p->jsj,&p->yy);
//      p++;
//	}
//	printf("ѧ��  ��ѧ ����� Ӣ�� ƽ���ɼ� \n");
//	p=a;
//	for(i=0;i<4;i++)
//    {
//      t=(p->sx+p->jsj+p->yy)/3.;
//      printf("%s    %d    %d     %d  %.2f\n",p->xh,p->sx,p->jsj,p->yy,t);
//      p++;
//  	}
}
