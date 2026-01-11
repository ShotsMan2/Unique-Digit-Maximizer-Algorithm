# Unique Digit Maximizer Algorithm

This project implements a numerical search algorithm in C to solve a specific constraint satisfaction problem: finding the largest integer $N < 10,000$ where all digits are distinct.

## 🧮 Mathematical Constraint

The problem requires finding the maximum $N$ such that for a number composed of digits $d_1 d_2 d_3 d_4$:

$$d_i \neq d_j \quad \forall \quad i \neq j$$

### Optimization Strategy: Reverse Iteration
Instead of checking numbers from $0$ upwards (which would require 9876 checks), the algorithm employs a **Greedy Approach** by starting from the upper bound ($10,000$) and decrementing.

* **Why?** The first valid number encountered from the top is guaranteed to be the maximum.
* **Efficiency:** This reduces the computational cost significantly compared to a forward search.

## ⚙️ How It Works

1.  **Initialization:** Sets the search anchor at 10,000.
2.  **Decomposition:** Inside the loop, the integer is broken down into individual digits using modular arithmetic (`%`) and integer division (`/`).
    * $d_1 = (N / 1000) \% 10$
    * $d_2 = (N / 100) \% 10$
    * ...and so on.
3.  **Validation:** Checks the condition: `if (d1 != d2 && d1 != d3 ...)`
4.  **Termination:** The moment the condition is met, the loop breaks (`break`) and outputs the result.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o unique_finder
    ```
2.  Run the executable:
    ```bash
    ./unique_finder
    ```
3.  Output: `sonuc: 9876`

---
*This repository demonstrates digit extraction logic and search optimization in C.*
