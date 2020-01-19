x=0
print("SURVEY")
print("1) Are you a human being?")
n=int(input("enter 1 if yes and 0 if no: "))
print("")
x=x+n
x=x*10
print("2) Are you good?")
n=int(input("enter 1 if yes and 0 if no: "))
print("")
x=x+n
x=x*10
print("3) Do good graders study well?")
n=int(input("enter 1 if yes and 0 if no: "))
print("")
x=x+n
x=x*10
print("4) Do humans love good graders?")
n=int(input("enter 1 if yes and 0 if no: "))
print("")
x=x+n
x=x*10
print("5) Does every human study well?")
n=int(input("enter 1 if yes and 0 if no: "))
print("")
x=x+n
if x==11111 :
    print("Conclusion: Every human is a good grader")
elif x==11110:
    print("Conclusion: Every human is not a good grader")
    