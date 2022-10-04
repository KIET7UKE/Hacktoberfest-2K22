# Program to implement Singly Linked List Operations
import os

class Node:
    def __init__(self, value = None) -> None:
        self.value = value
        self.next = None

class SLL:
    def __init__(self) -> None:
        self.head = None
        self.tail = None

    def __iter__(self):
        node = self.head
        while node:
            yield node
            node = node.next

    def insert(self, value, location = -1):
        '''Insert in Singly Linked List'''

        newNode = Node(value)
        if self.head is None: 
            '''Empty List'''   
            self.head = newNode
            self.tail = newNode
        
        elif location == 0:
            '''Insertion in the beginning'''
            newNode.next = self.head
            self.head = newNode

        elif location == -1:
        
            '''Insertion at the End'''
            self.tail.next = newNode
            self.tail = newNode

        else:
            '''Insertion in custom location'''
            tempNode = self.head

            for index in range(1, location):
                if tempNode.next is None:
                    print('Index out of Range!!!')
                    return
                tempNode = tempNode.next
            if tempNode is self.tail:
                '''if last node is reached'''
                self.tail.next = newNode
                self.tail = newNode
            else:
                nextNode = tempNode.next
                tempNode.next = newNode
                newNode.next = nextNode

    
    def delete(self, location):
        '''Delete from Singly Linked List'''
        
        if self.head is None:
            print('Linked List is Empty!!! Aborting...')
            return
        
        elif location == 0:
            '''Deletion in the beginning'''
            current = self.head

            if current.next is None:
                '''only 1 element in list'''
                self.head = None
                self.tail = None

            else:
                '''more than 1 elements present'''
                self.head = current.next

        elif location == -1:
            '''Deletion in the end'''
            current = self.head

            if current.next is None:
                '''only 1 element in list'''
                self.head = None
                self.tail = None

            else:
                '''list has multiple elements'''
                while current.next is not None:
                    '''find the second last element'''
                    previous = current
                    current = current.next
                previous.next = None
                self.tail = previous

        else:
            '''Deletion from custom location'''
            current = self.head

            if current.next is None:
                '''only 1 element in list'''
                print('Index out Range!!!')

            else:
                '''multiple elements in list'''
            
                for index in range(1, location):
                    current = current.next
                    if current.next is None:
                        print('Index out of Range!!!')
                        return

                if current.next is self.tail:
                    '''if last node is to be deleted'''
                    current.next = None
                    self.tail = current

                else:
                    nextNode = current.next
                    current.next = nextNode.next

sll = SLL()
while True:
    print(f'Singly Linked List: {[node.value for node in sll]}')
    print('1. Insertion')
    print('2. Deletion')
    choice = input('Enter your choice: ')
    
    if choice == '1':
        while choice in ('1', 'Y', 'y'):
            value = int(input('Value: '))
            pos = int(input('Position: '))
            sll.insert(value, pos)
            print(f'Singly Linked List: {[node.value for node in sll]}')
            choice = input('Continue? (Y/N) ')

    elif choice == '2':
        while choice in ('2', 'Y', 'y'):
            pos = int(input('Position: '))
            sll.delete(pos)
            print(f'Singly Linked List: {[node.value for node in sll]}')
            choice = input('Continue? (Y/N) ')

    else:
        break

    os.system('cls' if os.name == 'nt' else 'clear')
