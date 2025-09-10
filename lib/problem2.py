def sort_products_by_name(products):
    return sorted(products, key=lambda x: x[1])


products = [("ID123", "Olma", 10), ("ID101", "Banan", 5), ("ID150", "Anor", 8)]
print(sort_products_by_name(products))