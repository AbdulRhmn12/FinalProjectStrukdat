void pushAmbilList(int *x){
	typestrack temp;
	temp = New Node();
	temp->info = *x;
	if (isAmbilEmpty()){
		temp->next = NULL;
		temp->prev = NULL;
		bottom = temp;
	}
	else{
		temp->prev = NULL;
		temp->next = top1;
		top1->prev = temp;
	}
	top1 = temp;
}
