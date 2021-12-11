
#ifndef integer_h
#define integer_h
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

//task41
double number_of_full_meters(double distance_l){
    return distance_l / 100;
}

//task42
double number_of_full_tons(double weight_m){
    return weight_m / 1000;
}

//task 43
double number_of_full_kbit(double size){
    return size / 1024;
}

//task44
double number_of_segments_b_placed_on_segment_a(int segment_a, int segments_b){
    if (segment_a > segments_b){
        return segment_a / segments_b;
    }
    else{
        throw "You pass wrong values";
    }
}

//task45
int length_of_unoccupied_part_of_segment_a(int segment_a, int segments_b){
    if (segment_a > segments_b){
        return segment_a % segments_b;
    }
    else{
        throw "You pass wrong values";
    }
}

//task46.1
int dozens(int two_digit_number){
    return two_digit_number / 10;
}

//task46.2
int units(int two_digit_number){
    return two_digit_number % 10;
}
//task46
void dozens_and_units_of_number(int two_digit_number){
    std::cout << dozens(two_digit_number) << std::endl
    << units(two_digit_number) << std::endl;
}

//task47.1
int sum_of_twodigit_number(int two_digit_number){
    return dozens(two_digit_number) + units(two_digit_number);
}
//task47.2
int multiplication_of_twodigit_number(int two_digit_number){
    return dozens(two_digit_number) * units(two_digit_number);
}
//task47
void sum_and_miltiplication_of_twodigit_number(int two_digit_number){
    std::cout << sum_of_twodigit_number(two_digit_number) << std::endl
    << multiplication_of_twodigit_number(two_digit_number) << std::endl;
}

//task48
int twodigit_number_obtained_by_rearranging_digits(int two_digit_number){
    return (two_digit_number % 10 * 10) + (two_digit_number / 10);
}

//task49
int first_digit_out_of_hundreds(int three_digit_number){
    return three_digit_number / 100;
}

//task50.1
int units_of_number_three_digit_number(int three_digit_number){
    return three_digit_number % 10;
}
//task 50.2
int dozens_of_number_three_digit_number(int three_digit_number){
    return three_digit_number % 100 / 10;
}

//task 50
void units_dozens_of_number_three_digit_number(int three_digit_number){
    std::cout << units_of_number_three_digit_number(three_digit_number) << std::endl
    << dozens_of_number_three_digit_number(three_digit_number) << std::endl;
}

//task 51.1
int first_digit_out_of_three_digit_number_2(int three_digit_number){
    return three_digit_number / 100;
}

//task51.2
int units_of_number_three_digit_number_2(int three_digit_number){
    return three_digit_number % 10;
}
//task 51.3
int dozens_of_number_three_digit_number_2(int three_digit_number){
    return three_digit_number % 100 / 10;
}

//task 51.4
int sum_of_of_numbers_three_digit_number(int three_digit_number){
    return first_digit_out_of_three_digit_number_2(three_digit_number)
    + units_of_number_three_digit_number_2(three_digit_number)
    + dozens_of_number_three_digit_number_2(three_digit_number);
}
//task51.5
int mult_of_of_numbers_three_digit_number(int three_digit_number){
    return first_digit_out_of_three_digit_number_2(three_digit_number)
    * units_of_number_three_digit_number_2(three_digit_number)
    * dozens_of_number_three_digit_number_2(three_digit_number);
}
//task51
void sum_and_multiplication_of_numbers_three_digit_number(int three_digit_number){
    std::cout << sum_of_of_numbers_three_digit_number(three_digit_number)
    << std::endl << mult_of_of_numbers_three_digit_number(three_digit_number)
    << std::endl;
}

//task52
int three_digit_number_from_right_to_left(int three_digit_number){
    return (three_digit_number % 10) * 100
    + (three_digit_number % 100 / 10)
    * 10 + (three_digit_number / 100);
}

//task53
int crossed_out_first_digit_on_left_and_attributed_to_right(int three_digit_number){
    return (three_digit_number % 100 / 10 * 100)
    + (three_digit_number % 10) * 10
    + (three_digit_number / 100);
}

//task 54
int crossed_out_first_digit_on_right_and_attributed_to_right(int three_digit_number){
    return (three_digit_number % 10) * 100
    + (three_digit_number / 100) * 10
    + (three_digit_number % 100 / 10);
}

