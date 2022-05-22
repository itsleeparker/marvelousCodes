using namespace std;

struct node{
	int data;
	node *next;
};

//declare all the nodes
typedef struct node NODE;			//actual node
typedef struct node* PNODE;			//Pointer to a single node
typedef struct node** PPNODE;		//Pointer to a pointer node 


void Insert(PPNODE head , int num){
	PNODE newnode = NULL;
	newnode = (PNODE)malloc(sizeof(NODE));
	newnode->next = NULL;
	newnode->data = num;

	//Insert in linked list
	if(head == NULL){
		*head = newnode;
	}else{
		newnode->next = *head;
		*head = newnode;
	}
};

void display(PNODE head){
	while(head!=NULL){
		cout << head->data<<"->\t";
		head = head->next;
	}
	cout << endl;
}

int Reverse(int num){
	int rem = 0;
	int rev = 0;
	while(num!=0){
		rem = num % 10;
		rev = rev * 10 + rem;		//0 * 10 + 1 = 1;
		num/=10;
	}
	return rev;
}

void reverse_numbers(PNODE head){
	while(head != NULL){
		head->data = Reverse(head->data);
		head = head->next;
	}
}
void Pallindrome(PNODE head){
	int rev;
	while(head !=NULL){
		rev = Reverse(head->data);
		if(rev == head->data)
			cout << head->data<<"\t";
		head = head->next;
	}

}

int Products(int num){
	int rem = 1 , product = 1;
	while(num!=0){
		rem = num % 10;
		if(rem == 0)
			rem = 1;

		product *= rem;
		num/=10;
	}
	return product;
}

void Display_Products(PNODE head){
	int product;
	while(head != NULL){
		product = Products(head->data);
		cout << product<<"\t";
		head = head->next;
	}
	cout << endl;
}

int smallest_digit(int num){
	int rem , min = 0;
	while(num != 0){
		rem = num % 10;
		if(min == 0)
			min = rem;
		min = (rem < min )?rem:min;
		num /= 10;
	}
	return min;
}

void Display_Small(PNODE head){
	int smallest;
	while(head != NULL){
		smallest = smallest_digit(head->data);
		cout << smallest << "\t";
		head = head->next;
	}
	cout << endl;
}


int Largest_digit(int num){
	int max = 0 , rem = 0;
	while(num != 0){
		rem = num % 10;
		max = (rem > max )?rem:max;
		num /= 10;
	}
	return max;
}

void Display_Large(PNODE head){
	int large_number;
	while(head != NULL){
		large_number = Largest_digit(head->data);
		cout << large_number<<"\t";
		head = head->next;
	}
}