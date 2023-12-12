class Node:
  def __init__(self, info):
    self.info = info
    self.next = None

start = None

def get_node():
  try:
    node = Node(None)
    return node
  except MemoryError:
    print("Memory allocation unsuccessful")
    return None

def insert_front(info):
  node = get_node()
  if node is not None:
    node.info = info
    node.next = start
    start = node

def insert_end(info):
  node = get_node()
  if node is not None:
    node.info = info
    temp = start
    if temp is None:
      start = node
    else:
      while temp.next is not None:
        temp = temp.next
      temp.next = node

def display():
  temp = start
  if temp is None:
    print("Linked list is empty")
    return
  else:
    while temp is not None:
      print(temp.info, end=" ")
      temp = temp.next
    print()

def delete_front():
  if start is None:
    print("Linked list is empty")
    return
  else:
    temp = start
    start = start.next
    del temp

def menu():
  while True:
    print("\n\nMENU\n1) Insert at the beginning\n")
    print("2) Display\n")
    print("3) Insert at the end\n")
    print("4) Delete at the beginning\n")
    print("5) Quit")
    choice = int(input("Enter your choice: "))
    
    if choice == 1:
      info = int(input("Enter information: "))
      insert_front(info)
    elif choice == 2:
      display()
    elif choice == 3:
      info = int(input("Enter information: "))
      insert_end(info)
    elif choice == 4:
      delete_front()
    elif choice == 5:
      break
    else:
      print("Invalid choice")


if __name__ == "__main__":
  menu()
