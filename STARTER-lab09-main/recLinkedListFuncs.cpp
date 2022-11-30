#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node* head) {
  if(head == NULL) return 0;
  if(head->next == NULL) return head->data;
  else return head->data + recursiveSum(head->next);
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  if(head->next == NULL) return head->data;
  else if(head->next->next == NULL){
    if(head->data >= head->next->data)return head->data;
    else return head->next->data;
  }
  else{
    Node* temp = new Node;
    if(head->data >= head->next->data){
      temp->data = head->data;
      temp->next = head->next->next;
      recursiveLargestValue(temp);
    }
    else{
      temp->data = head->next->data;
      temp->next = head->next->next;
      recursiveLargestValue(temp);
    }
    }
}
