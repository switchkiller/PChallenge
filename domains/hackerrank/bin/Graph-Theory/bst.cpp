#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define MAXV //
using namespace std;

struct queue{
  int info;
  struct node* link;
}*front=NULL,*rear=NULL;

void enqueue(int item){
  struct queue* temp;
  tmp = (struct queue*) malloc(sizeof(struct queue));
  if (temp == NULL){
    printf("Insufficient memory");
    return;
  }
  temp->info=item;
  temp->link=NULL;
  if (front==NULL)
    front=temp;
  else
    rear->link=temp;
  rear=temp;
}

int dequeue(){
  struct queue *temp;
  //temp = (struct queue*) malloc(sizeof(struct queue));
  if (isEmpty())
  {
    printf("Queue Underflow\n");
    exit(1);
  }
  tmp=front;
  item=tmp->info;
  front=front->link; //rear
  free(temp);
  return item;
}

int isEmpty(){
  if (front == NULL)
    return 1;
  else
    return 0;
}

struct edgenode{
  int y;
  struct edgenode* next;
}

struct graph{
  edgenode* edges[MAXV+1];
  int degree[MAXV+1];
  int nvertices;
  int nedges;
  bool directed;

}

void initiaze_graph(graph *g, bool directed){
  int i;
  g->nvertices = 0;
  g->edges = 0;
  g->directed = directed;

  for ( i=0; i <= MAXV; i++ ) g->degree[i] = 0;
  for ( i=0; i <= MAXV; i++ ) g->edges[i] = NULL;

}

void read_graph( graph* g, bool directed ){

  int i;
  int m;
  int x,y;

  initiaze_graph(g,directed);

  scanf("%d%d",&nvertices,&m);
  for( i = 0; i <=m ; i++ ){
    scanf("%d%d",&x,&y );
    insert_edge(g,x,y,directed);
  }
}

void insert_edge(graph* g, int x , int y , bool directed){
  edgenode* p;
  p = (struct edgenode*) malloc(sizeof(struct edgenode));
  p->y = y;
  p->next = g->edges[x];
  g->edges[x] = p;

}


void main(){

}
