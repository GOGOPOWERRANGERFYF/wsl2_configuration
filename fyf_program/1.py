print("hello world!")
# 位置参数,默认参数,可变参数,关键字参数,命名关键字参数

class person(object):
    person_info = "human being~"
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def print_info(self):
        print("%s %d" %(self.name, self.age))

print(person.person_info)
person1 = person("fyf", 18)
person1.print_info()

print("=================================================")
# 可变参数  p把接收到的实参封装在一个元组tuple
def function1(*p):
    print("This is function1!")
    print(p, type(p))

function1(1, 'a')

print("=================================================")
# 关键字参数   kwp把接收到的实参封装在一个字典dictionary 
def function2(**kwp):
    print("This is function2!")
    print(kwp, type(kwp))

function2(a=1, b="b")

# 命名=>关键字参数(在参数列表给定参数名),但kwp1之后的命名关键字参数还是不可控
def function3(kwp1, **kwp):
    print("This is function3!")
    print(kwp1, kwp, type(kwp))

function3(kwp1="f3kwp1", a=1, b='b')

# 命名=>关键字参数(在参数列表给定参数名),指定所有命名关键字参数
def function4(kwp1, *, kwp2):
    print("This is function4!")
    print(kwp1, kwp2)

function4(kwp1=1, kwp2='a')

# (1, 'a', 1.1) 可变参数
# {'a': 1, 'b': 'c', 'c': 1.1} 关键字参数 
# p1=1, p2='a', p3=1.1 命名关键字参数 {'a': 1, 'b': 'c'}关键字参数(这部分不可控)
# p1=1, p2='a', p3=1.1 指定所有命名关键字参数(所有可控)

d = 1
s = str(d)
print("type:", type(s), type(int("11")))
    
if __name__ == "__main__":
    print("module calling")
else:
    print("module called")
            



