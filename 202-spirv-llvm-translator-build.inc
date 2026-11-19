%if 0%{?rhel} && !0%{?eln}

cd SPIRV-LLVM-Translator-%{spirv_llvm_trans_commit}
%cmake -GNinja \
       -DLLVM_BUILD_TOOLS=ON \
       -DCMAKE_BUILD_TYPE=RelWithDebInfo \
       -DCMAKE_INSTALL_RPATH:BOOL=";" \
       -DLLVM_DIR="/usr/lib64/cmake/llvm/" \
%if 0%{?__isa_bits} == 64
       -DLLVM_LIBDIR_SUFFIX=64 \
%else
       -DLLVM_LIBDIR_SUFFIX= \
%endif
       -DLLVM_EXTERNAL_PROJECTS="SPIRV-Headers" \
       -DLLVM_EXTERNAL_SPIRV_HEADERS_SOURCE_DIR="/usr/include/spirv/"
%cmake_build
%cmake_install
cd -

export LIBRARY_PATH=%{buildroot}%{_libdir}:$LIBRARY_PATH
export LD_LIBRARY_PATH=%{buildroot}%{_libdir}:$LD_LIBRARY_PATH
export XDG_DATA_DIRS=%{buildroot}%{_datadir}:$XDG_DATA_DIRS
export CPATH=%{buildroot}%{_includedir}:$CPATH
export PKG_CONFIG_PATH=%{buildroot}%{_libdir}/pkgconfig:%{buildroot}%{_datadir}/pkgconfig:$PKG_CONFIG_PATH
export PATH=%{buildroot}%{_bindir}:$PATH

%endif
