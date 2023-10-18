class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def array_to_binary_tree(arr, index):
    if index[0] >= len(arr) or arr[index[0]] == -1:
        index[0] += 1
        return None

    node = TreeNode(arr[index[0]])
    index[0] += 1
    node.left = array_to_binary_tree(arr, index)
    node.right = array_to_binary_tree(arr, index)
    return node

def in_order_traversal(root):
    if root:
        in_order_traversal(root.left)
        print(root.data, end=" ")
        in_order_traversal(root.right)
