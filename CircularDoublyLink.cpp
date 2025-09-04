#include<iostream>
#include<stdio.h>
using namespace::std;

class node
{
public:
    int data;
    node* next;
    node* previous;
};

class CircularDoublyList
{
    node* head;
    node* end;
    
public:
    CircularDoublyList()
    {
        head=NULL;
        end=NULL;
        
        
    }
    
    void insertbegin(int y){
    	node * StartNode = new node();
		StartNode -> data=y;
		if(head==NULL){
			
			head=end=StartNode;
			
		
		}
		else{
		node *temp = head;
		head = StartNode;
		StartNode->next = temp;
		temp->previous=StartNode;
		StartNode->previous=end;
		end->next=StartNode;
		
		
		}	
	}
	void insertEnd(int y){
		node* EndNode = new node();
		EndNode -> data= y;
		if(head==NULL){
			
			head=end=EndNode;
			
		}
		else{
		node * temp=end;
		end = EndNode;
		temp->next=EndNode;
		EndNode->previous= temp;
		EndNode->next=head;
		head->previous=EndNode;
			
		}
	}
	void insertAt(int y, int pos){
		node *MiddleNode = new node();
       	MiddleNode->data=y;
       	if(head!=NULL){
       	node *temp = head;
       	node *temp2;
	   	while(pos>1){
	   		temp2 = temp->next->next;
	   		temp=temp->next;
			pos-=1;	
	   }
	   temp->next=MiddleNode;
	   MiddleNode->next=temp2;}
	   
	   else{
	   
	   	head=end=MiddleNode;
	   		
	   }		
	}
	
	void deleteBegin(){
		if(head==NULL){
        	cout<<endl;
            cout<<"it is empty. we didn't add any values yet"<<endl;}
        
		else{	
 		node *temp = head;
        head = head->next;
        head->previous=end;
        end->next=head;
        delete temp;}
	}
	void deleteEnd(){
		if(head==NULL){
        	cout<<endl;
            cout<<"it is empty. we didn't add any values yet"<<endl;}
        else{	
    	node*temp =end;
    	end=end->previous;
    	end->next=head;
    	head->previous=end;
    	delete temp;       	
		}
		
	}
	
	void deleteAt( int pos){
		if(head==NULL){
			cout<<endl;
            cout<<"it is empty. we didn't add any values yet"<<endl;
		}
		else{
		node *temp = head;
       	node *temp2;
	   	while(pos>1){
	   		temp2 = temp->next->next;
	   		temp=temp->next;
			pos-=1;	
	   }
	    temp->previous->next=temp2;
	   delete temp;
		}
	}
	
    void search(int y)
    {
    	node * temp = head;
    	int no_of_nodes=1;
    	int count_of_same_nodes = 0;
     	while(temp->next!=end){
     		if(temp->data==y){ 
     		count_of_same_nodes+=1;
     		cout<<"the position of your value is "<<no_of_nodes<<" ,still searching dfrnt same value position"<<endl;
     		}
     		no_of_nodes+=1;
     		temp=temp->next;
		 }
		 if(temp->data==y){
		 	count_of_same_nodes+=1;
		 	cout<<"the position of your value is "<<no_of_nodes<<" ,still searching dfrnt same value position"<<endl;
		 }
		 cout<<endl;
		 cout<<"No more places."<<endl;
		 cout<<"total places of your value is "<<count_of_same_nodes<<endl;
        
    }
    
    int nodesCount(){
    	int count=0;
    	node* temp = head;
    	while(temp!=end){
    		count+=1;
    		temp=temp->next;
		}
		return count;
	}
    void print(){
	
   
    	if(head!=NULL){
        node * tptr=head;
        for(int i=0;i<nodesCount()+1 ;i++){
        	cout<<tptr->data<<" -> ";
        	tptr=tptr->next;
		}
       
        cout<<"no more"<<endl;  }
        
        else{
        	cout<<"it is empty. we didn't add any values yet"<<endl;
		}
        
    
        
    }
    
   
    void isEmpty()
    {
        if(head==NULL){
        	cout<<endl;
            cout<<"yes, it is empty. we didn't add any values yet"<<endl;}  // for true
        else {
			cout<<endl;
			cout<<"No, it is not empty. we already have some values. we can see it by print fn"<<endl;}  // for false
    }
};




    /////////////////////Sample Driver Program/////////////////////////////
int main()
{	
	
   
    CircularDoublyList ll;

    ll.isEmpty();
    
    ll.insertbegin(8);
    cout<<endl;
    ll.print();
    
   ll.isEmpty();
    
    ll.insertbegin(5);
    cout<<endl;
    ll.print();
    
    
    
    ll.insertEnd(3);
    cout<<endl;
    ll.print();
    
    ll.insertEnd(2);
    cout<<endl;
    ll.print();
    
    
    
    ll.insertbegin(7);
    ll.insertbegin(6);
    cout<<endl;
    ll.print();
    
    ll.insertAt(3,2);     //i(zrk) add new value after pos 2...in my pov:it means add at 3rd position.
    cout<<endl;
    ll.print();
    
    cout<<"++++ \n";
	ll.search(3);
    ll.deleteBegin();
    cout<<endl;
    ll.print();
    
    ll.deleteEnd();
    cout<<endl;
    ll.print(); 
    
    ll.deleteAt(4); //have to check
    cout<<endl;
    ll.print();
    
    
}

