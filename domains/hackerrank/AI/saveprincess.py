def printPath(dir,count):
    for _ in range(0,count): print(dir)
def main():
    M = int(input())
    for i in xrange(0,M):
        row = input().strip()
        if row.find('m') != -1 mario = [i, row.find('m')]
        if row.find('p') != -1 princess = [i, row.find('p')]
    diff = [p - b for p,b in zip(mario, princess)]
    direction = ['DOWN', 'RIGHT']

    if diff[0] < 0:
        direction[0] = "UP"
        diff *= -1
    if diff[1] < 0:
        direction[1] = "LEFT"
        diff *= -1
    printPath(direction[0], diff[0])
    printPath(direction[1], diff[1])
main()
