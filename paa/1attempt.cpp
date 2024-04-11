class Product:
    def __init__(self, id, name, price, quantity):
        self.id = id
        self.name = name
        self.price = price
        self.quantity = quantity

class Cart:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def remove_product(self, product):
        self.products.remove(product)

    def get_total_cost(self):
        total_cost = 0
        for product in self.products:
            total_cost += product.price * product.quantity
        return total_cost

class Customer:
    def __init__(self, id, name, email, address):
        self.id = id
        self.name = name
        self.email = email
        self.address = address
        self.cart = Cart()

    def add_to_cart(self, product):
        self.cart.add_product(product)

    def remove_from_cart(self, product):
        self.cart.remove_product(product)

    def view_cart(self):
        cart_products = []
        for product in self.cart.products:
            cart_products.append((product.name, product.price, product.quantity))
        return cart_products

    def checkout(self):
        total_cost = self.cart.get_total_cost()
        # Code for processing payment and generating order
        # Confirmation message or email can be sent to the customer
        return total_cost

class ProductCatalog:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def remove_product(self, product):
        self.products.remove(product)

    def search_product(self, keyword):
        matching_products = []
        for product in self.products:
            if keyword.lower() in product.name.lower():
                matching_products.append(product)
        return matching_products

# Sample usage of the classes

# Create some sample products
product1 = Product(1, "Rice", 25, 1)
product2 = Product(2, "Dal", 30, 2)
product3 = Product(3, "Oil", 100, 1)
product4 = Product(4, "Milk", 20, 3)

# Create a product catalog and add products to it
product_catalog = ProductCatalog()
product_catalog.add_product(product1)
product_catalog.add_product(product2)
product_catalog.add_product(product3)
product_catalog.add_product(product4)

# Create a customer
customer1 = Customer(1, "John", "john@example.com", "1234, Main St, City")
customer2 = Customer(2, "Jane", "jane@example.com", "5678, Elm St, Town")

# Add products to customer's cart
customer1.add_to_cart(product1)
customer1.add_to_cart(product2)
customer1.add_to_cart(product3)

# View customer's cart
cart_products = customer1.view_cart()
print("Cart Products:")
for product in cart_products:
    print("Product: {}, Price: {}, Quantity: {}".format(product[0], product[1], product[2]))

# Remove a product from customer's cart
customer1.remove_from_cart(product2)

# Checkout and get total cost
total_cost = customer1.checkout()
print("Total Cost: $", total_cost)
