/\* \@licstart The following is the entire license notice for the
JavaScript code in this file. The MIT License (MIT) Copyright (C)
1997-2020 by Dimitri van Heesch Permission is hereby granted, free of
charge, to any person obtaining a copy of this software and associated
documentation files (the \"Software\"), to deal in the Software without
restriction, including without limitation the rights to use, copy,
modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to
do so, subject to the following conditions: The above copyright notice
and this permission notice shall be included in all copies or
substantial portions of the Software. THE SOFTWARE IS PROVIDED \"AS
IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE. \@licend The above is the entire license notice for the
JavaScript code in this file \*/ function
initMenu(relPath,searchEnabled,serverSide,searchPage,search) { function
makeTree(data,relPath) { var result=\'\'; if (\'children\' in data) {
result+=\'

-   [\'+
    data.children\[i\].text+\']('+relPath+data.children%5Bi%5D.url+')\'+
    makeTree(data.children\[i\],relPath)+\'

\'; } return result; }
\$(\'\#main-nav\').append(makeTree(menudata,relPath));
\$(\'\#main-nav\').children(\':first\').addClass(\'sm
sm-dox\').attr(\'id\',\'main-menu\'); if (searchEnabled) { if
(serverSide) { \$(\'\#main-menu\').append(\'

::: {#MSearchBox .MSearchBoxInactive}
::: {.left}
![]('+relPath+'search/mag.svg){#MSearchSelect}
:::

::: {.right}
:::
:::

\'); } else { \$(\'\#main-menu\').append(\'

::: {#MSearchBox .MSearchBoxInactive}
[![]('+relPath+'search/mag_sel.svg){#MSearchSelect}]{.left}[[![]('+relPath+'search/close.svg){#MSearchCloseImg}](javascript:searchBox.CloseResultsWindow()){#MSearchClose}]{.right}
:::

\'); } } \$(\'\#main-menu\').smartmenus(); } /\* \@license-end \*/
