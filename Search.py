def search(root, target):
    if root is None:
        return False

    if root.data == target:
        return True
    elif target < root.data:
        return search(root.left, target)
    else:
        return search(root.right, target)
