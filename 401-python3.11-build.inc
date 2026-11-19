# RHEL 9 ships Python 3.9, but Mesa >= 26.3 requires >= 3.10.
# Prepend a shim directory where 'python3' points to python3.11, and expose
# python3.9 site-packages (mako, pyyaml) via PYTHONPATH so python3.11 finds them.
%if 0%{?rhel} == 9

mkdir -p %{_builddir}/el9-python-shim
ln -sf /usr/bin/python3.11 %{_builddir}/el9-python-shim/python3
export PATH=%{_builddir}/el9-python-shim:$PATH
export PYTHONPATH=${PYTHONPATH:+$PYTHONPATH:}/usr/lib64/python3.9/site-packages:/usr/lib/python3.9/site-packages

%endif