# Problem Name:- Lists
# Problem Link:- https://www.hackerrank.com/challenges/python-lists/problem?isFullScreen=true

if __name__ == '__main__':
    N = int(input())
    lis = []
    for _ in range(N):
        inpu = input().split()
        if inpu[0] == "insert":
            lis.insert(int(inpu[1]), int(inpu[2]))
        elif inpu[0] == "print":
            print(lis)
        elif inpu[0] == "remove":
            lis.remove(int(inpu[1]))
        elif inpu[0] == "append":
            lis.append(int(inpu[1]))
        elif inpu[0] == "sort":
            lis.sort()
        elif inpu[0] == "pop":
            lis.pop()
        else:
            lis = lis[::-1]
