#include <iostream>

#define Max 100
int ar[Max];
int top=-1;
int newarr[Max];

void push(int x){
	if (top>=Max-1){
		std::cout<<"overflow\n";
	}
	else{
		top=top+1;
		ar[top]= x;
	}
}

void pop(){
	if(top==-1){
		std::cout<<"underflow\n";
	}
	else{
		int x=ar[top];
		top=top-1;
	}
}
void print(){
	int i;
	for(i=0; i<=top;i++){
		std::cout<<ar[i]<<" ";
	}
}	

void revStk(){
	//int newtop=0;
	for(int i=top; i>=0;i--){
		ar[top-i]=ar[i];
		//newtop+=1;
	}
}

void newprint(){
	int i;
	for(i=0; i<=top;i++){
		std::cout<<newarr[i]<<" ";
	}
}

int main(){
	char rev;
	push(30);
	push(50);
	push(40);
	push(60);	
	print();
	std::cout<<"\nWould you like to reverse the stack? Y or N\n";
	std::cin>>rev;
	if(rev=='Y'){
		revStk();
	}
	print();
	return 0;
}


