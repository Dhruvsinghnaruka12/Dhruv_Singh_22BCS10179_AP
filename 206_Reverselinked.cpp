/*Given the head of a singly linked list, reverse the list, and return the reversed list.

*/

#include<iostream>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* turboreversal = reverseList(head->next);

        
        head->next->next = head;
        head->next = nullptr;

        return turboreversal; 
    }
};