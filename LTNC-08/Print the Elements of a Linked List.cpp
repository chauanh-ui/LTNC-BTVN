void printLinkedList(SinglyLinkedListNode* head) {
    if (head == nullptr) return;
    SinglyLinkedListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->data << endl;
        cur = cur->next;
    }
}
