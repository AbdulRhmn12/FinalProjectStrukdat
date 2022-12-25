//bagian stack
typedef struct Node *typestack;
typedef struct Node *typeq;
struct Node{
	typestack prev;
	int info;
	typestack next;
};

typeptr head, tail;
typestack top, bottom, top1, bottom1;
typeq head1, tail1;
