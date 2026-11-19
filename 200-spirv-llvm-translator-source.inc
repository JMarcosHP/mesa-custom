# spirv-llvm-translator is required in CentOS 9 and 10
%if 0%{?rhel} && !0%{?eln}

%global spirv_llvm_trans_ver 23.1.2
%global spirv_llvm_trans_commit e65dde28ce8f12ef7245914fa2850260328669e4
%global spirv_llvm_trans_shortcommit %(c=%{spirv_llvm_trans_commit}; echo ${c:0:7})
Source250:      https://github.com/KhronosGroup/SPIRV-LLVM-Translator/archive/%{spirv_llvm_trans_commit}/spirv-llvm-translator-%{spirv_llvm_trans_shortcommit}.tar.gz

BuildRequires:  cmake
BuildRequires:  ninja-build
BuildRequires:  llvm-static
BuildRequires:  spirv-headers-devel
BuildRequires:  spirv-tools-devel
BuildRequires:  zlib-devel

%endif
