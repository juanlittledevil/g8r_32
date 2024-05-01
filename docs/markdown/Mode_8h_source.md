::: {#top}
::: {#titlearea}
+-----------------------------------------------------------------------+
| ::: {#projectname}                                                    |
| G8R                                                                   |
| :::                                                                   |
|                                                                       |
| ::: {#projectbrief}                                                   |
| Eurorack MIDI Module with 8 Gate Outputs                              |
| :::                                                                   |
+-----------------------------------------------------------------------+
:::

::: {#main-nav}
:::

::: {#MSearchSelectWindow onmouseover="return searchBox.OnSearchSelectShow()" onmouseout="return searchBox.OnSearchSelectHide()" onkeydown="return searchBox.OnSearchSelectKey(event)"}
:::

::: {#MSearchResultsWindow}
:::

::: {#nav-path .navpath}
-   [include](dir_d44c64559bbebec7f509842c48db8b23.html){.el}
:::
:::

::: {.header}
::: {.headertitle}
::: {.title}
Mode.h
:::
:::
:::

::: {.contents}
[Go to the documentation of this file.](Mode_8h.html)

::: {.fragment}
::: {.line}
[]{#l00001}[ 1]{.lineno} [\#ifndef MODE\_H]{.preprocessor}
:::

::: {.line}
[]{#l00002}[ 2]{.lineno} [\#define MODE\_H]{.preprocessor}
:::

::: {.line}
[]{#l00003}[ 3]{.lineno} 
:::

::: {.line}
[]{#l00004}[ [4](classMode.html){.line}]{.lineno} [class
]{.keyword}[Mode](classMode.html){.code} {
:::

::: {.line}
[]{#l00005}[ 5]{.lineno} [public]{.keyword}:
:::

::: {.line}
[]{#l00006}[
[6](classMode.html#a278db06e9d46fe80d61d577f9f636fa2){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleSinglePress](classMode.html#a278db06e9d46fe80d61d577f9f636fa2){.code}()
= 0;
:::

::: {.line}
[]{#l00007}[
[7](classMode.html#a2f81571d058f2b1ed1592d2041799202){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleDoublePress](classMode.html#a2f81571d058f2b1ed1592d2041799202){.code}()
= 0;
:::

::: {.line}
[]{#l00008}[
[8](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleLongPress](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd){.code}()
= 0;
:::

::: {.line}
[]{#l00009}[
[9](classMode.html#ae6c70842a6e744185300d3b44c06bcaf){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handlePressReleased](classMode.html#ae6c70842a6e744185300d3b44c06bcaf){.code}()
= 0;
:::

::: {.line}
[]{#l00010}[
[10](classMode.html#ae272309e82f82d2967c16c80712fed28){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleSelectionStates](classMode.html#ae272309e82f82d2967c16c80712fed28){.code}()
= 0;
:::

::: {.line}
[]{#l00011}[
[11](classMode.html#a81ad1f477340a92ebf3e5a3ed8427ca1){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleResetSinglePress](classMode.html#a81ad1f477340a92ebf3e5a3ed8427ca1){.code}()
= 0;
:::

::: {.line}
[]{#l00012}[
[12](classMode.html#aaa9b6958129f7d8e8bed339e790131e0){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleResetDoublePress](classMode.html#aaa9b6958129f7d8e8bed339e790131e0){.code}()
= 0;
:::

::: {.line}
[]{#l00013}[
[13](classMode.html#ac153613d96bea9fba3e9775e2861ef0e){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleResetLongPress](classMode.html#ac153613d96bea9fba3e9775e2861ef0e){.code}()
= 0;
:::

::: {.line}
[]{#l00014}[
[14](classMode.html#a2b12c8d0ae0d884c8168218c4c167d92){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[handleResetPressReleased](classMode.html#a2b12c8d0ae0d884c8168218c4c167d92){.code}()
= 0;
:::

::: {.line}
[]{#l00015}[
[15](classMode.html#acded67ff8ef9572e44948971385701ab){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[setup](classMode.html#acded67ff8ef9572e44948971385701ab){.code}() = 0;
:::

::: {.line}
[]{#l00016}[
[16](classMode.html#a126f69890bd05de9745561a7f592aabd){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[teardown](classMode.html#a126f69890bd05de9745561a7f592aabd){.code}() =
0;
:::

::: {.line}
[]{#l00017}[
[17](classMode.html#aa2c21d9299b9df6912689e4ada8d3102){.line}]{.lineno} 
[virtual]{.keyword} [void]{.keywordtype}
[update](classMode.html#aa2c21d9299b9df6912689e4ada8d3102){.code}() = 0;
:::

::: {.line}
[]{#l00018}[ 18]{.lineno} };
:::

::: {.line}
[]{#l00019}[ 19]{.lineno} 
:::

::: {.line}
[]{#l00020}[ 20]{.lineno} [\#endif ]{.preprocessor}[//
MODE\_H]{.comment}
:::

::: {#aclassMode_html .ttc}
::: {.ttname}
[Mode](classMode.html)
:::

::: {.ttdef}
**Definition:** Mode.h:4
:::
:::

::: {#aclassMode_html_a09a52e2df1ef9fa944875cba99fc57fd .ttc}
::: {.ttname}
[Mode::handleLongPress](classMode.html#a09a52e2df1ef9fa944875cba99fc57fd)
:::

::: {.ttdeci}
virtual void handleLongPress()=0
:::
:::

::: {#aclassMode_html_a126f69890bd05de9745561a7f592aabd .ttc}
::: {.ttname}
[Mode::teardown](classMode.html#a126f69890bd05de9745561a7f592aabd)
:::

::: {.ttdeci}
virtual void teardown()=0
:::
:::

::: {#aclassMode_html_a278db06e9d46fe80d61d577f9f636fa2 .ttc}
::: {.ttname}
[Mode::handleSinglePress](classMode.html#a278db06e9d46fe80d61d577f9f636fa2)
:::

::: {.ttdeci}
virtual void handleSinglePress()=0
:::
:::

::: {#aclassMode_html_a2b12c8d0ae0d884c8168218c4c167d92 .ttc}
::: {.ttname}
[Mode::handleResetPressReleased](classMode.html#a2b12c8d0ae0d884c8168218c4c167d92)
:::

::: {.ttdeci}
virtual void handleResetPressReleased()=0
:::
:::

::: {#aclassMode_html_a2f81571d058f2b1ed1592d2041799202 .ttc}
::: {.ttname}
[Mode::handleDoublePress](classMode.html#a2f81571d058f2b1ed1592d2041799202)
:::

::: {.ttdeci}
virtual void handleDoublePress()=0
:::
:::

::: {#aclassMode_html_a81ad1f477340a92ebf3e5a3ed8427ca1 .ttc}
::: {.ttname}
[Mode::handleResetSinglePress](classMode.html#a81ad1f477340a92ebf3e5a3ed8427ca1)
:::

::: {.ttdeci}
virtual void handleResetSinglePress()=0
:::
:::

::: {#aclassMode_html_aa2c21d9299b9df6912689e4ada8d3102 .ttc}
::: {.ttname}
[Mode::update](classMode.html#aa2c21d9299b9df6912689e4ada8d3102)
:::

::: {.ttdeci}
virtual void update()=0
:::
:::

::: {#aclassMode_html_aaa9b6958129f7d8e8bed339e790131e0 .ttc}
::: {.ttname}
[Mode::handleResetDoublePress](classMode.html#aaa9b6958129f7d8e8bed339e790131e0)
:::

::: {.ttdeci}
virtual void handleResetDoublePress()=0
:::
:::

::: {#aclassMode_html_ac153613d96bea9fba3e9775e2861ef0e .ttc}
::: {.ttname}
[Mode::handleResetLongPress](classMode.html#ac153613d96bea9fba3e9775e2861ef0e)
:::

::: {.ttdeci}
virtual void handleResetLongPress()=0
:::
:::

::: {#aclassMode_html_acded67ff8ef9572e44948971385701ab .ttc}
::: {.ttname}
[Mode::setup](classMode.html#acded67ff8ef9572e44948971385701ab)
:::

::: {.ttdeci}
virtual void setup()=0
:::
:::

::: {#aclassMode_html_ae272309e82f82d2967c16c80712fed28 .ttc}
::: {.ttname}
[Mode::handleSelectionStates](classMode.html#ae272309e82f82d2967c16c80712fed28)
:::

::: {.ttdeci}
virtual void handleSelectionStates()=0
:::
:::

::: {#aclassMode_html_ae6c70842a6e744185300d3b44c06bcaf .ttc}
::: {.ttname}
[Mode::handlePressReleased](classMode.html#ae6c70842a6e744185300d3b44c06bcaf)
:::

::: {.ttdeci}
virtual void handlePressReleased()=0
:::
:::
:::
:::

------------------------------------------------------------------------

[Generated by [![doxygen](doxygen.svg){.footer width="104"
height="31"}](https://www.doxygen.org/index.html) 1.9.1]{.small}
