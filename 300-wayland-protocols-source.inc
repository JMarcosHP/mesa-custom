# wayland-protocols >= 1.49 is required CentOS 9
%if 0%{?rhel} == 9

%global wayland_protocols_ver 1.49
Source350:      https://gitlab.freedesktop.org/wayland/wayland-protocols/-/releases/%{wayland_protocols_ver}/downloads/wayland-protocols-%{wayland_protocols_ver}.tar.xz
BuildRequires:  wayland-devel

%endif
