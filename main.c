int main(int argc, char **argv){
Lnode head;
int i,id,score;
argv++;
while(*argv){
   id=atoi(*argv);
   if(id!=0 && *(argv+1) {
   score=atoi(*(argv+1));
  insert(&head,id,score);
  argv+=2;
}
}
   printlist(head);
   Find_avg(head);
   return 0;
}
