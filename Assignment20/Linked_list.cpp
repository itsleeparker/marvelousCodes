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


bool checkPerfect(int n){
	int sum = 0;
	for(int i = 1 ; i <= n/2 ; ++i){
		if(n%i == 0)
			sum += i;
	}
	if(sum == n)
		return true;

	return false;
}

void Display_Perfect(PNODE head){
	while(head != NULL){
		if(checkPerfect(head->data))
			cout << head->data<<"\t";

		head = head->next;
	}
	cout<<endl;
}

bool isPrime(int n){
	if(n == 0 || n == 1)
		return false;
	for(int i = 2; i < n/2 ; ++i){
		if(n%i == 0)
			return false;
	}
	return true;
}

void Display_Prime(PNODE head){
	while(head != NULL){

		if(isPrime(head->data))
			cout << head->data<<"\t";
		head = head->next;
	}
	cout << endl;
}


int Add_Even(PNODE head){
	int sum = 0 ;
	while(head != NULL){
		if(head->data % 2 == 0){
			sum += head->data; 
		}
		head =  head->next;
	}
	return sum;
}


int Second_Maximum(PNODE head ){
	int max = head->data;
	int max2 = 0;
	while(head!= NULL){
		if(max  < head->data){
			max2 = max;
			max = head->data;
		}
		head = head->next;
	}
	cout<<"Second Max " << max2 <<endl;	
	return max;
}


int Add_Number(int num){
	int sum = 0;
	while(num!=0){
		sum += num % 10;
		num/=10;
	}
	return sum;
}

void Display_Addition_Number(PNODE head){
	int sum  = 0, og = 0;
	while(head != NULL){

		sum = Add_Number(head->data);
		cout << sum <<"\t";
		head = head->next;
	}
	cout <<endl;
}