# Myth: Manage Your Time Handily

This software helps you manage your work/leisure time. It digitally implements
the old paradigm "put things in writing" by providing a handily time planner.
It is possible to schedule work tasks on a daily bases and plan the actions
required to attain goals or objectives.

## Install

This program uses the powerful features of qmake[1].
Qmake can generate a makefile providing the correct linking with the QT libraries present
on your machine and based various needs. To generate the `Makefile`, simply run

```shell
qmake
```

The QT suite contains both the libraries and the qmake tool and must hence be provided;
it is multiplatform over every desktop system. Once the Makefile
is generated,to compile the sources it is sufficient to type

```shell
make
```

in the command line and

```shell
make install
```

to install.

### Unit test

Unit tests are provided to check that everything is working properly; you can run
all the test suite by issuing

```shell
make install
```

## Uninstall

To clean the workspace leaving the executables
```shell
make clean
```

To bring the workspace back to its initial state
```shell
make distclean
```

---

[1] [qmake](http://doc.qt.io/qt-5/qmake-overview.html)
