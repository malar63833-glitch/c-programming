#include <stdio.h>
#define size 5
int array[size];
int top = -1;

//push
void push(int value){
   if(top == size -1){
       printf("No space left \n");
   }else{
       top++;
       array[top] = value;
       printf("The value %d pushed to array\n",value);
   }
}
//pop
void pop(){
   if(top == -1){
       printf("No value at stack");
   }else{
       printf("The top value is: %d \n",array[top]);
       array[top];
       top--;
   }
}
//peak
void peak(){
   if(top == -1){
       printf("No value at stack");
   }else{
       printf("The top value is: %d \n",array[top]);
       array[top];
      
   }
}
void isempty(){
   if(top == -1){
       printf("No value at stack");
   }else{
       printf("stack has items \n");
       
      
   }
}
void Size()  
    printf("My stack size is :%d \n",top +1);
}

int main() {
   push(10);
   isempty();
   Size();
   pop();
   Size();
   
 
   return 0;
}