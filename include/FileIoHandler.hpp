#include <filesystem>
#include <fstream>
#include <optional>

class FileIoHandler {
 private:
  std::filesystem::path m_FilePath;

 public:
  FileIoHandler(std::string &filePath);
  std::optional<std::string> read();
  void write(std::string &data);
};