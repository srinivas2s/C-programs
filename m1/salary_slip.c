#include <stdio.h>

int main() {
    float BP = 20000;   // Basic Pay
    float DA, HRA, PF, GP, IT, NetSalary;

    // Calculate allowances and deductions
    DA = 0.50 * BP;          // 50% of BP
    HRA = 0.12 * BP;         // 12% of BP
    PF = 0.10 * BP;          // 10% of BP (deduction)

    // Gross Pay
    GP = BP + DA + HRA;

    // Income Tax (5% of GP)
    IT = 0.05 * GP;

    // Net Salary = GP - (PF + IT)
    NetSalary = GP - (PF + IT);

    // Display results
    printf("Basic Pay (BP) = %.2f\n", BP);
    printf("Dearness Allowance (DA) = %.2f\n", DA);
    printf("House Rent Allowance (HRA) = %.2f\n", HRA);
    printf("Provident Fund (PF) = %.2f\n", PF);
    printf("Gross Pay (GP) = %.2f\n", GP);
    printf("Income Tax (IT) = %.2f\n", IT);
    printf("Net Salary = %.2f\n", NetSalary);

    return 0;
}