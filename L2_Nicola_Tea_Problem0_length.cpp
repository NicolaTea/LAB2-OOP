//
// Created by Asus on 3/6/2024.
//
#include"L2_Nicola_Tea_Problem0_length.h"
#include<string>
using namespace std;


Length::Length(double val,  string u):  value(val), unit(u) {}

double Length::get_value() {
    return value;
}

string Length::get_unit() {
    return unit;
}

Length Length::add(Length other) {
    if (unit == other.unit) {
        return Length(value + other.value, unit);
    } else {

        return Length(0, "Incompatible units.");
    }
}

Length Length::subtract(Length other) {
    if (unit == other.unit) {
        return Length(value - other.value, unit);
    } else {

        return Length(0, "Incompatible units.");
    }
}

Length Length::scale(double factor) {
    return Length(value * factor, unit);
}

Length Length::divide(double divisor) {
    if (divisor != 0) {
        return Length(value / divisor, unit);
    } else {

        return Length(0, "Division by zero.");
    }
}

string Length::text() {                       //to_string = it is one of the method to convert the value into string
    return std::to_string(value) + " " + unit;
}

int Length::compare(Length other) {
    if (value < other.value) {
        return -1;
    } else if (value > other.value) {
        return 1;
    } else {
        return 0;
    }
}