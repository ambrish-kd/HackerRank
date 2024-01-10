# Problem Name:- What's Your Name?
# Problem Link:- https://www.hackerrank.com/challenges/whats-your-name/problem?isFullScreen=true

def print_full_name(first, last):
    print(f'Hello {first} {last}! You just delved into python.')

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)

# NOTE:
# This string formatting mechanism is known as Literal String Interpolation
# or F-strings(because of the leading f-character preceding the string literal).
