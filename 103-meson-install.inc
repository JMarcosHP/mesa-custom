%if 0%{?rhel} && !0%{?eln}

cd meson-%{meson_ver}
%py3_install
%global __meson %{buildroot}%{_bindir}/meson
export PYTHONPATH=%{buildroot}%{python3_sitelib}:%{python3_sitelib}
cd -

%endif
