def DisplayPreorder(root):
    if root is None:
        return

    print(root.data, end=" ")
    DisplayPreorder(root.left)
    DisplayPreorder(root.right)
