SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    newNode->data = data;
    newNode->next = nullptr;
    if (llist == nullptr) {
        return newNode;
    }
    newNode->next = llist;
    llist = newNode;
    return llist;
}
