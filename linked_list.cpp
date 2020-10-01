#include<iostream>
#include<malloc.h>
//#include"conio2.h"
//#include<conio.h>
#include<string.h>

using namespace std;

void cs()
{
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}
struct node
{
  int id,date,year;
  char name[10];
  char father[10], mother[10], rank[5],dept[5], month[8],house_no[5], street[7],city[7], state[7],country[8];
  long int pin;
  struct node *next;
};
struct node *start, *temp, *head, *tail;
void add(){
	char choice='y';
	head=NULL;
	while(choice=='y'){
	start = (struct node *) malloc (sizeof (struct node));
	cout << "Enter  employee id ="<<endl;
    cin >>start->id;
    cout << "Enter  name ="<<endl;
    cin >>start->name;
	cout<<"Father`s name ="<<endl;cin>>start->father;
	cout<<"Mother`s name ="<<endl;cin>>start->mother;
	cout<<"Rank="<<endl; cin>>start->rank;
	cout<<"Department="<<endl; cin>>start->dept;
	cout<<"Date Of Joining:"<<endl;
	cout<<"Date(dd)=";cin>>start->date;    cout<<"Month(mm)=";cin>>start->month;   cout<<"Year(yyyy)=";cin>>start->year;
	cout<<"Address:"<<endl;
	cout<<"House No=";cin>>start->house_no;    cout<<"Street=";cin>>start->street;   cout<<"City=";cin>>start->city;
	cout<<"State=";cin>>start->state;   cout<<"Country=";cin>>start->country;     cout<<"Pin=";cin>>start->pin;

    if (head==NULL){
        	head=temp=start;
        	//hd=head->data;

		}
		else{
			start->next=NULL;
			temp->next = start;
            temp = temp->next;
            tail=temp;
		}
		cout<<"Do you want to enter more nodes?(y/n) "<<endl;
		cin>>choice;
	}


}
void delete_end(){
	temp = head;
    while(temp->next->next!=NULL){
       temp = temp->next;
    }
    temp->next = NULL;

}
void display(){
	temp=head;
	cout << "\n\nList elements are - \n";
    while (temp != NULL)
	{
	  cout << temp->id <<"                      "<<temp->name<< endl;
	  temp = temp->next;
	}
}
void delete_pos(){
	  int id ;
	if (head==NULL){
		cout<<"Please enter details of an employee"<<endl;
	}
	else{
      cout << "Enter employee id :" << endl;
      cin >> id;
      temp=head;
      if(id==head->id){
      	head=head->next;
	  }
	  else if (id==tail->id){
	  	delete_end();
	  }
	  else{
	  	while(temp!=NULL&& id!=temp->id){
	  		temp=temp->next;
		  }
		  temp->next = temp->next->next;
	  }
}
}
void find(){
	int id;
	cout<<"Enter Employee id to find the details"<<endl;
	cin>>id;
	temp=head;
	if (head==NULL){
			cout<<"Please enter details of an employee"<<endl;
	}
	else{
		while(id!=temp->id && temp!=NULL){
			temp=temp->next;
		}
		cout<<"Details of Employee having employee id "<<id<< " are: "<<endl;
		cout << "Employee  name =  "<<temp->name<<endl;
		cout<<"Father`s name =  "<<temp->father<<endl;
		cout<<"Mother`s name =  "<<temp->mother<<endl;
		cout<<"Rank= "<<temp->rank<<endl;
		cout<<"Department= "<<temp->dept<<endl;
		cout<<"Date Of Joining:"<<endl;
		cout<<"Date(dd)= "<<temp->date;    cout<<"  Month(mm)= "<<temp->month;   cout<<"   Year(yyyy)=  "<<temp->year<<endl;
		cout<<"Address:"<<endl;
		cout<<"House No=  "<<temp->house_no;    cout<<"   Street= "<<temp->street;   cout<<"   City= "<<temp->city<<endl;
		cout<<"State= "<<temp->state;   cout<<"   Country=  "<<temp->country;     cout<<"   Pin=  "<<temp->pin;
	}
}
void find_country(){
	string c;
	cout<<"Enter country name to find the details"<<endl;
	cin>>c;
	temp=head;
	while(temp!=NULL){
		if (c==temp->country){
			cout<<"Name: "<<temp->name<<"        ID: "<<temp->id<<endl;
			temp=temp->next;
		}

		temp=temp->next;
	}
	if(temp==NULL){
			cout<<"-------------------------------------------------"<<endl;
		}
}
void find_state(){
	string c;
	cout<<"Enter state name to find the details"<<endl;
	cin>>c;
	temp=head;
	while(temp!=NULL){
		if (c==temp->state){
			cout<<"Name: "<<temp->name<<"        ID: "<<temp->id;
			temp=temp->next;
		}

		temp=temp->next;
	}
	if(temp==NULL){
			cout<<"-------------------------------------------------"<<endl;
		}
}
void find_city(){
	string c;
	cout<<"Enter city's' name to find the details"<<endl;
	cin>>c;
	temp=head;

	while(temp!=NULL){
		if (c==temp->city){
			cout<<"Name: "<<temp->name<<"        ID: "<<temp->id;
			temp=temp->next;
		}
		temp=temp->next;
	}
	if(temp==NULL){
			cout<<"-------------------------------------------------"<<endl;
		}
}
void update(){
	int id;
	cout<<"Enter employee id to update"<<endl;
	cin>>id;
	temp=head;
	if (temp==NULL){
		cout<<"Please enter details of an employee"<<endl;
	}
	else{
		while(temp!=NULL && temp->id!=id){
			temp=temp->next;
		}
	cout << "Enter name" << endl;
    cin >> temp->name;
	cout<<"Father`s name ="<<endl;cin>>temp->father;
	cout<<"Mother`s name ="<<endl;cin>>temp->mother;
	cout<<"Rank="<<endl; cin>>temp->rank;
	cout<<"Department="<<endl; cin>>temp->dept;
	cout<<"Date Of Joining:"<<endl;
	cout<<"Date(dd)=";cin>>temp->date;    cout<<"Month(mm)=";cin>>temp->month;   cout<<"Year(yyyy)=";cin>>temp->year;
	cout<<"Address:"<<endl;
	cout<<"House No=";cin>>temp->house_no;    cout<<"Street=";cin>>temp->street;   cout<<"City=";cin>>temp->city;
	cout<<"State=";cin>>temp->state;   cout<<"Country=";cin>>temp->country;     cout<<"Pin=";cin>>temp->pin;

	}
}
void insertpos(){
	int id, number;
	struct node *newNode;
	cout << "Enter id after which a new employee is to be inserted:" << endl;
    cin >> id;
	if (head==NULL){
		cout<<"Invalid entry"<<endl;
	}
	else{
	  newNode = (struct node *) malloc (sizeof (struct node));
      cout << "Enter id to insert" << endl;
      cin >> newNode->id;
      cout << "Enter name" << endl;
      cin >> newNode->name;
	cout<<"Father`s name ="<<endl;cin>>newNode->father;
	cout<<"Mother`s name ="<<endl;cin>>newNode->mother;
	cout<<"Rank="<<endl; cin>>newNode->rank;
	cout<<"Department="<<endl; cin>>newNode->dept;
	cout<<"Date Of Joining:"<<endl;
	cout<<"Date(dd)=";cin>>newNode->date;    cout<<"Month(mm)=";cin>>newNode->month;   cout<<"Year(yyyy)=";cin>>newNode->year;
	cout<<"Address:"<<endl;
	cout<<"House No=";cin>>newNode->house_no;    cout<<"Street=";cin>>newNode->street;   cout<<"City=";cin>>newNode->city;
	cout<<"State=";cin>>newNode->state;   cout<<"Country=";cin>>newNode->country;     cout<<"Pin=";cin>>newNode->pin;
      temp = head;
      if (id==head->id){
      	newNode->next = head;
        head = newNode;
	  }
	  else if (id==tail->id){
	  	tail->next=newNode;
	  	newNode->next = NULL;
	  	tail=newNode;
	  	tail->next=NULL;
	  }
	  else{
	  	while(temp!=NULL && temp->id!=id){
	  		temp=temp->next;
		  }
		  newNode->next = temp->next;
          temp->next = newNode;
	  }
}
}
int main(){
menu:
    int a;
	cout <<"                               Employee  Database"<<endl<<endl;
	cout<<"1. Add employee "<<endl;
	cout<<"2. Delete Employee "<<endl;
	cout<<"3. Insert Employee"<<endl;
	cout<<"4. Find Employee"<<endl;
	cout<<"5. Update Employee"<<endl;
	cout<<"6. Display List of employees from a country "<<endl;
	cout<<"7. Display List of employees from a state"<<endl;
	cout<<"8. Display List of employees from a city "<<endl;
	cout<<"9. Display list of employees "<<endl;
	cout<<"10.Exit"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>a;

switch(a){
	case 1:
	    cs();
    	add();
    	goto menu;
    	break;
    case 2:
    	cs();
		delete_pos();
		goto menu;
		break;
    case 3:
        cs();
    	insertpos();
    	goto menu;
    	break;
    case 4:
	    system("cls");
		find();
		goto menu;
		break;
	case 5:
	    system("cls");
		update();
		goto menu;
		break;
	case 6:
        system("cls");
	    find_country();
	    goto menu;
	    break;
	case 7:
        system("cls");
	    find_state();
	    goto menu;
	    break;
	case 8:
        system("cls");
	    find_city();
	    goto menu;
	    break;
	case 9:
        system("cls");
	    display();
	    goto menu;
	    break;
	case 10:
		system ("cls");
		cout<<"              Thank You "<<endl;
	    exit(0);
		getchar();
}
}

