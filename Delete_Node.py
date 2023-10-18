class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def DeleteNode(root, key):
    if root is None:
        return root

    if key < root.data:
        root.left = DeleteNode(root.left, key)
    elif key > root.data:
        root.right = DeleteNode(root.right, key)
    else:
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left
        temp = FindMinNode(root.right)
        root.data = temp.data
        root.right = DeleteNode(root.right, temp.data)
    return root

def FindMinNode(node):
    current = node
    while current and current.left is not None:
        current = current.left
    return current
