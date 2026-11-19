%if 0%{?rhel} == 9

rm -f  %{buildroot}%{_datadir}/pkgconfig/wayland-protocols.pc
rm -fr %{buildroot}%{_datadir}/wayland-protocols/

%endif
