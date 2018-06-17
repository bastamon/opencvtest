# opencvtest
opencv3_0+gsl1_8 test and environment

Notice:
system  variate {





}

project variate required to reference with file"opencvtest.vcxproj"
//begin with line42
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
    <LinkIncremental>true</LinkIncremental>
    <IncludePath>D:\Program Files\opencv\build\include;D:\Program Files\opencv\build\include\opencv;D:\Program Files\opencv\build\include\opencv2;D:\Program Files\GnuWin32\include;D:\Program Files\GnuWin32\include\gsl;$(IncludePath)</IncludePath>
    <LibraryPath>D:\Program Files\opencv\build\x86\vc12\staticlib;D:\Program Files\opencv\build\x86\vc12\lib;D:\Program Files\GnuWin32\lib;$(LibraryPath)</LibraryPath>
    <SourcePath>D:\Program Files\GnuWin32\src\gsl\1.8\gsl-1.8;$(SourcePath)</SourcePath>
  </PropertyGroup>
  <PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
    <LinkIncremental>false</LinkIncremental>
    <IncludePath>D:\Program Files\opencv\build\include;D:\Program Files\opencv\build\include\opencv;D:\Program Files\opencv\build\include\opencv2;D:\Program Files\GnuWin32\include;D:\Program Files\GnuWin32\include\gsl;$(IncludePath)</IncludePath>
    <LibraryPath>D:\Program Files\opencv\build\x86\vc12\staticlib;D:\Program Files\opencv\build\x86\vc12\lib;D:\Program Files\GnuWin32\lib;$(LibraryPath)</LibraryPath>
    <SourcePath>D:\Program Files\GnuWin32\src\gsl\1.8\gsl-1.8;$(SourcePath)</SourcePath>
  </PropertyGroup>
//end with line53


//line65
    <AdditionalDependencies>opencv_ts300d.lib;opencv_world300d.lib;libgsl.lib;libgslcblas.lib;%(AdditionalDependencies)</AdditionalDependencies>


//line83
      <AdditionalDependencies>opencv_ts300.lib;opencv_world300.lib;libgsl.lib;libgslcblas.lib;%(AdditionalDependencies)</AdditionalDependencies>
