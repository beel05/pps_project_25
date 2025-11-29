// item.h
#ifndef ITEM_H
#define ITEM_H

typedef struct {
    char name[50];
    int days;           // number of historical days
    double *sales;      // dynamic array for daily sales
    double leadTime;    // lead time in days
} Item;

// Forecasting functions
double moving_average(double *sales, int n, int window);
double weighted_moving_average(double *sales, int n, int window);

// Statistics functions
double compute_mape(double *actual, double *forecast, int n);
double compute_stddev(double *sales, int n);

#endif
