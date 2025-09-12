def assign_employee_ids(employee_ids: list, prefix: str) -> list:
    result = []
    for i in employee_ids:
        result.append(prefix + str(i))
    return result

employee_ids = [1, 2, 3, 4]
prefix = "EMP"
print(assign_employee_ids(employee_ids, prefix))