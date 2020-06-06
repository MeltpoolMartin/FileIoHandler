#include "FileIoHandler.hpp"


FileIoHandler::FileIoHandler(std::string& filePath) :
m_FilePath(filePath)
{
}

FileIoHandler::~FileIoHandler() {
    m_Stream.close();
}


std::string FileIoHandler::read() {
    std::ifstream m_Stream(m_FilePath);
    if(!m_Stream.is_open()) {
        throw std::invalid_argument("File path could not be opened");
    }
    else {
        std::string readData;
        m_Stream >> readData;
        return readData;
    }
}