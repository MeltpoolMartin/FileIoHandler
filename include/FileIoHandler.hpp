#include <fstream>
#include <sstream>
#include <filesystem>
#include <optional>
#include <stdexcept>

class FileIoHandler {
    private:
        std::filesystem::path       m_FilePath;
        std::ifstream               m_Stream;
    
    public:
                                    FileIoHandler(std::string& filePath);
                                    ~FileIoHandler();
        std::optional<std::string>  read();

};