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
JavaScript code in this file \*/ function toggleVisibility(linkObj) {
var base = \$(linkObj).attr(\'id\'); var summary =
\$(\'\#\'+base+\'-summary\'); var content =
\$(\'\#\'+base+\'-content\'); var trigger =
\$(\'\#\'+base+\'-trigger\'); var src=\$(trigger).attr(\'src\'); if
(content.is(\':visible\')===true) { content.hide(); summary.show();
\$(linkObj).addClass(\'closed\').removeClass(\'opened\');
\$(trigger).attr(\'src\',src.substring(0,src.length-8)+\'closed.png\');
} else { content.show(); summary.hide();
\$(linkObj).removeClass(\'closed\').addClass(\'opened\');
\$(trigger).attr(\'src\',src.substring(0,src.length-10)+\'open.png\'); }
return false; } function updateStripes() { \$(\'table.directory tr\').
removeClass(\'even\').filter(\':visible:even\').addClass(\'even\'); }
function toggleLevel(level) { \$(\'table.directory tr\').each(function()
{ var l = this.id.split(\'\_\').length-1; var i =
\$(\'\#img\'+this.id.substring(3)); var a =
\$(\'\#arr\'+this.id.substring(3)); if (l
