//Ques 1. Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;
    
    for (size_t i = 0; i < infix.length(); ++i) {
        char token = infix[i];
        if (isspace(token)) {
            continue;
        } else if (isalnum(token) || token == '.') {
            postfix += token;
        } else if (token == '(') {
            s.push(token);
        } else if (token == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += ' ';
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            postfix += ' ';
            while (!s.empty() && precedence(s.top()) >= precedence(token)) {
                postfix += s.top();
                postfix += ' ';
                s.pop();
            }
            s.push(token);
        }
    }

    while (!s.empty()) {
        postfix += ' ';
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
