import math

# Constants used in the calculation
sqrt_7_over_6 = math.sqrt(7) / 6
denominator = 1 + 2 * math.sqrt(2)


# Function to compute the maximum volume of the pyramid
def max_volume(A_total):
    s_squared = A_total / denominator
    volume = sqrt_7_over_6 * (s_squared ** (3 / 2))
    return volume


# Sample test function to simulate input and output
def process_input(inputs):
    results = []
    for A_total in inputs:
        if A_total < 0:  # Stop processing when a negative value is encountered
            break
        volume = max_volume(A_total)
        results.append(f"{volume:.4f}")
    return results


# Example input set for testing
test_inputs = [0.01, 0.02, -1.0]
print(process_input(test_inputs))
