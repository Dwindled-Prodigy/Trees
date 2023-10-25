def DisplayPostorder(root):
    if root is None:
        return

    DisplayPostorder(root.left)
    DisplayPostorder(root.right)
    print(root.data, end=" ")
