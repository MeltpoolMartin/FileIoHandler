#include <fstream>
#include <stdexcept>

class FileIoHandler {
    private:
        std::string                 m_FilePath;
        std::ifstream               m_Stream;
    
    public:
                                    FileIoHandler(std::string& filePath);
                                    ~FileIoHandler();
        std::string                 read();

};