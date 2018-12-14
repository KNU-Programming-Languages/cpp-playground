##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=AMandelbrotClass
ConfigurationName      :=Debug
WorkspacePath          :=/home/pxu/projects/codelite/drawing-fractal-images/advancedcpp
ProjectPath            :=/home/pxu/projects/codelite/drawing-fractal-images/advancedcpp/AMandelbrotClass
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Peng Xu
Date                   :=13/12/18
CodeLitePath           :=/home/pxu/.codelite
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="AMandelbrotClass.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix): Mandelbrot.cpp $(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pxu/projects/codelite/drawing-fractal-images/advancedcpp/AMandelbrotClass/Mandelbrot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix): Mandelbrot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mandelbrot.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mandelbrot.cpp$(DependSuffix) -MM Mandelbrot.cpp

$(IntermediateDirectory)/Mandelbrot.cpp$(PreprocessSuffix): Mandelbrot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mandelbrot.cpp$(PreprocessSuffix) Mandelbrot.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pxu/projects/codelite/drawing-fractal-images/advancedcpp/AMandelbrotClass/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix): Bitmap.cpp $(IntermediateDirectory)/Bitmap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pxu/projects/codelite/drawing-fractal-images/advancedcpp/AMandelbrotClass/Bitmap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Bitmap.cpp$(DependSuffix): Bitmap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Bitmap.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Bitmap.cpp$(DependSuffix) -MM Bitmap.cpp

$(IntermediateDirectory)/Bitmap.cpp$(PreprocessSuffix): Bitmap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Bitmap.cpp$(PreprocessSuffix) Bitmap.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


