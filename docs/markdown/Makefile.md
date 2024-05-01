DOCSET\_NAME=org.doxygen.Project.docset
DOCSET\_CONTENTS=\$(DOCSET\_NAME)/Contents
DOCSET\_RESOURCES=\$(DOCSET\_CONTENTS)/Resources
DOCSET\_DOCUMENTS=\$(DOCSET\_RESOURCES)/Documents
DESTDIR=\~/Library/Developer/Shared/Documentation/DocSets
XCODE\_INSTALL=\"\$(shell xcode-select -print-path)\" all: docset
docset: mkdir -p \$(DOCSET\_DOCUMENTS) cp Nodes.xml
\$(DOCSET\_RESOURCES) cp Tokens.xml \$(DOCSET\_RESOURCES) cp Info.plist
\$(DOCSET\_CONTENTS) tar \--exclude \$(DOCSET\_NAME) \\ \--exclude
Nodes.xml \\ \--exclude Tokens.xml \\ \--exclude Info.plist \\
\--exclude Makefile -c -f - . \\ \| (cd \$(DOCSET\_DOCUMENTS); tar xvf
-) \$(XCODE\_INSTALL)/usr/bin/docsetutil index \$(DOCSET\_NAME) rm -f
\$(DOCSET\_DOCUMENTS)/Nodes.xml rm -f \$(DOCSET\_DOCUMENTS)/Info.plist
rm -f \$(DOCSET\_DOCUMENTS)/Makefile rm -f
\$(DOCSET\_RESOURCES)/Nodes.xml rm -f \$(DOCSET\_RESOURCES)/Tokens.xml
clean: rm -rf \$(DOCSET\_NAME) install: docset mkdir -p \$(DESTDIR) cp
-R \$(DOCSET\_NAME) \$(DESTDIR) uninstall: rm -rf
\$(DESTDIR)/\$(DOCSET\_NAME) always:
