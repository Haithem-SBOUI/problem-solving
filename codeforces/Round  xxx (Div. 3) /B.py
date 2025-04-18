def solve():
    n = int(input())
    res = ""
    for i in range(n):
        row = input()
        for j in range(4):
            if row[j] == '#':
                res += str(j + 1) + " "
                break
    print(res)

def main():
    t = int(input())
    for _ in range(t):
        solve()

main()
