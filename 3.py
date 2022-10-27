# def pattern(n):
#     k = n - 2
#     for i in range(n, -1, -1):
#         for j in range(k, 0, -1):
#             print(end = " ")
#         k = k + 1
#         for j in range(0, i + 1):
#             print("* ", end = "")
#         print("\r")
#     k = 2 * n - 2
#     for i in range(0, n + 1):
#         for j in range(0, k):
#             print(end = "")
#         k = k - 1
#         for j in range(0, i + 1):
#             print("* ", end = "")
#         print("\r")

def pattern(width: int = 5):
    for i in range(-width, width + 1):
        if i == 0:
            continue
        print(''.join([''.join([' '] * abs(abs(i) - width)), ' '.join(['*'] * abs(i))]))
    
pattern(5)

# * * * * *
#  * * * *
#   * * *
#    * *
#     *
#     *
#    * *
#   * * *
#  * * * *
# * * * * *
        