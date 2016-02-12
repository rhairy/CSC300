/* AssignmentFour */

#include<iostream>
#include<queue>
#include<stack>
#include<string>

using namespace std;

int main()
{
	/* Prompt the user to enter five names and store them in the queue. */
	queue<string> q;
	string name;

	for (int i = 0; i < 5; i++) {
		cout << "Enter a name: ";
		cin >> name;
		q.push(name);
	}

	/* Read the names from the queue and enter them into the stack. */
	stack<string> s;

	for (int i = 0; i < 5; i++) {
		name = q.front();
		s.push(name);
		q.pop();
	}

	/* Remove the names from the stack and print them. */
	for (int i = 0; i < 5; i++) {
		name = s.top();
		cout << name << endl;
		s.pop();
	}

	/* The last name comes first because stacks are a first in last out data structure. */

	return 0;
}
