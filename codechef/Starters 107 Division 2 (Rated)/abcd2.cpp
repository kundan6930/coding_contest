#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::string filename = "hosts_access_log_00.txt";
    std::string output_filename = "bytes_" + filename.substr(0, filename.size() - 4) + ".txt";

    std::ifstream input_file(filename);
    std::ofstream output_file(output_filename);

    if (input_file.is_open() && output_file.is_open()) {
        int total_large_requests = 0;
        int total_large_bytes = 0;

        std::string line;
        while (std::getline(input_file, line)) {
            std::istringstream iss(line);
            std::string _, _, _, response_code_str, bytes_sent_str;

            if (!(iss >> _ >> _ >> _ >> response_code_str >> bytes_sent_str)) {
                continue;
            }

            int response_code = std::stoi(response_code_str);
            int bytes_sent = std::stoi(bytes_sent_str);

            if (response_code == 200 && bytes_sent > 5000) {
                total_large_requests++;
                total_large_bytes += bytes_sent;
            }
        }

        output_file << total_large_requests << "\n";
        output_file << total_large_bytes << "\n";

        std::cout << "Output written to " << output_filename << std::endl;
    } else {
        std::cerr << "Error opening files." << std::endl;
    }

    input_file.close();
    output_file.close();

    return 0;
}