import sys
sys.stdout = open('./output.txt', 'w')
sys.stdin = open('./input.txt', 'r')

input=sys.stdin.readline

for T in range(int(input())):
    n=int(input())
    a=list(map(str,input().split()))
    print(a)
