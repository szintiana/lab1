#include "lab1.h"
#include <iostream>
#include <vector>

int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else return gcd(a, b - a);
}

bool prim(int n)
//Parameter: n -  integer
//Gibt einen boolean zurueck
//Ueberprueft ob n ein Primzahl ist
{
    for (int i = 2; i < int(n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> lab1::twin_array(int n)
{
    std::vector<int> liste;
    int anzahl = 0;
    int o = 2;
    while (anzahl < n)
    {
        if (prim(o) and prim(o + 2))
        {
            liste.push_back(o);
            liste.push_back(o + 2);
            anzahl++;
        }
        o++;
    }
    return liste;
}

std::vector<int> lab1::prim_array(int n)
{
    std::vector<int> liste;
    int i = 2;
    int anzahl = 0;
    while (anzahl < n)
    {
        if (prim(i))
        {
            liste.push_back(i);
            anzahl++;
        }
        i++;
    }
    return liste;
}

std::vector<int> lab1::relativ_prim_array(std::vector<int> vektor)
{
    std::vector<int> neue_vektor;
    int maxi = 0, maxLen = 0, currLen = 0, curri = 0, n = vektor.size();
    for (int i = 0; i < n - 1; i++) {
        if (gcd(vektor[i], vektor[i + 1]) <= 1) {
            currLen++;
            if (currLen == 1) curri = i;
        }
        else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxi = curri;
            }
            currLen = 0;
        }
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxi = curri;
    }

    for (int i = maxi; i < maxi + maxLen + 1; i++)
    {
        neue_vektor.push_back(vektor[i]);
    }
    return neue_vektor;
}

std::vector<int> lab1::laengste_untervektor(std::vector<int> vektor)
{
    std::vector<int> neue_vektor;
    int maxi = 0, maxLen = 0, currLen = 0, curri = 0, n = vektor.size();

    for (int i = 0; i < n - 1; i++) {
        if (vektor[i] > vektor[i + 1]) {
            currLen++;
            if (currLen == 1) curri = i;
        }
        else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxi = curri;
            }
            currLen = 0;
        }
    }

    if (currLen > maxLen) {
        maxLen = currLen;
        maxi = curri;
    }


    for (int i = maxi; i < maxi + maxLen + 1; i++)
    {
        neue_vektor.push_back(vektor[i]);
    }
    return neue_vektor;
}
