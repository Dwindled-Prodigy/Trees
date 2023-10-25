from queue import SimpleQueue

def DisplayLevelOrder(root):
    if root is None:
        return

    queue = SimpleQueue()
    queue.put(root)

    while not queue.empty():
        current = queue.get()
        print(current.data, end=" ")

        if current.left:
            queue.put(current.left)
        if current.right:
            queue.put(current.right)
