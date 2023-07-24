#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE* link;
};

int main()
{
	struct NODE* head_node = (struct NODE*)malloc(sizeof(struct NODE));  //머리 노드 생성
	head_node->link = NULL;

    struct NODE* node_1 = (struct NODE*)malloc(sizeof(struct NODE));     //1번째 노드 생성
	node_1->link = head_node->link;
	node_1->data = 1;
	head_node->link = node_1;

	struct NODE* node_2 = (struct NODE*)malloc(sizeof(struct NODE));     //2번째 노드 생성
	node_2->link = node_1->link;
	node_2->data = 2;
	node_1->link = node_2;

	struct NODE* node_3 = (struct NODE*)malloc(sizeof(struct NODE));     //2번째 노드 생성
	node_3->link = node_2->link;
	node_3->data = 3;
	node_2->link = node_3;

	struct NODE* curr = head_node->link;  //순회용 노드 생성
	for (int i = 0; i < 3; i++)
	{
		if (curr != NULL)
		{
			printf("%d번째 노드에 저장된 정수: %d\n", i + 1, curr->data);
			curr = curr->link;
		}
		else
		{
			break;
		}
	}

	free(head_node);
	free(node_1);
	free(node_2);
	free(node_3);

	return 0;
}