%if 0%{?rhel} && !0%{?eln}

rm -f  %{buildroot}%{_bindir}/meson
rm -rf %{buildroot}%{_mandir}/man1/meson.1*
rm -f  %{buildroot}%{_datadir}/polkit-1/actions/com.mesonbuild.install.policy
rm -f  %{buildroot}%{_datadir}/bash-completion/completions/meson
rm -f  %{buildroot}%{_datadir}/zsh/site-functions/_meson
rm -rf %{buildroot}%{python3_sitelib}

%endif
