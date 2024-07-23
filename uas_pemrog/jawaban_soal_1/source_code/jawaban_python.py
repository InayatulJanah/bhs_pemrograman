def factorial(n):
    # Basis kasus: jika n adalah 0 atau 1, kembalikan 1
    if n == 0 or n == 1:
        return 1
    else:
        # Panggil kembali fungsi dengan n-1
        return n * factorial(n - 1)

# Memanggil fungsi factorial
print(factorial(5))  # Output: 120