

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
NodePtr new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
  new_node->data=x;
  new_node->nextPtr=NULL;

  if(q->size==0)//Node แรก
  q->headPtr=new_node;
  else
  q->tailPtr->nextPtr=new_node;

  q->tailPtr=new_node;
  q->size++;

  /*Finish enqueue */
 }


}


int dequeue_struct(Queue *q){
  if(q->size>0){
  NodePtr t=q->headPtr;
  int value= t->data;
  q->headPtr=t->nextPtr;
    if(q->size==1)//ขยับtailกรณีโหนดสุดท้าย
  q->tailPtr=NULL;

       /*Finish dequeue */
  free(t);
  q->size--;
  return value;
  }
  
  printf("Empty queue\n");
  return 0;
}

