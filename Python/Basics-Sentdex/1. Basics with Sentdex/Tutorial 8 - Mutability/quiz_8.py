x = 1


def test():
    x = 2


test()
print(x)  # x = 1

x = 1


def test():
    global x
    x = 2


test()
print(x)    # X = 2

x = [1]


def test():
    x = [2]


test()
print(x) # x = [1]

x = [1]


def test():
    global x
    x = [2]


test()
print(x)  # x = [2]

x = [1]


def test():
    x[0] = 2


test()
print(x)  # x = [2]

