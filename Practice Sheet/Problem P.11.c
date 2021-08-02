//P.11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char str[20];
	struct node* next;
};

struct node* insertBegin(struct node *head, char str[]){
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("Could not allocate memory!\n");
	strcpy(newnode->str, str);
	newnode->next = head;
	head = newnode;
	return head;
}

void printList(struct node *head){
	struct node *cursor = head;
	while(cursor!=NULL){
		printf("%s ", cursor->str);
		cursor = cursor->next;
	}
	printf("\n");
}

int main(){
	struct node *my_list = NULL;
	int n, i;
	char s[20];
	scanf("%d", &n);
	getchar();
	for(i=0; i<n; i++){
		fgets(s, sizeof(s), stdin);
		s[strlen(s)-1]='\0';
		my_list = insertBegin(my_list, s);
		printList(my_list);
	}
	return 0;
}