//task55.1
int number_obtained_by_rearranging_hundreds(int three_digit_number){
    return three_digit_number / 100;
}

//task55.2
int number_obtained_by_rearranging_dozens(int three_digit_number){
    return (three_digit_number / 10) % 10;
}

//task55.3
int number_obtained_by_rearranging_orig_number(int three_digit_number){
    return three_digit_number % 10;
}

//task 55
int num_obtained_by_permuting_digits_of_hundr_and_tens_of_orig_num(int three_digit_number){
    return number_obtained_by_rearranging_dozens(three_digit_number) * 100
    + number_obtained_by_rearranging_hundreds(three_digit_number) * 10
    + number_obtained_by_rearranging_orig_number(three_digit_number);
}

//task 56
int num_obtained_by_permuting_digits_of_tens_and_units_of_orig_num(int theree_digit_number){
    return (theree_digit_number / 100) * 100
    + (theree_digit_number % 10) * 10
    + (theree_digit_number % 100 / 10);
}

//task 57
int number_corresponding_category_of_hundreds(int number){
    if (number <= 999){
        throw "number must be > 999";
    }
    return number % 1000 / 100;
}

//task 58
int number_corresponding_category_of_thousands(int number){
    if (number <= 999){
        throw "number must be > 999";
    }
    return number % 10000/1000;
}

//task 59
int number_of_full_minutes_have_passed_since_beginning_of_day(int seconds){
    return seconds / 60;
}

//task 60
int number_of_full_hours_have_passed_since_beginning_of_day(int seconds){
    return seconds / 60 / 60;
}
    
//task61
int number_of_seconds_have_passed_since_beginning_of_last_minute(int seconds){
    return seconds % 60;
}

//task62
int number_of_seconds_have_passed_since_beginning_of_last_hour(int seconds){
    return seconds % 3600;
}

//task63
int number_of_full_minutes_have_passed_since_beginning_of_last_hour(int seconds){
    return seconds % 3600 / 60;
}

//task64
int determine_number_of_day_of_week(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return integer % 7;
}

//task65
int determine_number_of_day_of_week_starts_from_thursday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return (integer + 3) % 7;
}

//task66
int determine_number_of_day_of_week_starts_from_tuesday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return  (integer % 7) + 1;
}

//task67
int determine_number_of_day_of_week_starts_from_saturday(int integer){
    if (integer < 1 || integer > 365){
        throw "number must be > 1 and < 365";
    }
    return ((integer + 4) % 7) + 1;
}

//task68.1
int determine_number_of_day_of_week_per_week(int days_in_year, int days_in_week){
    if (days_in_week < 1.0 || days_in_week > 7.0){
        throw "number must be > 1 and < 7";
    }
    return  days_in_week - 2;
}
//task68.2
int determine_number_of_day_of_week_per_year(int days_in_year, int days_in_week){
    if (days_in_year < 1 || days_in_year > 365){
        throw "number must be > 1 and < 365";
    }
        
    return ((days_in_year
             + determine_number_of_day_of_week_per_week(days_in_year, days_in_week))
            % 7) + 1;
}
//task68
void determine_number_of_day_of_week_conclusion(int days_in_year, int days_in_week){
    std::cout << determine_number_of_day_of_week_per_year(days_in_year, days_in_week) << std::endl;
}

//task 69.1
int max_possible_num_of_squares_on_rectangle(int positive_integer_a, int positive_integer_b, int positive_integer_c){
    return positive_integer_a * positive_integer_b;
}
//task 69.2
int area_of_unoccupied_part_of_rectangle(int positive_integer_c){
    return positive_integer_c * positive_integer_c;
}
//task69
int number_of_squares_placed_on_rectangle(int positive_integer_a, int positive_integer_b, int positive_integer_c){
    return max_possible_num_of_squares_on_rectangle(positive_integer_a, positive_integer_b, positive_integer_c) /
    area_of_unoccupied_part_of_rectangle(positive_integer_c);
}

//task70
int determine_appropriate_century_number(int number_of_certain_year){
    if (number_of_certain_year < 0){
        throw "number must be > 0";
    }
    return (number_of_certain_year / 100) + 1;
}


#endif /* integer_h */
