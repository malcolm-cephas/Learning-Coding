# Exp 3: Vector and Matrix operations
v1 <- c(1, 2, 3); v2 <- c(4, 5, 6)
print("Vector ops:")
print(v1 + v2); print(v1 * v2)

# Matrices
m <- matrix(1:9, nrow=3, ncol=3)
v <- c(1, 1, 1)
print("Matrix * Vector multiplication:")
print(m %*% v)
