M, N = map(int, input().split())

max_revenues = []

for day in range(M):
    sales = list(map(int, input().split()))
    
    max_revenue = max(sales)
    max_revenues.append(max_revenue)

# Output the results
print(' '.join(map(str, max_revenues)))