/*
int main ()
{
  struct node *start, *temp, *head;
  int n, i, rno;
  //char *name;
  cout << "Enter number of nodes=";
  cin >> n;
  cout << "Enter the data ="<<endl;
  cin >> rno;
//      cin>>name;
  start = (struct node *) malloc (sizeof (struct node));
  start->next = NULL;
  start->data = rno;
//      start->student_name=name;
  temp = start;
  head = start;

  for (i = 1; i < n; i++)
    {
      cin >> rno;
      // cin>>name;
      start = (struct node *) malloc (sizeof (struct node));
      start->next = NULL;
      start->data = rno;
      //  start->student_name=name;
      temp->next = start;
      temp = temp->next;
    }

  temp = head;
  cout << endl << "Display:" << endl;
  while (temp != NULL)
    {
      cout << temp->data << "   ";
      //      cout<<temp->student_name;
      temp = temp->next;
      cout << endl;
    }
  cout << "Enter any option: " << endl << "1. Delete from end" << endl <<
    "2. Delete from position" << endl << "3. Add to position" << endl;
  int choice;
  cin >> choice;
  if (choice ==1){
    temp = head;
    while(temp->next->next!=NULL){
       temp = temp->next;
    }
    temp->next = NULL;

	temp=head;
	cout << "\n\nList elements are - \n";
    while (temp != NULL)
	{
	  cout << temp->data << endl;
	  temp = temp->next;
	}

  }
  else if (choice == 2)
    {
      int position;
      cout << "Enter position" << endl;
      cin >> position;
      temp=head;
      if(position==1){
      	head = head->next;
	  }
      for(int i=2; i< position; i++) {
       if(temp->next!=NULL) {
        temp = temp->next;
    }
    }



     //struct node *delvar=temp->next;
      temp->next = temp->next->next;
      //free(delvar);
      cout << "\n\nList elements are - \n";
      temp=head;
      while (temp != NULL)
	{
	  cout << temp->data << endl;
	  temp = temp->next;
	}

    }
  else if (choice == 3)
    {
      int position, number;
      cout << "Enter position" << endl;
      cin >> position;
      cout << "Enter number" << endl;
      cin >> number;
      struct node *newNode;
      newNode = (struct node *) malloc (sizeof (struct node));
      newNode->data = number;

      struct node *temp = head;

      for (int i = 2; i < position; i++)
	{
	  if (temp->next != NULL)
	    {
	      temp = temp->next;
	    }
	}
      newNode->next = temp->next;
      temp->next = newNode;

      cout << "\n\nList elements are - \n";
      temp = head;
      while (temp != NULL)
	{
	  cout << temp->data << endl;
	  temp = temp->next;
	}
    }
  return 0;
}
*/
