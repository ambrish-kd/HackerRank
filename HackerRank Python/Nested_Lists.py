# Problem Name:- Nested Lists
# Problem Link:- https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true

if __name__ == '__main__':
    arr = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        arr.append([score, name])
    arr.sort()
    maxi = 1e9
    for i in range(0, len(arr)):
        if(arr[i][0] > arr[0][0] and arr[i][0] <= maxi):
            maxi = arr[i][0]
            print(arr[i][1])
