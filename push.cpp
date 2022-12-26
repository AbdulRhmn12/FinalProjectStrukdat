void push(int IB){
	typestack temp;
	temp = New Node();
	temp->info = IB;
	if (isBajuEmpty()){
		temp->next = NULL;
		temp->prev = NULL;
		bottom = temp;
	}
	else{
		temp->prev = NULL;
		temp->next = top;
		top->prev = temp;
	}
	top = temp;
}
