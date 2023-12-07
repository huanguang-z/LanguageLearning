import datetime as dt

def recarea(width, height):
    return width*height

print(recarea(30, 40))

def position(dt, speed):
    posx = speed[0] * dt
    posy = speed[1] * dt
    return (posx, posy)
move = position(20, (10, 5))
print("the weiyi is {0}, {1}".format(move[0],move[1]))

def read_date(filename):
    try:
        with open(filename) as file:
         in_date = file.read()
        in_date = in_date.strip()
        date = dt.datetime.strptime(in_date, "%Y-%m-%d")
        return date
    except ValueError as e:
        print("Deal with ValueError")
        print(e)
    except FileNotFoundError as e:
        print(' Deal with FileNotFoundError')
        print(e)
    # finally:
    #     file.close()
date = read_date("readme.txt")
print("Date = {0}".format(date))

