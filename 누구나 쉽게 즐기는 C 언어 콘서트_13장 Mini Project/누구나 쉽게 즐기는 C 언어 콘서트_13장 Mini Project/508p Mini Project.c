#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE* link;
};

int main()
{
	struct NODE* head_node = (struct NODE*)malloc(sizeof(struct NODE));  //�Ӹ� ��� ����
	head_node->link = NULL;

    struct NODE* node_1 = (struct NODE*)malloc(sizeof(struct NODE));     //1��° ��� ����
	node_1->link = head_node->link;
	node_1->data = 1;
	head_node->link = node_1;

	struct NODE* node_2 = (struct NODE*)malloc(sizeof(struct NODE));     //2��° ��� ����
	node_2->link = node_1->link;
	node_2->data = 2;
	node_1->link = node_2;

	struct NODE* node_3 = (struct NODE*)malloc(sizeof(struct NODE));     //2��° ��� ����
	node_3->link = node_2->link;
	node_3->data = 3;
	node_2->link = node_3;

	struct NODE* curr = head_node->link;  //��ȸ�� ��� ����
	for (int i = 0; i < 3; i++)
	{
		if (curr != NULL)
		{
			printf("%d��° ��忡 ����� ����: %d\n", i + 1, curr->data);
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