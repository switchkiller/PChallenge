preprocess_done = 0
selected_index = -1
dirts = []
grid = 5
def find_dirts(board):
    for x_inx in range(grid):
        for y_inx in range(grid):
            if board[x_inx][y_inx] == 'd' : dirts.append([x_inx,y_inx])
    global preprocess_done
    preprocess_done = 1
def find_the_idx(posx,posy):
    min_dis = 9
    for i in range(len(dirts)):
        dirt = dirts[i]
        idx = posx - dirt[0] if posx > dirt[0] else dirt[0] - posx
        idy = posy - dirt[1] if posy > dirt[1] else dirt[1] - posy
        distance = idx + idy
        if min_dis > distance:
            min_dis = distance
            min_idx = i
    global selected_index
    selected_index = min_idx
def clean():
    global selected_index
    dirts.pop(selected_index)
    selected_index = -1
def print_move(posx, posy):
    idx = dirts[selected_index][0]
    idy = dirts[selected_index][1]
    if posx == idx and posy == idy :
        clean()
        print ('CLEAN')
    elif posx < idx : print ('DOWN')
    elif posx > idx : print ('UP')
    elif posy < idy : print ('RIGHT')
    else:   print ('LEFT')
def next_move(posx,posy,board):
    if preprocess_done == 0 : find_dirts(board)
    if selected_index == -1 : find_the_idx(posx, posy)
    print_move(posx, posy)

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(5)]
    next_move(pos[0], pos[1],board)
