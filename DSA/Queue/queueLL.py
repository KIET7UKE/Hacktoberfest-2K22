# implemented Queue as Linked Lists

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
    def __str__(self):
        return self.data

class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def __iter__(self):
        current_node = self.head
        while current_node:
            yield current_node
            current_node = current_node.next

class Queue:
    def __init__(self):
        self.linked_list = LinkedList()

    def __str__(self):
        data = [str(x) for x in self.linked_list]
        return ' '.join(data)

    def enqueue(self, data):
        node = Node(data)
        if self.linked_list.head is None:
            self.linked_list.head = node
            self.linked_list.tail = node
        else:
            self.linked_list.tail.next = node
            self.linked_list.tail = node
    
    def isEmpty(self):
        if self.linked_list.head is None:
            return True
        else:
            return False

    def dequeue(self):
        if self.isEmpty():
            print("Queue is empty!! Aborting...")
            return
        else:
            node = self.linked_list.head
            if self.linked_list.head == self.linked_list.tail:
                self.linked_list.head = None
                self.linked_list.tail = None
            else:
                self.linked_list.head = self.linked_list.head.next
            return node
        
    def peek(self):
        if self.isEmpty():
            print("Queue is empty!! Aborting...")
            return
        else:
            node = self.linked_list.head
            print(node)

    def delete(self):
        self.linked_list.head = None
        self.linked_list.tail = None
