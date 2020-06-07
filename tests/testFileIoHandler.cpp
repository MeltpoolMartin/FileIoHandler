#include "gtest/gtest.h"
#include "FileIoHandler.hpp"

TEST(FileIOHandlerTest, Read_ReadWithInvalidPath_CanNotRead) {
    std::string invalidPath = "";

    FileIoHandler fh(invalidPath);
    EXPECT_THROW(fh.read(), std::invalid_argument);
}

TEST(FileIOHandlerTest, Read_ReadWithValidPath_CanRead) {
    std::string validPath = "../../tests/data/text_file.txt";
    std::string expectdData = "This is a text file.";

    FileIoHandler fh(validPath);
    EXPECT_EQ(expectdData, fh.read());
}