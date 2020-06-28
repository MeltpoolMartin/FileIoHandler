#include "FileIoHandler.hpp"
#include <sstream>
#include <stdexcept>

namespace fs = std::filesystem;

FileIoHandler::FileIoHandler(std::string &filePath) : m_FilePath(filePath) {
  m_FilePath = filePath;
}

std::optional<std::string> FileIoHandler::read() {
  if (fs::exists(m_FilePath)) {
    std::ifstream stream;
    std::string data;
    std::ostringstream ss;
    stream.open(m_FilePath, std::ios::in);
    ss << stream.rdbuf();
    data = ss.str();
    stream.close();
    if (data.empty()) {
      return {};
    } else {
      return data;
    }
  } else {
    throw std::invalid_argument("File does not exit");
  }
}

void FileIoHandler::write(std::string &data) {
  std::ofstream stream;
  stream.open(m_FilePath, std::ios::out);
  if (stream.is_open()) {
    stream << data;
    stream.close();
  } else {
    throw std::invalid_argument("Invalid file path");
  }
}