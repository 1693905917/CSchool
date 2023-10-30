class TNode:
        def __init__(self,sj,Lc=None,Rc=None):
           self._data=sj
           self._Lchild=Lc
           self._Rchild=Rc
        def show(self):           
           print(self._data,end=" ")
def  CreateBinTree():
    ch=eval(input("input data="))
    if ch==9:
       return  None  #读入＃时，将相应结点指针置空
    else:
       t=TNode(ch) 
       t._Lchild=CreateBinTree()
       t._Rchild=CreateBinTree()
    return t
n1=0 #总节点数
n2=0 #叶子节点总数
def previsit(t):
    global n1
    global n2
    if t==None:
          return
    n1=n1+1
    if(t._Lchild==None and t._Rchild==None):
           print(t._data)
           n2=n2+1
    previsit(t._Lchild)
    previsit(t._Rchild)
t=CreateBinTree()
previsit(t)
print("Total code=",n1,"Leaf code=",n2)
 
