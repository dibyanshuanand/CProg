#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

char post[50];
int getPriority(char);
int push(char [], int, char);
int popb(char [], int);
int popa(char[], int, int);

void printStack(char [], int);

int main () {
    char inEq[50];
    printf("Enter the equation : ");
    scanf("%s", inEq);
    strcat(inEq, ")");
    // printf("\n%s", inEq);
    // printf("%d",__INT32_MAX__);
    char st[MAX];
    int top = -1;
    
    top = push(st, top, '(');
    // printStack(st, top);
    // printf("\n%d", (int)strlen(inEq));
    for (int i = 0 ; i < (int)strlen(inEq) ; ++i) {
        char ch = inEq[i];
        if (ch == '(')
            top = push(st, top, ch);
        else if (ch == ')')
            top = popb(st, top);
        else if (ch == '/' || ch == '*' || ch == '-' || ch == '+' || ch == '^' || ch == '%') {
            top = popa(st, top, getPriority(ch));
            top = push(st, top, ch);
        }
        else {
            char s[2] = {ch, '\0'};
            strcat(post, s);
            // printf("\n%s", post);
        }
    }

    printf("\nPostfix Expression : %s", post);

    return 0;
}

int push (char st[], int top, char ch) {
    if (top == MAX - 1)
		printf("\n STACK OVERFLOW");
	else {
		top++;
		st[top] = ch;
	}

    return top;
}

int getPriority(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '*' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

int popb(char st[], int top) {
    char ch = st[top];
    top--;
    while (ch != '(') {
        char s[2] = {ch, '\0'};
        strcat(post, s);
        ch = st[top];
        top--;
    }

    return top;
}

int popa(char st[], int top, int priority) {
    char ch = st[top];
    while (getPriority(ch) >= priority) {
        char s[2] = {ch, '\0'};
        strcat(post, s);
        top--;
        ch = st[top];
    }

    return top;
}

void printStack(char str[], int top) {
    for (int i = 0 ; i <= top ; ++i)
        printf("\n%c", str[i]);

    return;
}