# implemented binary trees as lists

class BinaryTree:

    def __init__(self, size):
        '''initialize object'''
        self.list = (size + 1) * [None]  #no. of elements + 1(vacant 0 index)
        self.last_used_index = 0 #elements r placed frm index 1
        self.max_size = size

    def insert(self, data):
        '''insert a data in Tree'''
        if self.last_used_index == self.max_size:
            return 'The Binary Tree is full! Aborting...'
        self.list[self.last_used_index + 1] = data
        self.last_used_index += 1
        return f'\'{data}\' has been successfully inserted'

    def search(self, data):
        '''search data in binary tree'''
        for element in self.list:
            if element == data:
                return f'{data} found!!'
        return f'{data} not found'

    def pre_order(self, index = 1):
        '''pre-order traversal on binary tree'''
        if index > self.last_used_index:
            return
        print(self.list[index])
        self.pre_order(index * 2)       #left child
        self.pre_order((index * 2) + 1) #right child

    def in_order(self, index = 1):
        '''in-order traversal on binary tree'''
        if index > self.last_used_index:
            return
        self.in_order(index * 2)       #left child
        print(self.list[index])
        self.in_order((index * 2) + 1) #right child

    def post_order(self, index = 1):
        '''post-order traversal on binary tree'''
        if index > self.last_used_index:
            return
        self.post_order(index * 2)       #left child
        self.post_order((index * 2) + 1) #right child
        print(self.list[index])

    def level_order(self, index = 1):
        '''level-order traversal on binary tree'''
        for i in range(index, self.last_used_index + 1):
            print(self.list[i])
    
    def delete(self, data):
        '''delete a node from binary tree'''
        if self.last_used_index == 0:
            return 'Empty Tree!!! Aborting...'

        for index in range(self.last_used_index):
            if self.list[index] == data:
                self.list[index] = self.list[self.last_used_index] #replace node with deepest element
                self.list[self.last_used_index] = None             #delete deepest element
                self.last_used_index -= 1
                return f'{data} successfully deleted'
        return f'{data} could not be found'

    def delete_tree(self):
        '''delete the entire tree'''
        self.list = None
        return 'The Tree has been successfully deleted'
