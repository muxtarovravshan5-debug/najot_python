def get_phone_number(contacts, search_name):
    for name in contacts:
        if name.lower() == search_name.lower():
            return contacts[name]
    return "Topilmadi"


contacts = {
    "Ali": "+998901112233",
    "Vali": "+998909998877",
    "Hasan": "+998938889900"
}

search_name = input("Ismni kiriting: ")
print(get_phone_number(contacts, search_name))

