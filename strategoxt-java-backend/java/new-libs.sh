#!/bin/bash

JAR="jar"

MB_EXEC="../../../mb-exec"
MB_REP="../../../mb-rep"
JSGLR="../../../jsglr"
SPX="../../../spx"

rm spoofax-libs.jar
rm -rf spoofax-libs-tmp
mkdir spoofax-libs-tmp
wget http://repo1.maven.org/maven2/junit/junit/3.8.1/junit-3.8.1.jar
cat junit-3.8.1.jar | (cd spoofax-libs-tmp; $JAR x)
rm junit-3.8.1.jar
rm -rf spoofax-libs-tmp/META-INF
$JAR cf spoofax-libs.jar.tmp -C spoofax-libs-tmp .
$JAR uf spoofax-libs.jar.tmp -C $MB_EXEC/org.spoofax.interpreter.core/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $MB_EXEC/org.spoofax.interpreter.library.java/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $MB_EXEC/org.spoofax.interpreter.library.xml/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $MB_EXEC/org.spoofax.interpreter.library.interpreter/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $MB_REP/org.spoofax.terms/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $MB_REP/org.spoofax.interpreter.library.index/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $JSGLR/org.spoofax.jsglr/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $JSGLR/org.spoofax.interpreter.library.jsglr/bin/ .
$JAR uf spoofax-libs.jar.tmp -C $SPX/org.spoofax.interpreter.library.language/bin/ .
rm -rf spoofax-libs-tmp
mv spoofax-libs.jar.tmp spoofax-libs.jar
