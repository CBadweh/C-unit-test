# Name of component under test
COMPONENT_NAME = integration

# Dynamically generate absolute paths
# From https://matheusmbar.com/bugfree-robot/2019/04/05/makefile-first-test.html
MAKEFILE_DIR = $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
PROJECT_DIR = $(realpath $(MAKEFILE_DIR)../..)
SRC_DIR = $(PROJECT_DIR)/src
TEST_DIR = $(PROJECT_DIR)/tests

# Location of CppUTest (if not already set)
CPPUTEST_HOME ?= $(PROJECT_DIR)/tools/cpputest

# Include and source files for component under test
# Include BOTH components: sum and average
INCLUDE_DIRS = \
    $(SRC_DIR)/sum \
    $(SRC_DIR)/average \
    $(CPPUTEST_HOME)/include
# Source dirs of both components
SRC_DIRS = \
    $(SRC_DIR)/sum \
    $(SRC_DIR)/average

# Link BOTH component libraries
LIBS = \
    lib/libsum.a \
    lib/libaverage.a
	
# Includes CppUTest header files
INCLUDE_DIRS += $(CPPUTEST_HOME)/include

# Directories containing the unit tests
TEST_SRC_DIRS = $(TEST_DIR)/$(COMPONENT_NAME)

# Run MakefileWorker.mk with the variables set in this Makefile
include $(CPPUTEST_HOME)/build/MakefileWorker.mk