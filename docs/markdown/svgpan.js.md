/\* \@licstart The following is the entire license notice for the
JavaScript code in this file. The code below is based on SVGPan Library
1.2 and was modified for doxygen to support both zooming and panning via
the mouse and via embedded buttons. This code is licensed under the
following BSD license: Copyright 2009-2010 Andrea Leofreddi . All rights
reserved. Redistribution and use in source and binary forms, with or
without modification, are permitted provided that the following
conditions are met: 1. Redistributions of source code must retain the
above copyright notice, this list of conditions and the following
disclaimer. 2. Redistributions in binary form must reproduce the above
copyright notice, this list of conditions and the following disclaimer
in the documentation and/or other materials provided with the
distribution. THIS SOFTWARE IS PROVIDED BY Andrea Leofreddi \`\`AS
IS\'\' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL Andrea Leofreddi OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. The views
and conclusions contained in the software and documentation are those of
the authors and should not be interpreted as representing official
policies, either expressed or implied, of Andrea Leofreddi. \@licend The
above is the entire license notice for the JavaScript code in this file
\*/ var root = document.documentElement; var state = \'none\'; var
stateOrigin; var stateTf = root.createSVGMatrix(); var cursorGrab = \'
url(\"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA4AAAAOCAMAAAAolt3jAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAlQTFRFAAAA////////c3ilYwAAAAN0Uk5T//8A18oNQQAAAD1JREFUeNp0zlEKACAIA9Bt9z90bZBZkQj29qFBEuBOzQHSnWTTyckEfqUuZgFvslH4ch3qLCO/Kr8cAgwATw4Ax6XRCcoAAAAASUVORK5CYII=\"),
move\'; var zoomSteps = 10; var zoomInFactor; var zoomOutFactor; var
windowWidth; var windowHeight; var svgDoc; var minZoom; var maxZoom; if
(!window) window=this; /\*\* \* Show the graph in the middle of the
view, scaled to fit \*/ function show() { if (window.innerHeight) //
Firefox { windowWidth = window.innerWidth; windowHeight =
window.innerHeight; } else if (document.documentElement.clientWidth) //
Chrome/Safari { windowWidth = document.documentElement.clientWidth
windowHeight = document.documentElement.clientHeight } if (!windowWidth
\|\| !windowHeight) // failsafe { windowWidth = 800; windowHeight = 600;
} minZoom =
Math.min(Math.min(viewHeight,windowHeight)/viewHeight,Math.min(viewWidth,windowWidth)/viewWidth);
maxZoom = minZoom+1.5; zoomInFactor =
Math.pow(maxZoom/minZoom,1.0/zoomSteps); zoomOutFactor =
1.0/zoomInFactor; var g = svgDoc.getElementById(\'viewport\'); try { var
bb = g.getBBox(); // this can throw an exception if css { display: none
} var tx = (windowWidth-viewWidth\*minZoom+8)/(2\*minZoom); var ty =
viewHeight+(windowHeight-viewHeight\*minZoom)/(2\*minZoom); var a =
\'scale(\'+minZoom+\') rotate(0) translate(\'+tx+\' \'+ty+\')\';
g.setAttribute(\'transform\',a); } catch(e) {} } /\*\* \* Register
handlers \*/ function init(evt) { svgDoc = evt.target.ownerDocument; try
{ if (top.window && top.window.registerShow) { // register show function
in html doc for dynamic sections
top.window.registerShow(sectionId,show); } } catch(e) { // ugh, we are
not allowed to talk to the parent; can happen with Chrome when viewing
pages // locally, since they treat every local page as having a
different origin } show(); setAttributes(root, { \"onmousedown\" :
\"handleMouseDown(evt)\", \"onmousemove\" : \"handleMouseMove(evt)\",
\"onmouseup\" : \"handleMouseUp(evt)\" }); if (window.addEventListener)
{ if (navigator.userAgent.toLowerCase().indexOf(\'webkit\') \>= 0 \|\|
navigator.userAgent.toLowerCase().indexOf(\"opera\") \>= 0 \|\|
navigator.appVersion.indexOf(\"MSIE\") != -1) {
window.addEventListener(\'mousewheel\', handleMouseWheel, false); //
Chrome/Safari/IE9 } else { window.addEventListener(\'DOMMouseScroll\',
handleMouseWheel, false); // Others } } } window.onresize=function() {
if (svgDoc) { show(); } } /\*\* \* Instance an SVGPoint object with
given event coordinates. \*/ function getEventPoint(evt) { var p =
root.createSVGPoint(); p.x = evt.clientX; p.y = evt.clientY; return p; }
/\*\* \* Sets the current transform matrix of an element. \*/ function
setCTM(element, matrix) { var s = \"matrix(\" + matrix.a + \",\" +
matrix.b + \",\" + matrix.c + \",\" + matrix.d + \",\" + matrix.e +
\",\" + matrix.f + \")\"; element.setAttribute(\"transform\", s); }
/\*\* \* Sets attributes of an element. \*/ function
setAttributes(element, attributes) { for (i in attributes)
element.setAttributeNS(null, i, attributes\[i\]); } function
doZoom(g,point,zoomFactor) { var p =
point.matrixTransform(g.getCTM().inverse()); var k =
root.createSVGMatrix().translate(p.x,
p.y).scale(zoomFactor).translate(-p.x, -p.y); var n =
g.getCTM().multiply(k); var s = Math.max(n.a,n.d); if (s\>maxZoom)
n=n.translate(p.x,p.y).scale(maxZoom/s).translate(-p.x,-p.y); else if
(s\'); d.write(\'

\'); d.write(\'

\'); d.write(\'

::: {#svg style="width:'+windowWidth+'px; height:'+windowHeight+'px;"}
\'+xs+\'
:::

\'); d.write(\'

\'); d.write(\'

\'); d.close(); } catch(e) { alert(\'Failed to open popup window needed
for printing!\\n\'+e.message); } } /\* \@license-end \*/
