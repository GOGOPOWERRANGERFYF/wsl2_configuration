def func1():
    return 0

print(func1)
print(func1.__name__)
print(func1.__str__)
print(type(func1.__str__))
func1.__str__ = "xxx"
print(func1.__str__)
