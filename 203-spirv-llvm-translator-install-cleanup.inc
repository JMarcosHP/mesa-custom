%if 0%{?rhel} && !0%{?eln}

rm -f  %{buildroot}%{_bindir}/llvm-spirv
rm -fr %{buildroot}%{_includedir}/LLVMSPIRVLib
rm -f  %{buildroot}%{_libdir}/libLLVMSPIRVLib.so
rm -f  %{buildroot}%{_libdir}/libLLVMSPIRVLib.so.*
rm -f  %{buildroot}%{_libdir}/pkgconfig/LLVMSPIRVLib.pc

%endif
