#include<stack>
#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
	//LIFO - Last in First Out (STACK)
	stack<int> dishes;
	dishes.push(1);
	dishes.push(2);
	dishes.push(3);
	// Now we iterate over the stack using whileloop
	while(!dishes.empty())
	{
		cout << dishes.top() << endl;
		dishes.pop();
	}



	//FIFO - First in, First Out
	queue<int> ticket_counter;

	ticket_counter.push(1);
	ticket_counter.push(2);
	ticket_counter.push(3);

	//To reiterate over the queue, we follow up with the while statement
	while(!ticket_counter.empty())
	{
		cout << ticket_counter.front() << endl;
		ticket_counter.pop();
	}

}


