#include <iostream>
//#define MAX 1000

// class stack{
// 	int top;
// 	public:
// 		int a[MAX];
// 		bool push(int x);
// 		int pop();
// 		bool isempty();
// 		int peek();
// 		bool isfull();		
// };

int top;
// int a[MAX];
vector<int> v;

int pop(){
	if (top<0){
		std::cout<<"stack empty"<<std::endl;
	}
	else{
		int x= a[top--];
		return x;
	}
}

int peek(){
	int x= a[top];
	return x;
}

bool push(int x){
	if(top==MAX-1){
		std::cout<<"overflow"<<std::endl;
		return false;
	}
	else{
		a[++top]=x;
		std::cout<<x<<" pushed"<<std::endl;
		return true;
	}
}

int main() 
{
	std::cout<<"hii\n"; 
    //class stack s; 
    push(10); 
    push(20); 
    push(30); 
    std::cout << peek() << " peek"<<std::endl;
	std::cout << pop() << " popped"<<std::endl; 
  	std::cout << pop() << " popped"<<std::endl;
    std::cout << peek() << " peek"<<std::endl;
	
		return 0; 
} 