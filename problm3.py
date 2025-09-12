def decode_string(s: str) -> str:
    result = ""
    i = 0
    while i < len(s):
        if s[i].isdigit():
            count = int(s[i])
            if i + 1 < len(s) and s[i+1].isalpha():
                result += s[i+1] * count
                i += 2
            else:
                i += 1
        else:
            i += 1
    return result

print(decode_string("3a2b1c"))