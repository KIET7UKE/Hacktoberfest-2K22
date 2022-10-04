# function to implement binary search algorithm
# takes a number list and the search key
# returns the index of the search key in list
def binary_search(array, key):

  start = 0
  end = len(array) - 1

  while (start <= end):
    mid = start + (end - start) // 2

    if (array[mid] == key):
      return mid

    elif (array[mid] < key):
      start = mid + 1

    else:
      end = mid - 1

  return -1   # in case, key wasn't found


# main code
array = [9, 2, 4, 3, 6, 5, 7, 8, 1]
key = 8

print(f'initial array: {array}')

array.sort()  # binary search only works for sorted arrays
print(f'sorted array: {array}')

print(f'search element: {key}')
index = binary_search(array, key)

if (index < 0):
  print(f'{key} not found in array')

else:
  print(f'{key} found at index {index}')
