# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/WindRiver/workspace/Robot
WS_ROOT_DIR := C:/WindRiver/workspace



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = -$(WIND_BASE)/target/lib/WPILib.a 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Robot/$(MODE_DIR)/Robot.out \
	 Robot_partialImage/$(MODE_DIR)/Robot_partialImage.o


#Rules

# Robot
ifeq ($(DEBUG_MODE),1)
Robot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Robot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Robot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Robot/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Robot/$(MODE_DIR)/% : IDE_LIBRARIES = -$(WIND_BASE)/target/lib/WPILib.a 
Robot/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Robot/$(MODE_DIR)/% : DEFINES = 
Robot/$(MODE_DIR)/% : EXPAND_DBG = 0
Robot/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Robot/$(MODE_DIR)/% : CPU = PPC603
Robot/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Robot/$(MODE_DIR)/% : TOOL = gnu
Robot/$(MODE_DIR)/% : TOOL_PATH = 
Robot/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Robot/$(MODE_DIR)/% : LIBPATH = 
Robot/$(MODE_DIR)/% : LIBS = 
Robot/$(MODE_DIR)/% : OBJ_DIR := Robot/$(MODE_DIR)

OBJECTS_Robot = Robot_partialImage/$(MODE_DIR)/Robot_partialImage.o

Robot/$(MODE_DIR)/Robot.out : $(OBJECTS_Robot)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Robot) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Robot) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Robot/$(MODE_DIR)/Robot_compile_file : $(FILE) ;

_clean :: Robot/$(MODE_DIR)/Robot_clean

Robot/$(MODE_DIR)/Robot_clean : 
	$(TRACE_FLAG)if [ -d "Robot" ]; then cd "Robot"; rm -rf $(MODE_DIR); fi


# Robot_partialImage
ifeq ($(DEBUG_MODE),1)
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Robot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Robot_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Robot_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = -$(WIND_BASE)/target/lib/WPILib.a 
Robot_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Robot_partialImage/$(MODE_DIR)/% : DEFINES = 
Robot_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Robot_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Robot_partialImage/$(MODE_DIR)/% : CPU = PPC603
Robot_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Robot_partialImage/$(MODE_DIR)/% : TOOL = gnu
Robot_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
Robot_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
Robot_partialImage/$(MODE_DIR)/% : LIBPATH = 
Robot_partialImage/$(MODE_DIR)/% : LIBS = 
Robot_partialImage/$(MODE_DIR)/% : OBJ_DIR := Robot_partialImage/$(MODE_DIR)

Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/DriveTrain.o : C:/WindRiver/workspace/Robot/Robot/DriveTrain.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/EBBot.o : C:/WindRiver/workspace/Robot/Robot/EBBot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/HumanController.o : C:/WindRiver/workspace/Robot/Robot/HumanController.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/Robot.o : C:/WindRiver/workspace/Robot/Robot/Robot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Robot_partialImage = Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/DriveTrain.o \
	 Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/EBBot.o \
	 Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/HumanController.o \
	 Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/Robot.o

Robot_partialImage/$(MODE_DIR)/Robot_partialImage.o : $(OBJECTS_Robot_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_Robot_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Robot_partialImage/$(MODE_DIR)/Robot_partialImage_compile_file : $(FILE) ;

_clean :: Robot_partialImage/$(MODE_DIR)/Robot_partialImage_clean

Robot_partialImage/$(MODE_DIR)/Robot_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Robot_partialImage" ]; then cd "Robot_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/DriveTrain.d Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/EBBot.d Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/HumanController.d \
	 Robot_partialImage/$(MODE_DIR)/Objects/Robot/Robot/Robot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
