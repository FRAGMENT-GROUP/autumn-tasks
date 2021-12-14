
#ifndef boolean_h
#define boolean_h

//task71
int check_positivity(int integer_a){
    if (integer_a > 0) {
            return 0;
        }
        else {
            throw "number must be > 0";
        }
}

//task72
int check_odd(int integer_a){
    if (integer_a % 2) {
            return 0;
        }
        else {
            throw "number must be divisible with the remainder by 2";
        }
}

//task73
int check_even(int integer_a){
    if (integer_a % 2) {
        return 0;
    }
    else {
        throw "number must be divisible with the remainder by 2";
    }
}

//task74
int check_truth_of_statement(int integer_a, int integer_b){
    if (integer_a > 2 && integer_b <= 3) {
     return 0;
     }
     else {
         throw "number must be > 2 and <= 3";
     }
}

//task75
int check_truth_of_statement_2(int integer_a, int integer_b){
    if (integer_a >= 0 && integer_b < -2) {
        return 0;
     }
     else {
         throw "numbers must be >= 0 and < - 2";
     }
}

//task76
int double_inequality_is_true_or_not(int integer_a, int integer_b, int integer_c){
    if (integer_a < integer_b && integer_b < integer_c) {
        return 0;
     }
     else {
         throw "number_a must be < number_b and number_b < number_c";
     }
}

//task77
int number_between_numbers(int integer_a, int integer_b, int integer_c){
    if (integer_b > integer_a && integer_b < integer_c){
     return 0;
     }
    if (integer_b < integer_a && integer_b > integer_c){
        return 0;
     }
     else {
        throw "you pass wrong values";
     }
}

//task78
int all_numbers_are_odd(int integer_a, int integer_b){
    if (integer_a % 2 && integer_b % 2){
        return 0;
    }
    else {
        throw "number_a must be divisible with the remainder by 2 and number_b do the same thing";
    }
}

//task79
int at_least_one_number_odd(int integer_a, int integer_b){
    if (integer_a % 2 || integer_b % 2){
        return 0;
    }
    else {
        throw "at_least_one_number must be divisible with the remainder by 2";
    }
}

//task80
bool exactly_one_number_odd(int integer_a, int integer_b){
    if((integer_a % 2 != 0 && integer_b % 2 == 0) || (integer_a % 2 == 0 && integer_b % 2 != 0)){
        return true;
    }
    return false;
}

//task81
bool numbers_have_same_parity(int integer_a, int integer_b){
    if((integer_a % 2 == 0 && integer_b % 2 == 0) || (integer_a % 2 != 0 && integer_b % 2 != 0)){
        return true;
    }
    return false;
}

//task82
bool numbers_are_positive(int integer_a, int integer_b, int integer_c){
    if (integer_a > 0 && integer_b > 0 && integer_c > 0){
        return true;
    }
    return false;
}

//task83
bool at_least_one_number_positive(int integer_a, int integer_b, int integer_c){
    if (integer_a > 0 || integer_b > 0 || integer_c > 0){
        return true;
    }
    return false;
}

//task84
bool exactly_one_of_numbers_positive(int integer_a, int integer_b, int integer_c){
    if ((integer_a > 0 && integer_b < 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b > 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b < 0 && integer_c > 0)){
        return true;
    }
    return false;
}

//task85
bool exactly_two_of_numbers_positive(int integer_a, int integer_b, int integer_c){
    if ((integer_a > 0 && integer_b > 0 && integer_c < 0)){
        return true;
    }
    if ((integer_a < 0 && integer_b > 0 && integer_c > 0)){
        return true;
    }
    if ((integer_a > 0 && integer_b < 0 && integer_c > 0)){
        return true;
    }
    return false;
}

//task86
bool number_is_even_two_digit(int integer_a){
    if (integer_a % 2 == 0 && integer_a > 9 && integer_a < 100){
        return true;
    }
    return false;
        
}

//task87
bool number_is_odd_three_digit(int three_digit_num){
    if (three_digit_num != 0 && three_digit_num > 99 && three_digit_num < 1000){
        return true;
    }
    return false;
}

//task88
bool among_given_integers_at_least_one_matching_pair(int integer_a, int integer_b, int integer_c){
    if (integer_a == integer_c){
        return true;
    }
    if (integer_b == integer_c){
        return true;
    }
    if (integer_b == integer_a){
        return true;
    }
    return false;
}

//task89
bool among_given_integers_at_least_one_pair_of_mutually_opposite(int integer_a, int integer_b, int integer_c){
    if (integer_a == -integer_c){
        return true;
    }
    if (integer_b == -integer_c){
        return true;
    }
    if (integer_b == -integer_a){
        return true;
    }
    return false;
}

//task90
bool all_digits_of_three_digit_number_are_different(int three_digit_num){
    if (three_digit_num / 100 != three_digit_num % 100 / 10){
        return true;
    }
    if (three_digit_num / 100 != three_digit_num % 10){
        return true;
    }
    if (three_digit_num % 100 / 10 != three_digit_num % 10){
        return true;
    }
    return false;
}

//task91
bool digits_of_three_digit_number_form_increasing_sequence(int three_digit_num){
    if ((three_digit_num / 100 < three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) < (three_digit_num % 10)){
        return true;
    }
    return false;
}

