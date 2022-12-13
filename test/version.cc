#include "gtest/gtest.h"

#include "cbufpp/version.hh"


using namespace cbufpp;

TEST(Version, generate_name) {
  std::stringstream strm;
  strm << Version::kMajor << "." << Version::kMinor << "." << Version::kPatch;

  EXPECT_EQ(Version::kName, strm.str());
}
