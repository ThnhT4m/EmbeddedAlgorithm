#define max 1000001
typedef struct{
    char data[max];
    int top;
}Stack;
void init(Stack *stack){
    stack->top = -1;
}
int isEmpty(Stack *s){
    return s->top == -1;
}
int isFull(Stack *s){
    return s->top >= max;
}
void push(Stack *s, char val){
    if(isFull(s)) {return;}
    s->data[++(s->top)] = val;
}
int pop(Stack *s){
    if(isEmpty(s)){
        return -1;
    }
   return s->data[(s->top)--];
}
int peek(Stack *s) {
    if (isEmpty(s)) {
        return -1;
    }
    return s->data[s->top];
}
bool isValid(char* s) {
    Stack stack;
    init(&stack);
    int len = strlen(s);
    for( int i = 0 ; i < len ; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            push(&stack,s[i]);
        }else{
            if(isEmpty(&stack)) return false;
            if(s[i] == ')'){
                if(peek(&stack) == '('){
                    pop(&stack);
                }else{
                    return false;
                }
            }
             if(s[i] == ']'){
                if(peek(&stack) == '['){
                    pop(&stack);
                }else{
                    return false;
                }
            }
             if(s[i] == '}'){
                if(peek(&stack) == '{'){
                    pop(&stack);
                }else{
                    return false;
                }
            }
        }
    }
     return isEmpty(&stack);
    
}