//task92
bool digits_of_three_digit_number_decreasing_sequence(int three_digit_num){
    if ((three_digit_num / 100 < three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) < (three_digit_num % 10)){
        return true;
    }
    if ((three_digit_num / 100 > three_digit_num % 100 / 10)){
        return true;
    }
    if ((three_digit_num % 100 / 10) > (three_digit_num % 10)){
        return true;
    }
    return false;
}

//task93
bool four_digit_palindrome_number(int four_digit_num){
    if ((four_digit_num % 10 == four_digit_num / 1000)){
        return true;
    }
    if ((four_digit_num % 100 / 10 == four_digit_num % 1000 / 100)){
        return true;
    }
    return false;
}

//task94.1
double discriminant_(int ratio_a, int ratio_b, int ratio_c){
    return pow(ratio_b, 2) - 4 * ratio_a * ratio_c;
}

//task94
bool does_quadratic_equation_have_real_roots(int ratio_a, int ratio_b, int ratio_c){
    if (ratio_a == 0){
        throw "ratio_a must be != 0";
    }
    if (discriminant(ratio_a, ratio_b, ratio_c) > 0){
        return true;
    }
    return false;
}

//task95
bool does_point_lies_in_second_coordinate_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x < 0 && coordinate_y > 0){
        return true;
    }
    return false;
}

//task96
bool does_point_lies_in_fourth_coordinate_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x > 0 && coordinate_y < 0){
        return true;
    }
    return false;
}

//task97
bool does_point_lies_in_second_or_third_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x < 0 && coordinate_y > 0){
        return true;
    }
    if (coordinate_x < 0 && coordinate_y < 0){
        return true;
    }
    return false;
}

//task98
bool does_point_lies_in_first_or_third_quarter(int coordinate_x, int coordinate_y){
    if (coordinate_x > 0 && coordinate_y > 0){
        return true;
    }
    if (coordinate_x < 0 && coordinate_y < 0){
        return true;
    }
    return false;
}

//task99
bool does_point_lies_in_rectangle_and_sides_are_parallel_coord_axes(int coordinate_x, int coordinate_y, int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if (coordinate_x_1 < coordinate_x &&
        coordinate_x < coordinate_x_2 &&
        coordinate_y_2 < coordinate_y &&
        coordinate_y < coordinate_y_1){
        return true;
    }
    return false;
}
//task100
bool does_triangle_equilateral(int integer_a, int integer_b, int integer_c){
    if ((integer_a == integer_b) &&
        (integer_a == integer_c) &&
        (integer_b == integer_c)){
        return true;
    }
    return false;
}

//task101
bool does_triangle_isosceles(int integer_a, int integer_b, int integer_c){
    if (integer_a == integer_b){
        return true;
    }
    if (integer_a == integer_c){
        return true;
    }
    if (integer_b == integer_c){
        return true;
    }
    return false;
}

//task102
bool does_triangle_rectangular(int integer_a, int integer_b, int integer_c){
    if (integer_a * integer_a == (integer_b * integer_b) + (integer_c * integer_c)){
        return true;
    }
    if(integer_b * integer_b == (integer_a * integer_a) + (integer_c * integer_c)){
        return true;
    }
    if (integer_c * integer_c == (integer_a * integer_a) + (integer_b * integer_b)){
        return true;
    }
    return false;
}

//task103
bool does_there_triange(int integer_a, int integer_b, int integer_c){
    if((integer_a + integer_b > integer_c) &&
       (integer_a + integer_c > integer_b) &&
       (integer_b + integer_c > integer_a)){
        return true;
    }
    return false;
}

//task104
bool does_field_white(int coordinate_x, int coordinate_y){
    if((coordinate_x + coordinate_y) % 2 != 0){
        return true;
    }
    return false;
}

//task105
bool fields_have_same_color(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if((coordinate_x_1 + coordinate_y_1) % 2 ==
       (coordinate_x_2 + coordinate_y_2) % 2){
        return true;
    }
    return false;
}

//task106
bool does_rook_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(coordinate_x_1 == coordinate_x_2){
        return true;
    }
    if(coordinate_y_1 == coordinate_y_2){
        return true;
    }
    return false;
}

//task107
bool does_king_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) <= 1 &&
       abs(coordinate_y_1 - coordinate_y_2) <= 1){
        return true;
    }
    return false;
    
}

//task108
bool does_elephant_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) ==
       abs(coordinate_y_1 - coordinate_y_2)){
        return true;
    }
    return false;
}

//taks109
bool does_queen_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(coordinate_x_1 == coordinate_x_2){
        return true;
    }
    if(coordinate_y_1 == coordinate_y_2){
        return true;
    }
    if(coordinate_x_1 - coordinate_y_1 == coordinate_x_2 - coordinate_y_2){
        return true;
    }
    if(coordinate_x_1 + coordinate_y_2 == coordinate_x_2 + coordinate_y_2){
        return true;
    }
    return false;
}

//task110
bool does_hourse_able_to_move_from_one_field_to_another_in_one_move(int coordinate_x_1, int coordinate_y_1, int coordinate_x_2, int coordinate_y_2){
    if(abs(coordinate_x_1 - coordinate_x_2) == 1 && abs(coordinate_y_1 - coordinate_y_2) == 2){
        return true;
    }
    if(abs(coordinate_x_1 - coordinate_x_2) == 2 && abs(coordinate_y_1 - coordinate_y_2) == 1){
        return true;
    }
    return false;
    
#endif /* boolean_h */
