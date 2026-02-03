def quick_sort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        smaller = [i for i in arr[1:] if i <= pivot]
        greater = [j for j in arr[1:] if j > pivot]
        return quick_sort(smaller) + [pivot] + quick_sort(greater)

arr = [1, 50, 2, 30, 9, 8]
print(quick_sort(arr))