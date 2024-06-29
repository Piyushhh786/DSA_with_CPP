#include <iostream>
#include <stack>
#include <string>

using namespace std;


int precedence(char op) {
  
    if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return -1;
}
string infixToPostfix(string expression) {
    stack<char> stk;
    string postfix = "";
    
    for (char& c : expression) {
       
        if (isalnum(c))
            postfix += c;
        
        else if (c == '(')
            stk.push(c);
        else if (c == ')') {
            while (!stk.empty() && stk.top() != '(') {
                postfix += stk.top();
                stk.pop();
            }
            stk.pop(); 
        }
        else {
            while (!stk.empty() && precedence(c) <= precedence(stk.top())) {
                postfix += stk.top();
                stk.pop();
            }
            stk.push(c);
        }
    }
    
    while (!stk.empty()) {
        postfix += stk.top();
        stk.pop();
    }
    
    return postfix;
}

int main() {
    string infix_expression;
    cout << "Enter the infix expression: ";
    getline(cin, infix_expression);
    
    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Postfix expression: " << postfix_expression << endl;
    
    return 0;
}
