# Problem Name:- Finding the percentage
# Problem Link:- https://www.hackerrank.com/challenges/finding-the-percentage/problem?isFullScreen=true

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    # finding the average of student
    average = sum((student_marks[query_name]))/len((student_marks[query_name]))
    # printing with correct to 2 decimal places
    print(format(average, ".2f"))
