menu = {
    'pizza':100,
    'pasta':50,
    'burger':60,
    'coffee':20,
    'salad':40,


}

print("welcome to python restrorant")
print("pizza: rs100\npasta:rs50\nburger:rs60\ncoffee:rs20\nsalad:rs40")

order_total = 0

item_1 = input("enter the name of item you want to order =")
if item_1 in menu:
    order_total += menu[item_1]
    print(f"your item{item_1} has been added to your order")

else:
    print(f"ordered item {item_1} is not available yet")

another_order = input("do you want to add another item?(yes/no)")
if another_order == "yes":
    item_2 = input("enter the name of second item = ")
    if item_2 in menu:
        order_total += menu[item_2] 
        print(f"Item{item_2}has been added to order")
    else:
        print(f"ordered item{item_2}is not avaialable!")

print(f"the total amount of item is{order_total}")   


