# Mesa >= 26.3 requires Python >= 3.10, but CentOS 9 ships Python 3.9
%if 0%{?rhel} == 9

BuildRequires:  python3.11

%endif