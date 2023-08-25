N = int(input())
SF = [list(map(int, input().split())) for _ in range(N)]
SF.sort(reverse=True, key=lambda x:x[1])

ans = 0
for i in range(1, N):
  if (SF[0][0] != SF[i][0]):
    ans = max(ans, SF[i][1])
  else:
    ans = max(ans, SF[i][1]//2)
print(SF[0][1] + ans)