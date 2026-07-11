#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

struct Node *start = NULL;
struct Node *end = NULL;

void insertEnd()
{
	int el;
	struct Node *p, *t;

	p = (struct Node *)malloc(sizeof(struct Node));
	if (p == NULL)
	{
		printf("Insufficient Memory!");
		return;
	}
	else
	{
		printf("Enter Data: ");
		scanf("%d", &el);
		p->data = el;
		p->next = NULL;

		if (start == NULL)
		{
			start = p;
			p = NULL;
			free(p);
		}
		else
		{
			t = start;
			while (t->next != NULL)
			{
				t = t->next;
				end = t;
			}
			t->next = p;
		}
		t = NULL;
		p = NULL;
		free(t);
		free(p);
	}
}
void insertStart()
{
	int el;
	struct Node *p;
	p = (struct Node *)malloc(sizeof(struct Node));
	if (p == NULL)
	{
		printf("Insufficient Memory!");
		return;
	}
	else
	{
		printf("Enter Data: ");
		scanf("%d", &el);
		p->data = el;
		p->next = start;
		start = p;
		p = NULL;
		free(p);
	}
}
void display()
{
	struct Node *t;
	int N = 0;
	printf("\nAddress of start = %u  Address  in Start = %u", &start, start);
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	else
	{
		t = start;
		while (t != NULL)
		{
			N++;
			printf("\nNODE NUMBER=%d\nData Part Adress=%u Data= %d  Link Part Adress=%u Link=%u", N, &t->data, t->data, &t->next, t->next);
			t = t->next;
		}
	}
}
int count()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	int count = 0;
	struct Node *t;
	t = start;
	while (t != NULL)
	{
		count++;
		t = t->next;
	}
	printf("\nTotal Number of Nodes = %d", count);
	return count;
}
void update()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int el, index;
	int count = 0;
	printf("\nEnter Node Number to Modify: ");
	scanf("%d", &index);
	printf("Enter Data: ");
	scanf("%d", &el);
	while (t != NULL)
	{
		count++;
		if (count == index)
		{
			t->data = el;
		}
		t = t->next;
	}
}
void findMax()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int max = t->data;
	while (t != NULL)
	{
		if (t->data > max)
		{
			max = t->data;
		}
		t = t->next;
	}
	printf("\nMaximum Element is: %d", max);
}
void findMin()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int min = t->data;
	while (t != NULL)
	{
		if (t->data < min)
		{
			min = t->data;
		}
		t = t->next;
	}
	printf("\nMinimum Element is: %d", min);
}
void findSum()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int sum = 0;
	while (t != NULL)
	{
		sum = sum + t->data;
		t = t->next;
	}
	printf("\nSum of Elements: %d", sum);
}
void findAvg()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int sum = 0;
	int count = 0;
	while (t != NULL)
	{
		sum = sum + t->data;
		t = t->next;
		count++;
	}
	printf("\nAverage of Elements: %.2f", sum / count);
}
void del()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
		return;
	}
	struct Node *t;
	t = start;
	int el, index;
	int count = 0;
	printf("\nEnter Node Number to Delete: ");
	scanf("%d", &index);
	int x = count();
	if (index > x)
	{
		printf("Node Number Out of Bound!");
		return;
	}
	while (t != NULL)
	{
		count++;
		if (count == index - 1)
		{
			el = t->next->data;
			t->next = t->next->next;
		}
		t = t->next;
	}
	printf("%d was Deleted!", el);
}
void search()
{
	if (start == NULL)
	{
		printf("\nLinked List is Empty!");
	}
	struct Node *t;
	t = start;
	int el;
	int index = 0;
	printf("\nEnter Element to Search: ");
	scanf("%d", &el);
	while (t != NULL)
	{
		index++;
		if (t->data == el)
		{
			printf("\nElement (%d) Found in Node Number: %d", el, index);
			break;
		}
	}
	printf("\nSearching Failed! Element NOT Found!");
}

int main()
{
	int choice;
	while (1)
	{
		printf("\n**MENU**\n");
		printf("\n1. Insert From End");
		printf("\n2. Insert From Start");
		printf("\n3. Display");
		printf("\n4. Count");
		printf("\n5. Update");
		printf("\n6. Find Maximum Element");
		printf("\n7. Find Minimum Element");
		printf("\n8. Find Sum");
		printf("\n9. Find Average");
		printf("\n10. Delete Node");
		printf("\n11. Search Element");

		printf("\n12. Exit");
		printf("\nEnter Choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			insertEnd();
			break;
		case 2:
			insertStart();
			break;
		case 3:
			display();
			break;
		case 4:
			del();
			break;
		case 5:
			update();
			break;
		case 6:
			findMax();
			break;
		case 7:
			findMin();
			break;
		case 8:
			findSum();
			break;
		case 9:
			findAvg();
			break;
		case 10:
			del();
			break;
		case 11:
			search();
			break;
		case 12:
			return;
		default:
			printf("\nEnter Valid Choice!");
			break;
		}
	}
}
