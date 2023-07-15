#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> Course = {
        {"23CS141", "English"},
        {"23CS151", "Data_Structures"},
        {"23CS143", "Physics"}
    };

    // Task A: Insert new entry if key does not exist
    std::string keyToInsert = "23CS151";
    std::string valueToInsert = "Algorithms";

    auto result = Course.insert({keyToInsert, valueToInsert});
    //     for (const auto& entry : Course) {
    //     std::cout << "Key: " << entry.first << ", Value: " << entry.second << std::endl;
    // }
    if (!result.first) {
        std::cout << "Key " << keyToInsert << " already exists with value " << result.first->second << std::endl;
    } else {
        std::cout << "Inserted new entry with key " << keyToInsert << " and value " << valueToInsert << std::endl;
    }

    // Task B: Print all values in the map
    for (const auto& entry : Course) {
        std::cout << "Key: " << entry.first << ", Value: " << entry.second << std::endl;
    }

    return 0;
}