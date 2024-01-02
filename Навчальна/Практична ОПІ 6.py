# Створення пустого словника для зберігання товарів
goods = {}

def input_product():
    # Введення ID та назви товару
    product_id = input("Введіть ID товару: ")
    product_name = input("Введіть назву товару: ")
    # Введення ціни товару
    price = float(input("Введіть ціну товару: "))
    
    # Додавання товару до словника
    goods[product_id] = {"name": product_name, "price": price}

def find_min_max_price():
    # Знаходимо 1 найнижчу та 1 найвищу ціну товару
    prices = [product["price"] for product in goods.values()]
    min_price = min(prices)
    max_price = max(prices)
    return min_price, max_price

def display_product(price, is_highest):
    # Виведення товару з найвищою або найнижчою ціною
    for product_id, product in goods.items():
        if product["price"] == price:
            print(f"{'Найвища' if is_highest else 'Найнижча'} ціна: ID={product_id}, Назва={product['name']}, Ціна={product['price']}")

def input_discounted_product():
    # Введення акційного товару
    product_id = input("Введіть ID акційного товару: ")
    old_price = goods[product_id]["price"]
    discount_percent = float(input("Введіть відсоток знижки: "))
    
    # Розрахунок нової ціни
    discounted_price = old_price * (1 - discount_percent / 100)
    
    # Додавання акційного товару
    goods[product_id]["discounted_price"] = discounted_price

def display_discounted_product():
    # Виведення акційного товару
    for product_id, product in goods.items():
        if "discounted_price" in product:
            print(f"Акційний товар: ID={product_id}, Назва={product['name']}, Стара ціна={product['price']}, Нова ціна={product['discounted_price']}")

def input_product():
    # Введення ID та назви товару
    product_id = input("Введіть ID товару: ")
    product_name = input("Введіть назву товару: ")
    # Введення ціни товару
    price = float(input("Введіть ціну товару: "))
    
    # Додавання товару до словника
    goods[product_id] = {"name": product_name, "price": price}

def find_min_max_price():
    # Знаходимо 1 найнижчу та 1 найвищу ціну товару
    prices = [product["price"] for product in goods.values()]
    min_price = min(prices)
    max_price = max(prices)
    return min_price, max_price

def display_product(price, is_highest):
    # Виведення товару з найвищою або найнижчою ціною
    for product_id, product in goods.items():
        if product["price"] == price:
            print(f"{'Найвища' if is_highest else 'Найнижча'} ціна: ID={product_id}, Назва={product['name']}, Ціна={product['price']}")

def input_discounted_product():
    # Введення акційного товару
    product_id = input("Введіть ID акційного товару: ")
    old_price = goods[product_id]["price"]
    discount_percent = float(input("Введіть відсоток знижки: "))
    
    # Розрахунок нової ціни
    discounted_price = old_price * (1 - discount_percent / 100)
    
    # Додавання акційного товару
    goods[product_id]["discounted_price"] = discounted_price

def display_discounted_product():
    # Виведення акційного товару
    for product_id, product in goods.items():
        if "discounted_price" in product:
            print(f"Акційний товар: ID={product_id}, Назва={product['name']}, Стара ціна={product['price']}, Нова ціна={product['discounted_price']}")

while True:
    choice = int(input("Оберіть дію (0 - Вивести товари, 1 - Додати товар, 2 - Знайти найнижчу і найвищу ціну, 3 - Додати акційний товар, 4 - Вивести акційний товар, 5 - Вийти): "))
    
    if choice == 1:
        input_product()
    elif choice == 2:
        min_price, max_price = find_min_max_price()
        display_product(min_price, False)
        display_product(max_price, True)
    elif choice == 0:
        for product_id, product in goods.items():
            print(f"ID={product_id}, Назва={product['name']}, Ціна={product['price']}")
    elif choice == 3:
        input_discounted_product()
    elif choice == 4:
        display_discounted_product()
    elif choice == 5:
        break
