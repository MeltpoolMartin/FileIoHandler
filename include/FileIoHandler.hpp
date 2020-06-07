#include <fstream>
#include <filesystem>
#include <optional>

class FileIoHandler {
    private:
        std::filesystem::path       m_FilePath;
        std::ifstream               m_Stream;
    
    public:
                                    FileIoHandler(std::string& filePath);
                                    ~FileIoHandler();
        std::optional<std::string>  read();

};