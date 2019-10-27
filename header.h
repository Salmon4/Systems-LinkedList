struct node { int i; struct node *next; };

void print_list(struct node * linkedList);

struct node * insert_front(struct node * linkedList, int newi);

struct node * free_list(struct node * input);

struct node * remove_node(struct node * front, int data);
