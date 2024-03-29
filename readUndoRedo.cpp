// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to perform
// "WRITE X" operation
void WRITE(stack<char>& Undo,
		char X)
{
	// Push an element to
	// the top of stack
	Undo.push(X);
}

// Function to perform
// "UNDO" operation
void UNDO(stack<char>& Undo,
		stack<char>& Redo)
{
	// Stores top element
	// of the stack
	char X = Undo.top();

	// Erase top element
	// of the stack
	Undo.pop();

	// Push an element to
	// the top of stack
	Redo.push(X);
}

// Function to perform
// "REDO" operation
void REDO(stack<char>& Undo,
		stack<char>& Redo)
{
	// Stores the top element
	// of the stack
	char X = Redo.top();

	// Erase the top element
	// of the stack
	Redo.pop();

	// Push an element to
	// the top of the stack
	Undo.push(X);
}

// Function to perform
// "READ" operation
void READ(stack<char> Undo)
{
	// Store elements of stack
	// in reverse order
	stack<char> revOrder;

	// Traverse Undo stack
	while (!Undo.empty()) {
		// Push an element to
		// the top of stack
		revOrder.push(Undo.top());

		// Erase top element
		// of stack
		Undo.pop();
	}

	while (!revOrder.empty()) {
		// Print the top element
		// of the stack
		cout << revOrder.top();
	Undo.push(revOrder.top());

		// Erase the top element
		// of the stack
		revOrder.pop();
	}

	cout << " ";
}

// Function to perform the
// queries on the document
void QUERY(vector<string> Q)
{
	// Stores the history of all
	// the queries that have been
	// processed on the document
	stack<char> Undo;

	// Stores the elements
	// of REDO query
	stack<char> Redo;

	// Stores total count
	// of queries
	int N = Q.size();

	// Traverse all the query
	for (int i = 0; i < N; i++) {
		if (Q[i] == "UNDO") {
			UNDO(Undo, Redo);
		}
		else if (Q[i] == "REDO") {
			REDO(Undo, Redo);
		}
		else if (Q[i] == "READ") {
			READ(Undo);
		}
		else {
			WRITE(Undo, Q[i][6]);
		}
	}
}

// Driver Code
int main()
{

	vector<string> Q = { "WRITE A", "WRITE B",
						"WRITE C", "UNDO",
						"READ", "REDO", "READ" };
	QUERY(Q);
	return 0;
}
