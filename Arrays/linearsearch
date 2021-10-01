def linearsearch(arr, low, high, skey):
  if high < low:
    return -1
  if arr[low]==skey:
    return low
  if arr[high]==skey:
    return high
  return linearsearch(arr, low+1, high-1, skey )

#driver code
arr = [2, 8, 45, 1, 13, 19]
n = len(arr)
skey = 12
index = linearsearch(arr, 0, n-1, skey)
if index!=-1:
  print("Element",skey, "is present at index ",index )
else:
  print("Element",skey, "is not present in given array")  











1
