int list::AscendingSort()
{
	node* temp1 = head;
	int tempData;
	while (temp1 != NULL)
	{
		node* temp = temp1->next;
		while (temp != NULL)
		{
			if (temp1->data > temp->data)
			{
				tempData = temp1->data;
				temp1->data = temp->data;
				temp->data = tempData;
			}
			temp = temp->next;
		}
		temp1 = temp1->next;
	}
	return 1;
}

int list::DescendingSort()
{
	node* temp1 = head;
	int tempData;
	while (temp1 != NULL)
	{
		node* temp = temp1->next;
		while (temp != NULL)
		{
			if (temp1->data < temp->data)
			{
				tempData = temp1->data;
				temp1->data = temp->data;
				temp->data = tempData;
			}
			temp = temp->next;
		}
		temp1 = temp1->next;
	}
	return 1;
}