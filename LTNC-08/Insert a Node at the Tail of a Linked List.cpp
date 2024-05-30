SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        return newNode;
    }
    SinglyLinkedListNode* cur = head;
    while (cur->next != nullptr) {
        cur = cur->next;
    }
    cur->next = newNode;
    return head;
}
