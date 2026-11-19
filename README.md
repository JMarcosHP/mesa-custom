# About

Mesa package for Fedora and CentOS.

## About Packit

This repository is maintained by packit:
https://packit.dev/

Packit targets different versions on mesa depending on the Fedora branch.

Make sure to select "Monitoring status > Monitoring all" at:
https://src.fedoraproject.org/rpms/mesa/

## Downloading sources

Some dependencies are not available in CentOS. To avoid polluting mesa.spec with
CentOS only code, they are compiled in .inc files.

To download sources and upload them to the lookaside cache run:

```bash
$ spectool -g --define "_sourcedir $(pwd)" *.spec && fedpkg new-sources *.tar*
```

CentOS 9:

```bash
$ rpmspec -P --define "_sourcedir $(pwd)" \
  --define "rhel 9" \
  --undefine "fedora" \
  mesa.spec > /tmp/mesa-expanded.spec
$ spectool -g -R --define "_sourcedir $(pwd)" /tmp/mesa-expanded.spec
$ rm -f /tmp/mesa-expanded.spec
```

CentOS 10:

```bash
$ rpmspec -P --define "_sourcedir $(pwd)" \
  --define "rhel 10" \
  --undefine "fedora" \
  mesa.spec > /tmp/mesa-expanded.spec
$ spectool -g -R --define "_sourcedir $(pwd)" /tmp/mesa-expanded.spec
$ rm -f /tmp/mesa-expanded.spec
```