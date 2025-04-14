#pragma once
#include <iostream>
#include <vector>
using namespace std;

#define MAX_DEGREE 100

class SparsePoly {
private:
    int numTerms;
    vector<int> exponents;
    vector<int> coefficients;

public:
    SparsePoly() : numTerms(0) {}

    void read() {
        cout << "항의 개수를 입력하시오: ";
        cin >> numTerms;
        exponents.resize(numTerms);
        coefficients.resize(numTerms);

        for (int i = 0; i < numTerms; ++i) {
            cout << i + 1 << "번째 항의 계수와 차수 입력 (예: 계수 차수): ";
            cin >> coefficients[i] >> exponents[i];
        }
    }

    void display(const char* str) const {
        cout << str << " ";
        for (int i = 0; i < numTerms; ++i) {
            cout << coefficients[i] << "x^" << exponents[i];
            if (i < numTerms - 1) cout << " + ";
        }
        cout << endl;
    }

    void add(SparsePoly& b) {
        SparsePoly result;
        int i = 0, j = 0;

        while (i < numTerms && j < b.numTerms) {
            if (exponents[i] == b.exponents[j]) {
                int sum = coefficients[i] + b.coefficients[j];
                if (sum != 0) {
                    result.coefficients.push_back(sum);
                    result.exponents.push_back(exponents[i]);
                }
                i++; j++;
            }
            else if (exponents[i] > b.exponents[j]) {
                result.coefficients.push_back(coefficients[i]);
                result.exponents.push_back(exponents[i]);
                i++;
            }
            else {
                result.coefficients.push_back(b.coefficients[j]);
                result.exponents.push_back(b.exponents[j]);
                j++;
            }
        }

        while (i < numTerms) {
            result.coefficients.push_back(coefficients[i]);
            result.exponents.push_back(exponents[i]);
            i++;
        }

        while (j < b.numTerms) {
            result.coefficients.push_back(b.coefficients[j]);
            result.exponents.push_back(b.exponents[j]);
            j++;
        }

        *this = result;
        numTerms = result.coefficients.size();
    }
};