%if 0%{?rhel} == 9

cd wayland-protocols-%{wayland_protocols_ver}
%meson --prefix=%{buildroot} -Dtests=false
%meson_build
%meson_install
cd -

%endif
