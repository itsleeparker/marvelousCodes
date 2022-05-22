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



bool findOne(PNODE head  , int num , int* count){
	*count = 0;
	while(head  != NULL){
		if(head->data == num){
			return true;
		}
		*count++;
		head = head->next;
	}
	return false;
}


int last_occurence(PNODE head , int num){
	int pos = 0 , count = 0 ;
	while(head !=NULL){
		if(head->data == num){
			pos = count;
		}
		count++;
		head = head->next;
	}
	return pos + 1;
}

int sum_of_data(PNODE head ){
	int sum = 0;
	while(head != NULL){
		sum += head->data;
		head = head->next;
	}
	return sum;
}

int Maximum(PNODE head){
	PNODE nextnode = NULL;
	int max = 0;
	while(head != NULL){
		if(head->data > max){
			max = head->data;
		}
		head = head->next;
	}

	return max;
}

int Minimum(PNODE head){
	int min = head->data;

	while(head != NULL){
		if(head->data < min)
			min = head->data;
		head = head->next;
	}
	return min;
}


bool checkPrime(int n){
	int sum = 0;
	for(int i = 1 ; i <= n/2 ; ++i){
		if(n%i == 0)
			sum += i;
	}
	if(sum == n)
		return true;

	return false;
}

void Display_Prime(PNODE head){
	while(head != NULL){
		if(checkPrime(head->data))
			cout << head->data<<"\t";

		head = head->next;
	}
	cout<<endl;
}