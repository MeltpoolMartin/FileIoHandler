#include "FileIoHandler.hpp"

namespace fs = std::filesystem;

FileIoHandler::FileIoHandler(std::string& filePath) :
m_FilePath(filePath)
{
    m_FilePath = filePath;
    std::ifstream m_Stream;
}

FileIoHandler::~FileIoHandler() {
    m_Stream.close();
}


std::optional<std::string> FileIoHandler::read() {
    if(fs::exists(m_FilePath)) {
        m_Stream.open(m_FilePath, std::ios::in);
        if(!m_Stream) {
            return {};
        }
        else {
            std::string data;
            std::ostringstream ss;
            ss << m_Stream.rdbuf();
            data = ss.str();
            return data;
        }
    }
    else {
        throw std::invalid_argument("File does not exit");
    }
}