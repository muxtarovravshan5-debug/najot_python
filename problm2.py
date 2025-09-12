def update_student_score(students: dict, student_name: str, score: int) -> dict:
    if student_name in students:
        students[student_name].append(score)
    else:
        students[student_name] = [score]
    return students

students = {"Ali": [80, 85], "Vali": [90]}
print(update_student_score(students, "Ali", 95))

print(update_student_score(students, "Yusuf", 88))