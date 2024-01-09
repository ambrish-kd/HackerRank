# Problem Name:- String Split and Join
# Problem Link:- https://www.hackerrank.com/challenges/python-string-split-and-join/problem?isFullScreen=true

def split_and_join(line):
    # write your code here
    line = '-'.join(line.split())
    return line  

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
