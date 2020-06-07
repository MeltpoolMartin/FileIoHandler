#include "gtest/gtest.h"
#include "FileIoHandler.hpp"

TEST(FileIOHandlerTest, Read_ReadWithInvalidPath_CanNotRead) {
    std::string invalidPath = "";

    FileIoHandler fh(invalidPath);
    EXPECT_THROW(fh.read(), std::invalid_argument);
}

TEST(FileIOHandlerTest, Read_ReadWithValidTextFile_HasValue) {
    std::string validPath = "../../tests/data/text_file.txt";
    std::string expectdData = "This is a text file.";

    FileIoHandler fh(validPath);
    std::optional<std::string> readResult = fh.read();
    EXPECT_TRUE(readResult.has_value());
    EXPECT_EQ(expectdData, readResult);
}

TEST(FileIOHandlerTest, Read_ReadWithEmptyTextFile_HasNoValue) {
    std::string validPath = "../../tests/data/empty_text_file.txt";

    FileIoHandler fh(validPath);
    std::optional<std::string> readResult = fh.read();
    EXPECT_FALSE(readResult.has_value());
}