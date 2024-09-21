#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> result;
    result.reserve(student_scores.size());

    for (const auto score : student_scores) {
        result.push_back(static_cast<int>(score));    
    }
    
    return result;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count{0};

    for (const auto &item: student_scores) {
        if (item <= 40) count++;
    }
    
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> above;

    for (const auto &item: student_scores) {
        if (item >= threshold) above.push_back(item);
    }
    
    return above;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    const int diff = (highest_score - 40) / 4;
    return {41, 41+diff, 41+(diff*2), 41+(diff*3)};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> result;
    result.reserve(student_scores.size());
    
    for (size_t i = 0; i < student_scores.size(); ++i) {
        const int score = student_scores[i];
        const std::string& name = student_names[i];
        
        result.push_back((std::to_string(i+1) + ". " + name + ": " + std::to_string(score)));
    }
    
    return result;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for (size_t i = 0; i < student_scores.size(); ++i) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    
    return "";
}
