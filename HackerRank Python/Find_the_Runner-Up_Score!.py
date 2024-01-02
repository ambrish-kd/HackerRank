# Problem Name:- Find the Runner-Up Score!
# Problem Link:- https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem?isFullScreen=true

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    # we have a map object arr that has the numbers so, remove duplicates by saving arr to a set
    # set is unordered so to order it we need make it a list
    arr = list(set(arr))
    # now we sort the list
    arr = sorted(list(set(arr)))
    # finally we print the runner up item which is the second last item of the sorted list
    print(arr[-2])
