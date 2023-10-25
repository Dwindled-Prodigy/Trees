def find_LCA(root, n1, n2):
    if root is None:
        return None

    if root.data == n1 or root.data == n2:
        return root

    left_LCA = find_LCA(root.left, n1, n2)
    right_LCA = find_LCA(root.right, n1, n2)

    if left_LCA and right_LCA:
        return root

    return left_LCA if left_LCA else right_LCA
