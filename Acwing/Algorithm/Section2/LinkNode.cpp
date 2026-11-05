#include <iostream>

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode* createList(int n) {
    if (n <= 0) return nullptr;
    ListNode* head = new ListNode();
    ListNode* curr = head;
    for (int i = 1; i < n; ++i) {
        curr->next = new ListNode();
        curr = curr->next;
    }
    return head;
}

int main() {

}
