# Ideal Gas Law Solver

A technical utility written in C for thermodynamic calculations using the ideal gas law (Clapeyron equation).

The program allows for calculating any missing variable from the pV = nRT equation based on user-provided data.

Key technical details:
- Language: C
- Gas Constant (R): 8.314 J/(mol·K)
- Calculations: Pressure (Pa), Volume (m^3), Substance amount (mol), Temperature (K)

How to use:
1. Compile the code: g++ main.c -o gas_solver
2. Choose which parameter you want to find (P, V, n, or T).
3. Enter the remaining three physical quantities when prompted.
