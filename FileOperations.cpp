#include "FileOperations.h"
#include <fstream>
void AppendToFile(const std::string& filename, const std::string& content) {
	std::ofstream file;
	file.open(filename, std::ios_base::app);
	file << content;
	file.close();
}
void TruncateFile(const std::string& filename) {
	std::ofstream file;
	file.open(filename, std::ios_base::trunc);
	file.close();
}