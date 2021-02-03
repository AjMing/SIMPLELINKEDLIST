struct node
{
    int id,score;
    struct node *next;
};

typedef struct node Lnode;
Lnode insert(id,score);
void printlist(head);
void Find_avg(head);
