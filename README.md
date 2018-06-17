# opencvtest
opencv3_0+gsl1_8 test and environment

####Notice:
system  variate {
D:\Program Files\Anaconda2;
D:\Program Files\Anaconda2\Library\mingw-w64\bin;
D:\Program Files\Anaconda2\Library\usr\bin;
D:\Program Files\Anaconda2\Library\bin;
D:\Program Files\Anaconda2\Scripts;
C:\Program Files (x86)\Common Files\Oracle\Java\javapath;
%SystemRoot%\system32;
%SystemRoot%;
%SystemRoot%\System32\Wbem;
%SYSTEMROOT%\System32\WindowsPowerShell\v1.0\;
C:\Program Files\TortoiseGit\bin;
C:\Program Files\Git\cmd;
C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;
C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;
C:\Program Files (x86)\Microsoft SDKs\TypeScript\1.0\;
C:\Program Files\Microsoft SQL Server\120\Tools\Binn\;
%JAVA_HOME%\bin;%JAVA_HOME%\jre\bin;
D:\Program Files\GnuWin32\bin;/*gsl1_8*/
D:\Program Files\opencv\build\x86\vc12\bin;/*opencv3_0*/
D:\ffmpeg\bin;/*ffmpeg*/
}



###project variate required to reference with file"opencvtest.vcxproj",and you still need to change to your own diretory of opencv3.0 or gsl1.8

#//begin with line42
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
#//end with line53


#//line65
    <AdditionalDependencies>opencv_ts300d.lib;opencv_world300d.lib;libgsl.lib;libgslcblas.lib;%(AdditionalDependencies)</AdditionalDependencies>


#//line83
      <AdditionalDependencies>opencv_ts300.lib;opencv_world300.lib;libgsl.lib;libgslcblas.lib;%(AdditionalDependencies)</AdditionalDependencies>
