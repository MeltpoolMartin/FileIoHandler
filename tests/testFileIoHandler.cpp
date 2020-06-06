#include "gtest/gtest.h"
#include "FileIoHandler.hpp"

TEST(FileIOHandlerTest, Read_ReadWithInvalidPath_CanNotRead) {
    std::string invalidPath = "";

    FileIoHandler fh(invalidPath);
    EXPECT_THROW(fh.read(), std::invalid_argument);
}