#include <vector>


struct Course {
Course() {}
};


struct Student {
Student() {}
    std::vector<Course> mainCourses; //Most important; most abundant
    std::vector<Course> secondaryCourses; //Less important; more obscure
    std::vector<Course> backupCourses; //Backup if secondary course not avalible for schedule
};