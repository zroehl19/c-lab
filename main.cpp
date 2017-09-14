/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on September 12, 2017, 1:57 PM
 */

#include <iostream>

using namespace std;

/*
 * everything
 */
int main() {
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof(vector)/sizeof(vector[0]);
    
    int smallest;
    int *p1;
    
    p1 = vector;
    smallest = *p1;
    
    for(int i; i < n; i++)
    {
        if(*p1 > smallest)
        {
            *p1 = smallest;
            
            p1++;
        }
        else
        {
            p1++;
        }
    }
    
    cout << *p1;
}

