/*1290. Convert Binary Number in a Linked List to Integer
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.*/
#include<iostream>
using namespace std;




 
  struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 #include <cmath>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        int counter=0;
        ListNode* temp=head;
        while(temp!=nullptr){
         counter++;
         temp=temp->next;
        }
        counter--;
        while (head!=nullptr){
         if(head->val==1){
           ans+=pow(2,counter);

         }
                     counter--;

            head=head->next;
        
        }
        return ans;
    }
    
};