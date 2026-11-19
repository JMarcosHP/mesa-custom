# meson >= 1.7.0 is required in CentOS 9 and 10
%if 0%{?rhel} && !0%{?eln}

%global meson_ver 1.7.0
Source150: https://github.com/mesonbuild/meson/releases/download/%{meson_ver}/meson-%{meson_ver}.tar.gz

%endif
