from queue import SimpleQueue

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def CreateNode(data):
    new_node = Node(data)
    return new_node

def InsertNode(root, data):
    if root is None:
        return CreateNode(data)

    q = SimpleQueue()
    q.put(root)

    while not q.empty():
        temp = q.get()

        if temp.left:
            q.put(temp.left)
        else:
            temp.left = CreateNode(data)
            return root

        if temp.right:
            q.put(temp.right)
        else:
            temp.right = CreateNode(data)
            return root

    return root

def inorder(temp):
    if temp is None:
        return

    inorder(temp.left)
    print(temp.data, end=' ')
    inorder(temp.right)

if __name__ == "__main__":
    root = None

    while True:
        print("Choose an option:")
        print("1. Insert a number into the binary tree")
        print("2. Display the inorder traversal")
        print("3. Exit")
        choice = input()

        if choice == "1":
            key = int(input("Enter a number to insert into the binary tree: "))
            root = InsertNode(root, key)
            print("Insertion completed")
            print()
        elif choice == "2":
            print("Inorder traversal: ", end='')
            inorder(root)
            print()
        elif choice == "3":
            print("Exiting the program")
            break
        else:
            print("Invalid choice. Please try again.")
