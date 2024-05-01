/\*! jQuery v3.4.1 \| (c) JS Foundation and other contributors \|
jquery.org/license \*/ !function(e,t){\"use strict\";\"object\"==typeof
module&&\"object\"==typeof
module.exports?module.exports=e.document?t(e,!0):function(e){if(!e.document)throw
new Error(\"jQuery requires a window with a document\");return
t(e)}:t(e)}(\"undefined\"!=typeof window?window:this,function(C,e){\"use
strict\";var
t=\[\],E=C.document,r=Object.getPrototypeOf,s=t.slice,g=t.concat,u=t.push,i=t.indexOf,n={},o=n.toString,v=n.hasOwnProperty,a=v.toString,l=a.call(Object),y={},m=function(e){return\"function\"==typeof
e&&\"number\"!=typeof e.nodeType},x=function(e){return
null!=e&&e===e.window},c={type:!0,src:!0,nonce:!0,noModule:!0};function
b(e,t,n){var
r,i,o=(n=n\|\|E).createElement(\"script\");if(o.text=e,t)for(r in
c)(i=t\[r\]\|\|t.getAttribute&&t.getAttribute(r))&&o.setAttribute(r,i);n.head.appendChild(o).parentNode.removeChild(o)}function
w(e){return null==e?e+\"\":\"object\"==typeof e\|\|\"function\"==typeof
e?n\[o.call(e)\]\|\|\"object\":typeof e}var
f=\"3.4.1\",k=function(e,t){return new
k.fn.init(e,t)},p=/\^\[\\s\\uFEFF\\xA0\]+\|\[\\s\\uFEFF\\xA0\]+\$/g;function
d(e){var t=!!e&&\"length\"in
e&&e.length,n=w(e);return!m(e)&&!x(e)&&(\"array\"===n\|\|0===t\|\|\"number\"==typeof
t&&0+\~\]\|\"+M+\")\"+M+\"\*\"),U=new RegExp(M+\"\|\>\"),X=new
RegExp(\$),V=new RegExp(\"\^\"+I+\"\$\"),G={ID:new
RegExp(\"\^\#(\"+I+\")\"),CLASS:new RegExp(\"\^\\\\.(\"+I+\")\"),TAG:new
RegExp(\"\^(\"+I+\"\|\[\*\])\"),ATTR:new RegExp(\"\^\"+W),PSEUDO:new
RegExp(\"\^\"+\$),CHILD:new
RegExp(\"\^:(only\|first\|last\|nth\|nth-last)-(child\|of-type)(?:\\\\(\"+M+\"\*(even\|odd\|((\[+-\]\|)(\\\\d\*)n\|)\"+M+\"\*(?:(\[+-\]\|)\"+M+\"\*(\\\\d+)\|))\"+M+\"\*\\\\)\|)\",\"i\"),bool:new
RegExp(\"\^(?:\"+R+\")\$\",\"i\"),needsContext:new
RegExp(\"\^\"+M+\"\*\[\>+\~\]\|:(even\|odd\|eq\|gt\|lt\|nth\|first\|last)(?:\\\\(\"+M+\"\*((?:-\\\\d)?\\\\d\*)\"+M+\"\*\\\\)\|)(?=\[\^-\]\|\$)\",\"i\")},Y=/HTML\$/i,Q=/\^(?:input\|select\|textarea\|button)\$/i,J=/\^h\\d\$/i,K=/\^\[\^{\]+\\{\\s\*\\\[native
\\w/,Z=/\^(?:\#(\[\\w-\]+)\|(\\w+)\|\\.(\[\\w-\]+))\$/,ee=/\[+\~\]/,te=new
RegExp(\"\\\\\\\\(\[\\\\da-f\]{1,6}\"+M+\"?\|(\"+M+\")\|.)\",\"ig\"),ne=function(e,t,n){var
r=\"0x\"+t-65536;return
r!=r\|\|n?t:r\<0?String.fromCharCode(r+65536):String.fromCharCode(r\>\>10\|55296,1023&r\|56320)},re=/(\[\\0-\\x1f\\x7f\]\|\^-?\\d)\|\^-\$\|\[\^\\0-\\x1f\\x7f-\\uFFFF\\w-\]/g,ie=function(e,t){return
t?\"\\0\"===e?\"\\ufffd\":e.slice(0,-1)+\"\\\\\"+e.charCodeAt(e.length-1).toString(16)+\"
\":\"\\\\\"+e},oe=function(){T()},ae=be(function(e){return!0===e.disabled&&\"fieldset\"===e.nodeName.toLowerCase()},{dir:\"parentNode\",next:\"legend\"});try{H.apply(t=O.call(m.childNodes),m.childNodes),t\[m.childNodes.length\].nodeType}catch(e){H={apply:t.length?function(e,t){L.apply(e,O.call(t))}:function(e,t){var
n=e.length,r=0;while(e\[n++\]=t\[r++\]);e.length=n-1}}}function
se(t,e,n,r){var
i,o,a,s,u,l,c,f=e&&e.ownerDocument,p=e?e.nodeType:9;if(n=n\|\|\[\],\"string\"!=typeof
t\|\|!t\|\|1!==p&&9!==p&&11!==p)return
n;if(!r&&((e?e.ownerDocument\|\|e:m)!==C&&T(e),e=e\|\|C,E)){if(11!==p&&(u=Z.exec(t)))if(i=u\[1\]){if(9===p){if(!(a=e.getElementById(i)))return
n;if(a.id===i)return n.push(a),n}else
if(f&&(a=f.getElementById(i))&&y(e,a)&&a.id===i)return
n.push(a),n}else{if(u\[2\])return
H.apply(n,e.getElementsByTagName(t)),n;if((i=u\[3\])&&d.getElementsByClassName&&e.getElementsByClassName)return
H.apply(n,e.getElementsByClassName(i)),n}if(d.qsa&&!A\[t+\"
\"\]&&(!v\|\|!v.test(t))&&(1!==p\|\|\"object\"!==e.nodeName.toLowerCase())){if(c=t,f=e,1===p&&U.test(t)){(s=e.getAttribute(\"id\"))?s=s.replace(re,ie):e.setAttribute(\"id\",s=k),o=(l=h(t)).length;while(o\--)l\[o\]=\"\#\"+s+\"
\"+xe(l\[o\]);c=l.join(\",\"),f=ee.test(t)&&ye(e.parentNode)\|\|e}try{return
H.apply(n,f.querySelectorAll(c)),n}catch(e){A(t,!0)}finally{s===k&&e.removeAttribute(\"id\")}}}return
g(t.replace(B,\"\$1\"),e,n,r)}function ue(){var r=\[\];return function
e(t,n){return r.push(t+\" \")\>b.cacheLength&&delete
e\[r.shift()\],e\[t+\" \"\]=n}}function le(e){return
e\[k\]=!0,e}function ce(e){var
t=C.createElement(\"fieldset\");try{return!!e(t)}catch(e){return!1}finally{t.parentNode&&t.parentNode.removeChild(t),t=null}}function
fe(e,t){var
n=e.split(\"\|\"),r=n.length;while(r\--)b.attrHandle\[n\[r\]\]=t}function
pe(e,t){var
n=t&&e,r=n&&1===e.nodeType&&1===t.nodeType&&e.sourceIndex-t.sourceIndex;if(r)return
r;if(n)while(n=n.nextSibling)if(n===t)return-1;return e?1:-1}function
de(t){return
function(e){return\"input\"===e.nodeName.toLowerCase()&&e.type===t}}function
he(n){return function(e){var
t=e.nodeName.toLowerCase();return(\"input\"===t\|\|\"button\"===t)&&e.type===n}}function
ge(t){return function(e){return\"form\"in
e?e.parentNode&&!1===e.disabled?\"label\"in e?\"label\"in
e.parentNode?e.parentNode.disabled===t:e.disabled===t:e.isDisabled===t\|\|e.isDisabled!==!t&&ae(e)===t:e.disabled===t:\"label\"in
e&&e.disabled===t}}function ve(a){return le(function(o){return
o=+o,le(function(e,t){var
n,r=a(\[\],e.length,o),i=r.length;while(i\--)e\[n=r\[i\]\]&&(e\[n\]=!(t\[n\]=e\[n\]))})})}function
ye(e){return e&&\"undefined\"!=typeof e.getElementsByTagName&&e}for(e in
d=se.support={},i=se.isXML=function(e){var
t=e.namespaceURI,n=(e.ownerDocument\|\|e).documentElement;return!Y.test(t\|\|n&&n.nodeName\|\|\"HTML\")},T=se.setDocument=function(e){var
t,n,r=e?e.ownerDocument\|\|e:m;return
r!==C&&9===r.nodeType&&r.documentElement&&(a=(C=r).documentElement,E=!i(C),m!==C&&(n=C.defaultView)&&n.top!==n&&(n.addEventListener?n.addEventListener(\"unload\",oe,!1):n.attachEvent&&n.attachEvent(\"onunload\",oe)),d.attributes=ce(function(e){return
e.className=\"i\",!e.getAttribute(\"className\")}),d.getElementsByTagName=ce(function(e){return
e.appendChild(C.createComment(\"\")),!e.getElementsByTagName(\"\*\").length}),d.getElementsByClassName=K.test(C.getElementsByClassName),d.getById=ce(function(e){return
a.appendChild(e).id=k,!C.getElementsByName\|\|!C.getElementsByName(k).length}),d.getById?(b.filter.ID=function(e){var
t=e.replace(te,ne);return function(e){return
e.getAttribute(\"id\")===t}},b.find.ID=function(e,t){if(\"undefined\"!=typeof
t.getElementById&&E){var n=t.getElementById(e);return
n?\[n\]:\[\]}}):(b.filter.ID=function(e){var n=e.replace(te,ne);return
function(e){var t=\"undefined\"!=typeof
e.getAttributeNode&&e.getAttributeNode(\"id\");return
t&&t.value===n}},b.find.ID=function(e,t){if(\"undefined\"!=typeof
t.getElementById&&E){var
n,r,i,o=t.getElementById(e);if(o){if((n=o.getAttributeNode(\"id\"))&&n.value===e)return\[o\];i=t.getElementsByName(e),r=0;while(o=i\[r++\])if((n=o.getAttributeNode(\"id\"))&&n.value===e)return\[o\]}return\[\]}}),b.find.TAG=d.getElementsByTagName?function(e,t){return\"undefined\"!=typeof
t.getElementsByTagName?t.getElementsByTagName(e):d.qsa?t.querySelectorAll(e):void
0}:function(e,t){var
n,r=\[\],i=0,o=t.getElementsByTagName(e);if(\"\*\"===e){while(n=o\[i++\])1===n.nodeType&&r.push(n);return
r}return
o},b.find.CLASS=d.getElementsByClassName&&function(e,t){if(\"undefined\"!=typeof
t.getElementsByClassName&&E)return
t.getElementsByClassName(e)},s=\[\],v=\[\],(d.qsa=K.test(C.querySelectorAll))&&(ce(function(e){a.appendChild(e).innerHTML=\"[]{#\"+k+\"}\",e.querySelectorAll(\"\[msallowcapture\^=\'\'\]\").length&&v.push(\"\[\*\^\$\]=\"+M+\"\*(?:\'\'\|\\\"\\\")\"),e.querySelectorAll(\"\[selected\]\").length\|\|v.push(\"\\\\\[\"+M+\"\*(?:value\|\"+R+\")\"),e.querySelectorAll(\"\[id\~=\"+k+\"-\]\").length\|\|v.push(\"\~=\"),e.querySelectorAll(\":checked\").length\|\|v.push(\":checked\"),e.querySelectorAll(\"a\#\"+k+\"+\*\").length\|\|v.push(\".\#.+\[+\~\]\")}),ce(function(e){e.innerHTML=\"[]()\";var
t=C.createElement(\"input\");t.setAttribute(\"type\",\"hidden\"),e.appendChild(t).setAttribute(\"name\",\"D\"),e.querySelectorAll(\"\[name=d\]\").length&&v.push(\"name\"+M+\"\*\[\*\^\$\|!\~\]?=\"),2!==e.querySelectorAll(\":enabled\").length&&v.push(\":enabled\",\":disabled\"),a.appendChild(e).disabled=!0,2!==e.querySelectorAll(\":disabled\").length&&v.push(\":enabled\",\":disabled\"),e.querySelectorAll(\"\*,:x\"),v.push(\",.\*:\")})),(d.matchesSelector=K.test(c=a.matches\|\|a.webkitMatchesSelector\|\|a.mozMatchesSelector\|\|a.oMatchesSelector\|\|a.msMatchesSelector))&&ce(function(e){d.disconnectedMatch=c.call(e,\"\*\"),c.call(e,\"\[s!=\'\'\]:x\"),s.push(\"!=\",\$)}),v=v.length&&new
RegExp(v.join(\"\|\")),s=s.length&&new
RegExp(s.join(\"\|\")),t=K.test(a.compareDocumentPosition),y=t\|\|K.test(a.contains)?function(e,t){var
n=9===e.nodeType?e.documentElement:e,r=t&&t.parentNode;return
e===r\|\|!(!r\|\|1!==r.nodeType\|\|!(n.contains?n.contains(r):e.compareDocumentPosition&&16&e.compareDocumentPosition(r)))}:function(e,t){if(t)while(t=t.parentNode)if(t===e)return!0;return!1},D=t?function(e,t){if(e===t)return
l=!0,0;var
n=!e.compareDocumentPosition-!t.compareDocumentPosition;return
n\|\|(1&(n=(e.ownerDocument\|\|e)===(t.ownerDocument\|\|t)?e.compareDocumentPosition(t):1)\|\|!d.sortDetached&&t.compareDocumentPosition(e)===n?e===C\|\|e.ownerDocument===m&&y(m,e)?-1:t===C\|\|t.ownerDocument===m&&y(m,t)?1:u?P(u,e)-P(u,t):0:4&n?-1:1)}:function(e,t){if(e===t)return
l=!0,0;var
n,r=0,i=e.parentNode,o=t.parentNode,a=\[e\],s=\[t\];if(!i\|\|!o)return
e===C?-1:t===C?1:i?-1:o?1:u?P(u,e)-P(u,t):0;if(i===o)return
pe(e,t);n=e;while(n=n.parentNode)a.unshift(n);n=t;while(n=n.parentNode)s.unshift(n);while(a\[r\]===s\[r\])r++;return
r?pe(a\[r\],s\[r\]):a\[r\]===m?-1:s\[r\]===m?1:0}),C},se.matches=function(e,t){return
se(e,null,null,t)},se.matchesSelector=function(e,t){if((e.ownerDocument\|\|e)!==C&&T(e),d.matchesSelector&&E&&!A\[t+\"
\"\]&&(!s\|\|!s.test(t))&&(!v\|\|!v.test(t)))try{var
n=c.call(e,t);if(n\|\|d.disconnectedMatch\|\|e.document&&11!==e.document.nodeType)return
n}catch(e){A(t,!0)}return 0\":{dir:\"parentNode\",first:!0},\"
\":{dir:\"parentNode\"},\"+\":{dir:\"previousSibling\",first:!0},\"\~\":{dir:\"previousSibling\"}},preFilter:{ATTR:function(e){return
e\[1\]=e\[1\].replace(te,ne),e\[3\]=(e\[3\]\|\|e\[4\]\|\|e\[5\]\|\|\"\").replace(te,ne),\"\~=\"===e\[2\]&&(e\[3\]=\"
\"+e\[3\]+\" \"),e.slice(0,4)},CHILD:function(e){return
e\[1\]=e\[1\].toLowerCase(),\"nth\"===e\[1\].slice(0,3)?(e\[3\]\|\|se.error(e\[0\]),e\[4\]=+(e\[4\]?e\[5\]+(e\[6\]\|\|1):2\*(\"even\"===e\[3\]\|\|\"odd\"===e\[3\])),e\[5\]=+(e\[7\]+e\[8\]\|\|\"odd\"===e\[3\])):e\[3\]&&se.error(e\[0\]),e},PSEUDO:function(e){var
t,n=!e\[6\]&&e\[2\];return
G.CHILD.test(e\[0\])?null:(e\[3\]?e\[2\]=e\[4\]\|\|e\[5\]\|\|\"\":n&&X.test(n)&&(t=h(n,!0))&&(t=n.indexOf(\")\",n.length-t)-n.length)&&(e\[0\]=e\[0\].slice(0,t),e\[2\]=n.slice(0,t)),e.slice(0,3))}},filter:{TAG:function(e){var
t=e.replace(te,ne).toLowerCase();return\"\*\"===e?function(){return!0}:function(e){return
e.nodeName&&e.nodeName.toLowerCase()===t}},CLASS:function(e){var
t=p\[e+\" \"\];return t\|\|(t=new
RegExp(\"(\^\|\"+M+\")\"+e+\"(\"+M+\"\|\$)\"))&&p(e,function(e){return
t.test(\"string\"==typeof
e.className&&e.className\|\|\"undefined\"!=typeof
e.getAttribute&&e.getAttribute(\"class\")\|\|\"\")})},ATTR:function(n,r,i){return
function(e){var t=se.attr(e,n);return
null==t?\"!=\"===r:!r\|\|(t+=\"\",\"=\"===r?t===i:\"!=\"===r?t!==i:\"\^=\"===r?i&&0===t.indexOf(i):\"\*=\"===r?i&&-1:\\x20\\t\\r\\n\\f\]\*)\[\\x20\\t\\r\\n\\f\]\*\\/?\>(?:\<\\/\\1\>\|)\$/i;function
j(e,n,r){return
m(n)?k.grep(e,function(e,t){return!!n.call(e,t,e)!==r}):n.nodeType?k.grep(e,function(e){return
e===n!==r}):\"string\"!=typeof
n?k.grep(e,function(e){return-1)\[\^\>\]\*\|\#(\[\\w-\]+))\$/;(k.fn.init=function(e,t,n){var
r,i;if(!e)return this;if(n=n\|\|q,\"string\"==typeof
e){if(!(r=\"\<\"===e\[0\]&&\"\>\"===e\[e.length-1\]&&3\<=e.length?\[null,e,null\]:L.exec(e))\|\|!r\[1\]&&t)return!t\|\|t.jquery?(t\|\|n).find(e):this.constructor(t).find(e);if(r\[1\]){if(t=t
instanceof
k?t\[0\]:t,k.merge(this,k.parseHTML(r\[1\],t&&t.nodeType?t.ownerDocument\|\|t:E,!0)),D.test(r\[1\])&&k.isPlainObject(t))for(r
in t)m(this\[r\])?this\[r\](t\[r\]):this.attr(r,t\[r\]);return
this}return(i=E.getElementById(r\[2\]))&&(this\[0\]=i,this.length=1),this}return
e.nodeType?(this\[0\]=e,this.length=1,this):m(e)?void
0!==n.ready?n.ready(e):e(k):k.makeArray(e,this)}).prototype=k.fn,q=k(E);var
H=/\^(?:parents\|prev(?:Until\|All))/,O={children:!0,contents:!0,next:!0,prev:!0};function
P(e,t){while((e=e\[t\])&&1!==e.nodeType);return
e}k.fn.extend({has:function(e){var t=k(e,this),n=t.length;return
this.filter(function(){for(var
e=0;e\\x20\\t\\r\\n\\f\]\*)/i,he=/\^\$\|\^module\$\|\\/(?:java\|ecma)script/i,ge={option:\[1,\"\",\"\"\],thead:\[1,\"

\",\"

\"\],col:\[2,\"

\",\"

\"\],tr:\[2,\"

\",\"

\"\],td:\[3,\"

\",\"

\"\],\_default:\[0,\"\",\"\"\]};function ve(e,t){var n;return
n=\"undefined\"!=typeof
e.getElementsByTagName?e.getElementsByTagName(t\|\|\"\*\"):\"undefined\"!=typeof
e.querySelectorAll?e.querySelectorAll(t\|\|\"\*\"):\[\],void
0===t\|\|t&&A(e,t)?k.merge(\[e\],n):n}function ye(e,t){for(var
n=0,r=e.length;nx

\",y.noCloneChecked=!!me.cloneNode(!0).lastChild.defaultValue;var
Te=/\^key/,Ce=/\^(?:mouse\|pointer\|contextmenu\|drag\|drop)\|click/,Ee=/\^(\[\^.\]\*)(?:\\.(.+)\|)/;function
ke(){return!0}function Se(){return!1}function Ne(e,t){return
e===function(){try{return
E.activeElement}catch(e){}}()==(\"focus\"===t)}function
Ae(e,t,n,r,i,o){var a,s;if(\"object\"==typeof t){for(s
in\"string\"!=typeof n&&(r=r\|\|n,n=void
0),t)Ae(e,s,n,r,t\[s\],o);return e}if(null==r&&null==i?(i=n,r=n=void
0):null==i&&(\"string\"==typeof n?(i=r,r=void 0):(i=r,r=n,n=void
0)),!1===i)i=Se;else if(!i)return e;return
1===o&&(a=i,(i=function(e){return
k().off(e),a.apply(this,arguments)}).guid=a.guid\|\|(a.guid=k.guid++)),e.each(function(){k.event.add(this,t,i,r,n)})}function
De(e,i,o){o?(Q.set(e,i,!1),k.event.add(e,i,{namespace:!1,handler:function(e){var
t,n,r=Q.get(this,i);if(1&e.isTrigger&&this\[i\]){if(r.length)(k.event.special\[i\]\|\|{}).delegateType&&e.stopPropagation();else
if(r=s.call(arguments),Q.set(this,i,r),t=o(this,i),this\[i\](),r!==(n=Q.get(this,i))\|\|t?Q.set(this,i,!1):n={},r!==n)return
e.stopImmediatePropagation(),e.preventDefault(),n.value}else
r.length&&(Q.set(this,i,{value:k.event.trigger(k.extend(r\[0\],k.Event.prototype),r.slice(1),this)}),e.stopImmediatePropagation())}})):void
0===Q.get(e,i)&&k.event.add(e,i,ke)}k.event={global:{},add:function(t,e,n,r,i){var
o,a,s,u,l,c,f,p,d,h,g,v=Q.get(t);if(v){n.handler&&(n=(o=n).handler,i=o.selector),i&&k.find.matchesSelector(ie,i),n.guid\|\|(n.guid=k.guid++),(u=v.events)\|\|(u=v.events={}),(a=v.handle)\|\|(a=v.handle=function(e){return\"undefined\"!=typeof
k&&k.event.triggered!==e.type?k.event.dispatch.apply(t,arguments):void
0}),l=(e=(e\|\|\"\").match(R)\|\|\[\"\"\]).length;while(l\--)d=g=(s=Ee.exec(e\[l\])\|\|\[\])\[1\],h=(s\[2\]\|\|\"\").split(\".\").sort(),d&&(f=k.event.special\[d\]\|\|{},d=(i?f.delegateType:f.bindType)\|\|d,f=k.event.special\[d\]\|\|{},c=k.extend({type:d,origType:g,data:r,handler:n,guid:n.guid,selector:i,needsContext:i&&k.expr.match.needsContext.test(i),namespace:h.join(\".\")},o),(p=u\[d\])\|\|((p=u\[d\]=\[\]).delegateCount=0,f.setup&&!1!==f.setup.call(t,r,h,a)\|\|t.addEventListener&&t.addEventListener(d,a)),f.add&&(f.add.call(t,c),c.handler.guid\|\|(c.handler.guid=n.guid)),i?p.splice(p.delegateCount++,0,c):p.push(c),k.event.global\[d\]=!0)}},remove:function(e,t,n,r,i){var
o,a,s,u,l,c,f,p,d,h,g,v=Q.hasData(e)&&Q.get(e);if(v&&(u=v.events)){l=(t=(t\|\|\"\").match(R)\|\|\[\"\"\]).length;while(l\--)if(d=g=(s=Ee.exec(t\[l\])\|\|\[\])\[1\],h=(s\[2\]\|\|\"\").split(\".\").sort(),d){f=k.event.special\[d\]\|\|{},p=u\[d=(r?f.delegateType:f.bindType)\|\|d\]\|\|\[\],s=s\[2\]&&new
RegExp(\"(\^\|\\\\.)\"+h.join(\"\\\\.(?:.\*\\\\.\|)\")+\"(\\\\.\|\$)\"),a=o=p.length;while(o\--)c=p\[o\],!i&&g!==c.origType\|\|n&&n.guid!==c.guid\|\|s&&!s.test(c.namespace)\|\|r&&r!==c.selector&&(\"\*\*\"!==r\|\|!c.selector)\|\|(p.splice(o,1),c.selector&&p.delegateCount\--,f.remove&&f.remove.call(e,c));a&&!p.length&&(f.teardown&&!1!==f.teardown.call(e,h,v.handle)\|\|k.removeEvent(e,d,v.handle),delete
u\[d\])}else for(d in
u)k.event.remove(e,d+t\[l\],n,r,!0);k.isEmptyObject(u)&&Q.remove(e,\"handle
events\")}},dispatch:function(e){var t,n,r,i,o,a,s=k.event.fix(e),u=new
Array(arguments.length),l=(Q.get(this,\"events\")\|\|{})\[s.type\]\|\|\[\],c=k.event.special\[s.type\]\|\|{};for(u\[0\]=s,t=1;t\\x20\\t\\r\\n\\f\]\*)\[\^\>\]\*)\\/\>/gi,qe=/\\s\*\$/g;function
Oe(e,t){return
A(e,\"table\")&&A(11!==t.nodeType?t:t.firstChild,\"tr\")&&k(e).children(\"tbody\")\[0\]\|\|e}function
Pe(e){return
e.type=(null!==e.getAttribute(\"type\"))+\"/\"+e.type,e}function
Re(e){return\"true/\"===(e.type\|\|\"\").slice(0,5)?e.type=e.type.slice(5):e.removeAttribute(\"type\"),e}function
Me(e,t){var
n,r,i,o,a,s,u,l;if(1===t.nodeType){if(Q.hasData(e)&&(o=Q.access(e),a=Q.set(t,o),l=o.events))for(i
in delete
a.handle,a.events={},l)for(n=0,r=l\[i\].length;n\")},clone:function(e,t,n){var
r,i,o,a,s,u,l,c=e.cloneNode(!0),f=oe(e);if(!(y.noCloneChecked\|\|1!==e.nodeType&&11!==e.nodeType\|\|k.isXMLDoc(e)))for(a=ve(c),r=0,i=(o=ve(e)).length;r\").attr(n.scriptAttrs\|\|{}).prop({charset:n.scriptCharset,src:n.url}).on(\"load
error\",i=function(e){r.remove(),i=null,e&&t(\"error\"===e.type?404:200,e.type)}),E.head.appendChild(r\[0\])},abort:function(){i&&i()}}});var
Vt,Gt=\[\],Yt=/(=)\\?(?=&\|\$)\|\\?\\?/;k.ajaxSetup({jsonp:\"callback\",jsonpCallback:function(){var
e=Gt.pop()\|\|k.expando+\"\_\"+kt++;return
this\[e\]=!0,e}}),k.ajaxPrefilter(\"json jsonp\",function(e,t,n){var
r,i,o,a=!1!==e.jsonp&&(Yt.test(e.url)?\"url\":\"string\"==typeof
e.data&&0===(e.contentType\|\|\"\").indexOf(\"application/x-www-form-urlencoded\")&&Yt.test(e.data)&&\"data\");if(a\|\|\"jsonp\"===e.dataTypes\[0\])return
r=e.jsonpCallback=m(e.jsonpCallback)?e.jsonpCallback():e.jsonpCallback,a?e\[a\]=e\[a\].replace(Yt,\"\$1\"+r):!1!==e.jsonp&&(e.url+=(St.test(e.url)?\"&\":\"?\")+e.jsonp+\"=\"+r),e.converters\[\"script
json\"\]=function(){return o\|\|k.error(r+\" was not
called\"),o\[0\]},e.dataTypes\[0\]=\"json\",i=C\[r\],C\[r\]=function(){o=arguments},n.always(function(){void
0===i?k(C).removeProp(r):C\[r\]=i,e\[r\]&&(e.jsonpCallback=t.jsonpCallback,Gt.push(r)),o&&m(i)&&i(o\[0\]),o=i=void
0}),\"script\"}),y.createHTMLDocument=((Vt=E.implementation.createHTMLDocument(\"\").body).innerHTML=\"

\",2===Vt.childNodes.length),k.parseHTML=function(e,t,n){return\"string\"!=typeof
e?\[\]:(\"boolean\"==typeof
t&&(n=t,t=!1),t\|\|(y.createHTMLDocument?((r=(t=E.implementation.createHTMLDocument(\"\")).createElement(\"base\")).href=E.location.href,t.head.appendChild(r)):t=E),o=!n&&\[\],(i=D.exec(e))?\[t.createElement(i\[1\])\]:(i=we(\[e\],t,o),o&&o.length&&k(o).remove(),k.merge(\[\],i.childNodes)));var
r,i,o},k.fn.load=function(e,t,n){var r,i,o,a=this,s=e.indexOf(\"
\");return-1\").append(k.parseHTML(e)).find(r):e)}).always(n&&function(e,t){a.each(function(){n.apply(this,o\|\|\[e.responseText,t,e\])})}),this},k.each(\[\"ajaxStart\",\"ajaxStop\",\"ajaxComplete\",\"ajaxError\",\"ajaxSuccess\",\"ajaxSend\"\],function(e,t){k.fn\[t\]=function(e){return
this.on(t,e)}}),k.expr.pseudos.animated=function(t){return
k.grep(k.timers,function(e){return
t===e.elem}).length},k.offset={setOffset:function(e,t,n){var
r,i,o,a,s,u,l=k.css(e,\"position\"),c=k(e),f={};\"static\"===l&&(e.style.position=\"relative\"),s=c.offset(),o=k.css(e,\"top\"),u=k.css(e,\"left\"),(\"absolute\"===l\|\|\"fixed\"===l)&&-1\<(o+u).indexOf(\"auto\")?(a=(r=c.position()).top,i=r.left):(a=parseFloat(o)\|\|0,i=parseFloat(u)\|\|0),m(t)&&(t=t.call(e,n,k.extend({},s))),null!=t.top&&(f.top=t.top-s.top+a),null!=t.left&&(f.left=t.left-s.left+i),\"using\"in
t?t.using.call(e,f):c.css(f)}},k.fn.extend({offset:function(t){if(arguments.length)return
void 0===t?this:this.each(function(e){k.offset.setOffset(this,t,e)});var
e,n,r=this\[0\];return
r?r.getClientRects().length?(e=r.getBoundingClientRect(),n=r.ownerDocument.defaultView,{top:e.top+n.pageYOffset,left:e.left+n.pageXOffset}):{top:0,left:0}:void
0},position:function(){if(this\[0\]){var
e,t,n,r=this\[0\],i={top:0,left:0};if(\"fixed\"===k.css(r,\"position\"))t=r.getBoundingClientRect();else{t=this.offset(),n=r.ownerDocument,e=r.offsetParent\|\|n.documentElement;while(e&&(e===n.body\|\|e===n.documentElement)&&\"static\"===k.css(e,\"position\"))e=e.parentNode;e&&e!==r&&1===e.nodeType&&((i=k(e).offset()).top+=k.css(e,\"borderTopWidth\",!0),i.left+=k.css(e,\"borderLeftWidth\",!0))}return{top:t.top-i.top-k.css(r,\"marginTop\",!0),left:t.left-i.left-k.css(r,\"marginLeft\",!0)}}},offsetParent:function(){return
this.map(function(){var
e=this.offsetParent;while(e&&\"static\"===k.css(e,\"position\"))e=e.offsetParent;return
e\|\|ie})}}),k.each({scrollLeft:\"pageXOffset\",scrollTop:\"pageYOffset\"},function(t,i){var
o=\"pageYOffset\"===i;k.fn\[t\]=function(e){return
\_(this,function(e,t,n){var
r;if(x(e)?r=e:9===e.nodeType&&(r=e.defaultView),void 0===n)return
r?r\[i\]:e\[t\];r?r.scrollTo(o?r.pageXOffset:n,o?n:r.pageYOffset):e\[t\]=n},t,e,arguments.length)}}),k.each(\[\"top\",\"left\"\],function(e,n){k.cssHooks\[n\]=ze(y.pixelPosition,function(e,t){if(t)return
t=\_e(e,n),\$e.test(t)?k(e).position()\[n\]+\"px\":t})}),k.each({Height:\"height\",Width:\"width\"},function(a,s){k.each({padding:\"inner\"+a,content:s,\"\":\"outer\"+a},function(r,o){k.fn\[o\]=function(e,t){var
n=arguments.length&&(r\|\|\"boolean\"!=typeof
e),i=r\|\|(!0===e\|\|!0===t?\"margin\":\"border\");return
\_(this,function(e,t,n){var r;return
x(e)?0===o.indexOf(\"outer\")?e\[\"inner\"+a\]:e.document.documentElement\[\"client\"+a\]:9===e.nodeType?(r=e.documentElement,Math.max(e.body\[\"scroll\"+a\],r\[\"scroll\"+a\],e.body\[\"offset\"+a\],r\[\"offset\"+a\],r\[\"client\"+a\])):void
0===n?k.css(e,t,i):k.style(e,t,n,i)},s,n?e:void 0,n)}})}),k.each(\"blur
focus focusin focusout resize scroll click dblclick mousedown mouseup
mousemove mouseover mouseout mouseenter mouseleave change select submit
keydown keypress keyup contextmenu\".split(\"
\"),function(e,n){k.fn\[n\]=function(e,t){return 0a;a++)for(i in
o\[a\])n=o\[a\]\[i\],o\[a\].hasOwnProperty(i)&&void
0!==n&&(e\[i\]=t.isPlainObject(n)?t.isPlainObject(e\[i\])?t.widget.extend({},e\[i\],n):t.widget.extend({},n):n);return
e},t.widget.bridge=function(e,i){var
n=i.prototype.widgetFullName\|\|e;t.fn\[e\]=function(o){var
a=\"string\"==typeof o,r=s.call(arguments,1),h=this;return
a?this.length\|\|\"instance\"!==o?this.each(function(){var
i,s=t.data(this,n);return\"instance\"===o?(h=s,!1):s?t.isFunction(s\[o\])&&\"\_\"!==o.charAt(0)?(i=s\[o\].apply(s,r),i!==s&&void
0!==i?(h=i&&i.jquery?h.pushStack(i.get()):i,!1):void 0):t.error(\"no
such method \'\"+o+\"\' for \"+e+\" widget instance\"):t.error(\"cannot
call methods on \"+e+\" prior to initialization; \"+\"attempted to call
method \'\"+o+\"\'\")}):h=void
0:(r.length&&(o=t.widget.extend.apply(null,\[o\].concat(r))),this.each(function(){var
e=t.data(this,n);e?(e.option(o\|\|{}),e.\_init&&e.\_init()):t.data(this,n,new
i(o,this))})),h}},t.Widget=function(){},t.Widget.\_childConstructors=\[\],t.Widget.prototype={widgetName:\"widget\",widgetEventPrefix:\"\",defaultElement:\"

<div>

\",options:{classes:{},disabled:!1,create:null},\_createWidget:function(e,s){s=t(s\|\|this.defaultElement\|\|this)\[0\],this.element=t(s),this.uuid=i++,this.eventNamespace=\".\"+this.widgetName+this.uuid,this.bindings=t(),this.hoverable=t(),this.focusable=t(),this.classesElementLookup={},s!==this&&(t.data(s,this.widgetFullName,this),this.\_on(!0,this.element,{remove:function(t){t.target===s&&this.destroy()}}),this.document=t(s.style?s.ownerDocument:s.document\|\|s),this.window=t(this.document\[0\].defaultView\|\|this.document\[0\].parentWindow)),this.options=t.widget.extend({},this.options,this.\_getCreateOptions(),e),this.\_create(),this.options.disabled&&this.\_setOptionDisabled(this.options.disabled),this.\_trigger(\"create\",null,this.\_getCreateEventData()),this.\_init()},\_getCreateOptions:function(){return{}},\_getCreateEventData:t.noop,\_create:t.noop,\_init:t.noop,destroy:function(){var
e=this;this.\_destroy(),t.each(this.classesElementLookup,function(t,i){e.\_removeClass(i,t)}),this.element.off(this.eventNamespace).removeData(this.widgetFullName),this.widget().off(this.eventNamespace).removeAttr(\"aria-disabled\"),this.bindings.off(this.eventNamespace)},\_destroy:t.noop,widget:function(){return
this.element},option:function(e,i){var
s,n,o,a=e;if(0===arguments.length)return
t.widget.extend({},this.options);if(\"string\"==typeof
e)if(a={},s=e.split(\".\"),e=s.shift(),s.length){for(n=a\[e\]=t.widget.extend({},this.options\[e\]),o=0;s.length-1\>o;o++)n\[s\[o\]\]=n\[s\[o\]\]\|\|{},n=n\[s\[o\]\];if(e=s.pop(),1===arguments.length)return
void 0===n\[e\]?null:n\[e\];n\[e\]=i}else{if(1===arguments.length)return
void 0===this.options\[e\]?null:this.options\[e\];a\[e\]=i}return
this.\_setOptions(a),this},\_setOptions:function(t){var e;for(e in
t)this.\_setOption(e,t\[e\]);return
this},\_setOption:function(t,e){return\"classes\"===t&&this.\_setOptionClasses(e),this.options\[t\]=e,\"disabled\"===t&&this.\_setOptionDisabled(e),this},\_setOptionClasses:function(e){var
i,s,n;for(i in
e)n=this.classesElementLookup\[i\],e\[i\]!==this.options.classes\[i\]&&n&&n.length&&(s=t(n.get()),this.\_removeClass(n,i),s.addClass(this.\_classes({element:s,keys:i,classes:e,add:!0})))},\_setOptionDisabled:function(t){this.\_toggleClass(this.widget(),this.widgetFullName+\"-disabled\",null,!!t),t&&(this.\_removeClass(this.hoverable,null,\"ui-state-hover\"),this.\_removeClass(this.focusable,null,\"ui-state-focus\"))},enable:function(){return
this.\_setOptions({disabled:!1})},disable:function(){return
this.\_setOptions({disabled:!0})},\_classes:function(e){function
i(i,o){var
a,r;for(r=0;i.length\>r;r++)a=n.classesElementLookup\[i\[r\]\]\|\|t(),a=e.add?t(t.unique(a.get().concat(e.element.get()))):t(a.not(e.element).get()),n.classesElementLookup\[i\[r\]\]=a,s.push(i\[r\]),o&&e.classes\[i\[r\]\]&&s.push(e.classes\[i\[r\]\])}var
s=\[\],n=this;return
e=t.extend({element:this.element,classes:this.options.classes\|\|{}},e),this.\_on(e.element,{remove:\"\_untrackClassesElement\"}),e.keys&&i(e.keys.match(/\\S+/g)\|\|\[\],!0),e.extra&&i(e.extra.match(/\\S+/g)\|\|\[\]),s.join(\"
\")},\_untrackClassesElement:function(e){var
i=this;t.each(i.classesElementLookup,function(s,n){-1!==t.inArray(e.target,n)&&(i.classesElementLookup\[s\]=t(n.not(e.target).get()))})},\_removeClass:function(t,e,i){return
this.\_toggleClass(t,e,i,!1)},\_addClass:function(t,e,i){return
this.\_toggleClass(t,e,i,!0)},\_toggleClass:function(t,e,i,s){s=\"boolean\"==typeof
s?s:i;var n=\"string\"==typeof
t\|\|null===t,o={extra:n?e:i,keys:n?t:e,element:n?this.element:t,add:s};return
o.element.toggleClass(this.\_classes(o),s),this},\_on:function(e,i,s){var
n,o=this;\"boolean\"!=typeof
e&&(s=i,i=e,e=!1),s?(i=n=t(i),this.bindings=this.bindings.add(i)):(s=i,i=this.element,n=this.widget()),t.each(s,function(s,a){function
r(){return
e\|\|o.options.disabled!==!0&&!t(this).hasClass(\"ui-state-disabled\")?(\"string\"==typeof
a?o\[a\]:a).apply(o,arguments):void 0}\"string\"!=typeof
a&&(r.guid=a.guid=a.guid\|\|r.guid\|\|t.guid++);var
h=s.match(/\^(\[\\w:-\]\*)\\s\*(.\*)\$/),l=h\[1\]+o.eventNamespace,c=h\[2\];c?n.on(l,c,r):i.on(l,r)})},\_off:function(e,i){i=(i\|\|\"\").split(\"
\").join(this.eventNamespace+\"
\")+this.eventNamespace,e.off(i).off(i),this.bindings=t(this.bindings.not(e).get()),this.focusable=t(this.focusable.not(e).get()),this.hoverable=t(this.hoverable.not(e).get())},\_delay:function(t,e){function
i(){return(\"string\"==typeof t?s\[t\]:t).apply(s,arguments)}var
s=this;return
setTimeout(i,e\|\|0)},\_hoverable:function(e){this.hoverable=this.hoverable.add(e),this.\_on(e,{mouseenter:function(e){this.\_addClass(t(e.currentTarget),null,\"ui-state-hover\")},mouseleave:function(e){this.\_removeClass(t(e.currentTarget),null,\"ui-state-hover\")}})},\_focusable:function(e){this.focusable=this.focusable.add(e),this.\_on(e,{focusin:function(e){this.\_addClass(t(e.currentTarget),null,\"ui-state-focus\")},focusout:function(e){this.\_removeClass(t(e.currentTarget),null,\"ui-state-focus\")}})},\_trigger:function(e,i,s){var
n,o,a=this.options\[e\];if(s=s\|\|{},i=t.Event(i),i.type=(e===this.widgetEventPrefix?e:this.widgetEventPrefix+e).toLowerCase(),i.target=this.element\[0\],o=i.originalEvent)for(n
in o)n in i\|\|(i\[n\]=o\[n\]);return
this.element.trigger(i,s),!(t.isFunction(a)&&a.apply(this.element\[0\],\[i\].concat(s))===!1\|\|i.isDefaultPrevented())}},t.each({show:\"fadeIn\",hide:\"fadeOut\"},function(e,i){t.Widget.prototype\[\"\_\"+e\]=function(s,n,o){\"string\"==typeof
n&&(n={effect:n});var a,r=n?n===!0\|\|\"number\"==typeof
n?i:n.effect\|\|i:e;n=n\|\|{},\"number\"==typeof
n&&(n={duration:n}),a=!t.isEmptyObject(n),n.complete=o,n.delay&&s.delay(n.delay),a&&t.effects&&t.effects.effect\[r\]?s\[e\](n):r!==e&&s\[r\]?s\[r\](n.duration,n.easing,o):s.queue(function(i){t(this)\[e\](),o&&o.call(s\[0\]),i()})}}),t.widget,function(){function
e(t,e,i){return\[parseFloat(t\[0\])\*(u.test(t\[0\])?e/100:1),parseFloat(t\[1\])\*(u.test(t\[1\])?i/100:1)\]}function
i(e,i){return parseInt(t.css(e,i),10)\|\|0}function s(e){var
i=e\[0\];return
9===i.nodeType?{width:e.width(),height:e.height(),offset:{top:0,left:0}}:t.isWindow(i)?{width:e.width(),height:e.height(),offset:{top:e.scrollTop(),left:e.scrollLeft()}}:i.preventDefault?{width:0,height:0,offset:{top:i.pageY,left:i.pageX}}:{width:e.outerWidth(),height:e.outerHeight(),offset:e.offset()}}var
n,o=Math.max,a=Math.abs,r=/left\|center\|right/,h=/top\|center\|bottom/,l=/\[\\+\\-\]\\d+(\\.\[\\d\]+)?%?/,c=/\^\\w+/,u=/%\$/,d=t.fn.position;t.position={scrollbarWidth:function(){if(void
0!==n)return n;var e,i,s=t(\"

::: {style="display:block;position:absolute;width:50px;height:50px;overflow:hidden;"}
::: {style="height:100px;width:auto;"}
:::
:::

\"),o=s.children()\[0\];return
t(\"body\").append(s),e=o.offsetWidth,s.css(\"overflow\",\"scroll\"),i=o.offsetWidth,e===i&&(i=s\[0\].clientWidth),s.remove(),n=e-i},getScrollInfo:function(e){var
i=e.isWindow\|\|e.isDocument?\"\":e.element.css(\"overflow-x\"),s=e.isWindow\|\|e.isDocument?\"\":e.element.css(\"overflow-y\"),n=\"scroll\"===i\|\|\"auto\"===i&&e.widthi?\"left\":e\>0?\"right\":\"center\",vertical:0\>r?\"top\":s\>0?\"bottom\":\"middle\"};l\>p&&p\>a(e+i)&&(u.horizontal=\"center\"),c\>f&&f\>a(s+r)&&(u.vertical=\"middle\"),u.important=o(a(e),a(i))\>o(a(s),a(r))?\"horizontal\":\"vertical\",n.using.call(this,t,u)}),h.offset(t.extend(D,{using:r}))})},t.ui.position={fit:{left:function(t,e){var
i,s=e.within,n=s.isWindow?s.scrollLeft:s.offset.left,a=s.width,r=t.left-e.collisionPosition.marginLeft,h=n-r,l=r+e.collisionWidth-a-n;e.collisionWidth\>a?h\>0&&0\>=l?(i=t.left+h+e.collisionWidth-a-n,t.left+=h-i):t.left=l\>0&&0\>=h?n:h\>l?n+a-e.collisionWidth:n:h\>0?t.left+=h:l\>0?t.left-=l:t.left=o(t.left-r,t.left)},top:function(t,e){var
i,s=e.within,n=s.isWindow?s.scrollTop:s.offset.top,a=e.within.height,r=t.top-e.collisionPosition.marginTop,h=n-r,l=r+e.collisionHeight-a-n;e.collisionHeight\>a?h\>0&&0\>=l?(i=t.top+h+e.collisionHeight-a-n,t.top+=h-i):t.top=l\>0&&0\>=h?n:h\>l?n+a-e.collisionHeight:n:h\>0?t.top+=h:l\>0?t.top-=l:t.top=o(t.top-r,t.top)}},flip:{left:function(t,e){var
i,s,n=e.within,o=n.offset.left+n.scrollLeft,r=n.width,h=n.isWindow?n.scrollLeft:n.offset.left,l=t.left-e.collisionPosition.marginLeft,c=l-h,u=l+e.collisionWidth-r-h,d=\"left\"===e.my\[0\]?-e.elemWidth:\"right\"===e.my\[0\]?e.elemWidth:0,p=\"left\"===e.at\[0\]?e.targetWidth:\"right\"===e.at\[0\]?-e.targetWidth:0,f=-2\*e.offset\[0\];0\>c?(i=t.left+d+p+f+e.collisionWidth-r-o,(0\>i\|\|a(c)\>i)&&(t.left+=d+p+f)):u\>0&&(s=t.left-e.collisionPosition.marginLeft+d+p+f-h,(s\>0\|\|u\>a(s))&&(t.left+=d+p+f))},top:function(t,e){var
i,s,n=e.within,o=n.offset.top+n.scrollTop,r=n.height,h=n.isWindow?n.scrollTop:n.offset.top,l=t.top-e.collisionPosition.marginTop,c=l-h,u=l+e.collisionHeight-r-h,d=\"top\"===e.my\[1\],p=d?-e.elemHeight:\"bottom\"===e.my\[1\]?e.elemHeight:0,f=\"top\"===e.at\[1\]?e.targetHeight:\"bottom\"===e.at\[1\]?-e.targetHeight:0,m=-2\*e.offset\[1\];0\>c?(s=t.top+p+f+m+e.collisionHeight-r-o,(0\>s\|\|a(c)\>s)&&(t.top+=p+f+m)):u\>0&&(i=t.top-e.collisionPosition.marginTop+p+f+m-h,(i\>0\|\|u\>a(i))&&(t.top+=p+f+m))}},flipfit:{left:function(){t.ui.position.flip.left.apply(this,arguments),t.ui.position.fit.left.apply(this,arguments)},top:function(){t.ui.position.flip.top.apply(this,arguments),t.ui.position.fit.top.apply(this,arguments)}}}}(),t.ui.position,t.extend(t.expr\[\":\"\],{data:t.expr.createPseudo?t.expr.createPseudo(function(e){return
function(i){return!!t.data(i,e)}}):function(e,i,s){return!!t.data(e,s\[3\])}}),t.fn.extend({disableSelection:function(){var
t=\"onselectstart\"in
document.createElement(\"div\")?\"selectstart\":\"mousedown\";return
function(){return
this.on(t+\".ui-disableSelection\",function(t){t.preventDefault()})}}(),enableSelection:function(){return
this.off(\".ui-disableSelection\")}}),t.ui.focusable=function(i,s){var
n,o,a,r,h,l=i.nodeName.toLowerCase();return\"area\"===l?(n=i.parentNode,o=n.name,i.href&&o&&\"map\"===n.nodeName.toLowerCase()?(a=t(\"img\[usemap=\'\#\"+o+\"\'\]\"),a.length\>0&&a.is(\":visible\")):!1):(/\^(input\|select\|textarea\|button\|object)\$/.test(l)?(r=!i.disabled,r&&(h=t(i).closest(\"fieldset\")\[0\],h&&(r=!h.disabled))):r=\"a\"===l?i.href\|\|s:s,r&&t(i).is(\":visible\")&&e(t(i)))},t.extend(t.expr\[\":\"\],{focusable:function(e){return
t.ui.focusable(e,null!=t.attr(e,\"tabindex\"))}}),t.ui.focusable,t.fn.form=function(){return\"string\"==typeof
this\[0\].form?this.closest(\"form\"):t(this\[0\].form)},t.ui.formResetMixin={\_formResetHandler:function(){var
e=t(this);setTimeout(function(){var
i=e.data(\"ui-form-reset-instances\");t.each(i,function(){this.refresh()})})},\_bindFormResetHandler:function(){if(this.form=this.element.form(),this.form.length){var
t=this.form.data(\"ui-form-reset-instances\")\|\|\[\];t.length\|\|this.form.on(\"reset.ui-form-reset\",this.\_formResetHandler),t.push(this),this.form.data(\"ui-form-reset-instances\",t)}},\_unbindFormResetHandler:function(){if(this.form.length){var
e=this.form.data(\"ui-form-reset-instances\");e.splice(t.inArray(this,e),1),e.length?this.form.data(\"ui-form-reset-instances\",e):this.form.removeData(\"ui-form-reset-instances\").off(\"reset.ui-form-reset\")}}},\"1.7\"===t.fn.jquery.substring(0,3)&&(t.each(\[\"Width\",\"Height\"\],function(e,i){function
s(e,i,s,o){return
t.each(n,function(){i-=parseFloat(t.css(e,\"padding\"+this))\|\|0,s&&(i-=parseFloat(t.css(e,\"border\"+this+\"Width\"))\|\|0),o&&(i-=parseFloat(t.css(e,\"margin\"+this))\|\|0)}),i}var
n=\"Width\"===i?\[\"Left\",\"Right\"\]:\[\"Top\",\"Bottom\"\],o=i.toLowerCase(),a={innerWidth:t.fn.innerWidth,innerHeight:t.fn.innerHeight,outerWidth:t.fn.outerWidth,outerHeight:t.fn.outerHeight};t.fn\[\"inner\"+i\]=function(e){return
void
0===e?a\[\"inner\"+i\].call(this):this.each(function(){t(this).css(o,s(this,e)+\"px\")})},t.fn\[\"outer\"+i\]=function(e,n){return\"number\"!=typeof
e?a\[\"outer\"+i\].call(this,e):this.each(function(){t(this).css(o,s(this,e,!0,n)+\"px\")})}}),t.fn.addBack=function(t){return
this.add(null==t?this.prevObject:this.prevObject.filter(t))}),t.ui.keyCode={BACKSPACE:8,COMMA:188,DELETE:46,DOWN:40,END:35,ENTER:13,ESCAPE:27,HOME:36,LEFT:37,PAGE\_DOWN:34,PAGE\_UP:33,PERIOD:190,RIGHT:39,SPACE:32,TAB:9,UP:38},t.ui.escapeSelector=function(){var
t=/(\[!\"\#\$%&\'()\*+,./:;\<=\>?@\[\\\]\^\`{\|}\~\])/g;return
function(e){return
e.replace(t,\"\\\\\$1\")}}(),t.fn.labels=function(){var e,i,s,n,o;return
this\[0\].labels&&this\[0\].labels.length?this.pushStack(this\[0\].labels):(n=this.eq(0).parents(\"label\"),s=this.attr(\"id\"),s&&(e=this.eq(0).parents().last(),o=e.add(e.length?e.siblings():this.siblings()),i=\"label\[for=\'\"+t.ui.escapeSelector(s)+\"\'\]\",n=n.add(o.find(i).addBack(i))),this.pushStack(n))},t.fn.scrollParent=function(e){var
i=this.css(\"position\"),s=\"absolute\"===i,n=e?/(auto\|scroll\|hidden)/:/(auto\|scroll)/,o=this.parents().filter(function(){var
e=t(this);return
s&&\"static\"===e.css(\"position\")?!1:n.test(e.css(\"overflow\")+e.css(\"overflow-y\")+e.css(\"overflow-x\"))}).eq(0);return\"fixed\"!==i&&o.length?o:t(this\[0\].ownerDocument\|\|document)},t.extend(t.expr\[\":\"\],{tabbable:function(e){var
i=t.attr(e,\"tabindex\"),s=null!=i;return(!s\|\|i\>=0)&&t.ui.focusable(e,s)}}),t.fn.extend({uniqueId:function(){var
t=0;return function(){return
this.each(function(){this.id\|\|(this.id=\"ui-id-\"+
++t)})}}(),removeUniqueId:function(){return
this.each(function(){/\^ui-id-\\d+\$/.test(this.id)&&t(this).removeAttr(\"id\")})}}),t.ui.ie=!!/msie
\[\\w.\]+/.exec(navigator.userAgent.toLowerCase());var
n=!1;t(document).on(\"mouseup\",function(){n=!1}),t.widget(\"ui.mouse\",{version:\"1.12.1\",options:{cancel:\"input,
textarea, button, select,
option\",distance:1,delay:0},\_mouseInit:function(){var
e=this;this.element.on(\"mousedown.\"+this.widgetName,function(t){return
e.\_mouseDown(t)}).on(\"click.\"+this.widgetName,function(i){return!0===t.data(i.target,e.widgetName+\".preventClickEvent\")?(t.removeData(i.target,e.widgetName+\".preventClickEvent\"),i.stopImmediatePropagation(),!1):void
0}),this.started=!1},\_mouseDestroy:function(){this.element.off(\".\"+this.widgetName),this.\_mouseMoveDelegate&&this.document.off(\"mousemove.\"+this.widgetName,this.\_mouseMoveDelegate).off(\"mouseup.\"+this.widgetName,this.\_mouseUpDelegate)},\_mouseDown:function(e){if(!n){this.\_mouseMoved=!1,this.\_mouseStarted&&this.\_mouseUp(e),this.\_mouseDownEvent=e;var
i=this,s=1===e.which,o=\"string\"==typeof
this.options.cancel&&e.target.nodeName?t(e.target).closest(this.options.cancel).length:!1;return
s&&!o&&this.\_mouseCapture(e)?(this.mouseDelayMet=!this.options.delay,this.mouseDelayMet\|\|(this.\_mouseDelayTimer=setTimeout(function(){i.mouseDelayMet=!0},this.options.delay)),this.\_mouseDistanceMet(e)&&this.\_mouseDelayMet(e)&&(this.\_mouseStarted=this.\_mouseStart(e)!==!1,!this.\_mouseStarted)?(e.preventDefault(),!0):(!0===t.data(e.target,this.widgetName+\".preventClickEvent\")&&t.removeData(e.target,this.widgetName+\".preventClickEvent\"),this.\_mouseMoveDelegate=function(t){return
i.\_mouseMove(t)},this.\_mouseUpDelegate=function(t){return
i.\_mouseUp(t)},this.document.on(\"mousemove.\"+this.widgetName,this.\_mouseMoveDelegate).on(\"mouseup.\"+this.widgetName,this.\_mouseUpDelegate),e.preventDefault(),n=!0,!0)):!0}},\_mouseMove:function(e){if(this.\_mouseMoved){if(t.ui.ie&&(!document.documentMode\|\|9\>document.documentMode)&&!e.button)return
this.\_mouseUp(e);if(!e.which)if(e.originalEvent.altKey\|\|e.originalEvent.ctrlKey\|\|e.originalEvent.metaKey\|\|e.originalEvent.shiftKey)this.ignoreMissingWhich=!0;else
if(!this.ignoreMissingWhich)return
this.\_mouseUp(e)}return(e.which\|\|e.button)&&(this.\_mouseMoved=!0),this.\_mouseStarted?(this.\_mouseDrag(e),e.preventDefault()):(this.\_mouseDistanceMet(e)&&this.\_mouseDelayMet(e)&&(this.\_mouseStarted=this.\_mouseStart(this.\_mouseDownEvent,e)!==!1,this.\_mouseStarted?this.\_mouseDrag(e):this.\_mouseUp(e)),!this.\_mouseStarted)},\_mouseUp:function(e){this.document.off(\"mousemove.\"+this.widgetName,this.\_mouseMoveDelegate).off(\"mouseup.\"+this.widgetName,this.\_mouseUpDelegate),this.\_mouseStarted&&(this.\_mouseStarted=!1,e.target===this.\_mouseDownEvent.target&&t.data(e.target,this.widgetName+\".preventClickEvent\",!0),this.\_mouseStop(e)),this.\_mouseDelayTimer&&(clearTimeout(this.\_mouseDelayTimer),delete
this.\_mouseDelayTimer),this.ignoreMissingWhich=!1,n=!1,e.preventDefault()},\_mouseDistanceMet:function(t){return
Math.max(Math.abs(this.\_mouseDownEvent.pageX-t.pageX),Math.abs(this.\_mouseDownEvent.pageY-t.pageY))\>=this.options.distance},\_mouseDelayMet:function(){return
this.mouseDelayMet},\_mouseStart:function(){},\_mouseDrag:function(){},\_mouseStop:function(){},\_mouseCapture:function(){return!0}}),t.ui.plugin={add:function(e,i,s){var
n,o=t.ui\[e\].prototype;for(n in
s)o.plugins\[n\]=o.plugins\[n\]\|\|\[\],o.plugins\[n\].push(\[i,s\[n\]\])},call:function(t,e,i,s){var
n,o=t.plugins\[e\];if(o&&(s\|\|t.element\[0\].parentNode&&11!==t.element\[0\].parentNode.nodeType))for(n=0;o.length\>n;n++)t.options\[o\[n\]\[0\]\]&&o\[n\]\[1\].apply(t.element,i)}},t.widget(\"ui.resizable\",t.ui.mouse,{version:\"1.12.1\",widgetEventPrefix:\"resize\",options:{alsoResize:!1,animate:!1,animateDuration:\"slow\",animateEasing:\"swing\",aspectRatio:!1,autoHide:!1,classes:{\"ui-resizable-se\":\"ui-icon
ui-icon-gripsmall-diagonal-se\"},containment:!1,ghost:!1,grid:!1,handles:\"e,s,se\",helper:!1,maxHeight:null,maxWidth:null,minHeight:10,minWidth:10,zIndex:90,resize:null,start:null,stop:null},\_num:function(t){return
parseFloat(t)\|\|0},\_isNumber:function(t){return!isNaN(parseFloat(t))},\_hasScroll:function(e,i){if(\"hidden\"===t(e).css(\"overflow\"))return!1;var
s=i&&\"left\"===i?\"scrollLeft\":\"scrollTop\",n=!1;return
e\[s\]\>0?!0:(e\[s\]=1,n=e\[s\]\>0,e\[s\]=0,n)},\_create:function(){var
e,i=this.options,s=this;this.\_addClass(\"ui-resizable\"),t.extend(this,{\_aspectRatio:!!i.aspectRatio,aspectRatio:i.aspectRatio,originalElement:this.element,\_proportionallyResizeElements:\[\],\_helper:i.helper\|\|i.ghost\|\|i.animate?i.helper\|\|\"ui-resizable-helper\":null}),this.element\[0\].nodeName.match(/\^(canvas\|textarea\|input\|select\|button\|img)\$/i)&&(this.element.wrap(t(\"

::: {.ui-wrapper style="overflow: hidden;"}
:::

\").css({position:this.element.css(\"position\"),width:this.element.outerWidth(),height:this.element.outerHeight(),top:this.element.css(\"top\"),left:this.element.css(\"left\")})),this.element=this.element.parent().data(\"ui-resizable\",this.element.resizable(\"instance\")),this.elementIsWrapper=!0,e={marginTop:this.originalElement.css(\"marginTop\"),marginRight:this.originalElement.css(\"marginRight\"),marginBottom:this.originalElement.css(\"marginBottom\"),marginLeft:this.originalElement.css(\"marginLeft\")},this.element.css(e),this.originalElement.css(\"margin\",0),this.originalResizeStyle=this.originalElement.css(\"resize\"),this.originalElement.css(\"resize\",\"none\"),this.\_proportionallyResizeElements.push(this.originalElement.css({position:\"static\",zoom:1,display:\"block\"})),this.originalElement.css(e),this.\_proportionallyResize()),this.\_setupHandles(),i.autoHide&&t(this.element).on(\"mouseenter\",function(){i.disabled\|\|(s.\_removeClass(\"ui-resizable-autohide\"),s.\_handles.show())}).on(\"mouseleave\",function(){i.disabled\|\|s.resizing\|\|(s.\_addClass(\"ui-resizable-autohide\"),s.\_handles.hide())}),this.\_mouseInit()},\_destroy:function(){this.\_mouseDestroy();var
e,i=function(e){t(e).removeData(\"resizable\").removeData(\"ui-resizable\").off(\".resizable\").find(\".ui-resizable-handle\").remove()};return
this.elementIsWrapper&&(i(this.element),e=this.element,this.originalElement.css({position:e.css(\"position\"),width:e.outerWidth(),height:e.outerHeight(),top:e.css(\"top\"),left:e.css(\"left\")}).insertAfter(e),e.remove()),this.originalElement.css(\"resize\",this.originalResizeStyle),i(this.originalElement),this},\_setOption:function(t,e){switch(this.\_super(t,e),t){case\"handles\":this.\_removeHandles(),this.\_setupHandles();break;default:}},\_setupHandles:function(){var
e,i,s,n,o,a=this.options,r=this;if(this.handles=a.handles\|\|(t(\".ui-resizable-handle\",this.element).length?{n:\".ui-resizable-n\",e:\".ui-resizable-e\",s:\".ui-resizable-s\",w:\".ui-resizable-w\",se:\".ui-resizable-se\",sw:\".ui-resizable-sw\",ne:\".ui-resizable-ne\",nw:\".ui-resizable-nw\"}:\"e,s,se\"),this.\_handles=t(),this.handles.constructor===String)for(\"all\"===this.handles&&(this.handles=\"n,e,s,w,se,sw,ne,nw\"),s=this.handles.split(\",\"),this.handles={},i=0;s.length\>i;i++)e=t.trim(s\[i\]),n=\"ui-resizable-\"+e,o=t(\"

<div>

\"),this.\_addClass(o,\"ui-resizable-handle
\"+n),o.css({zIndex:a.zIndex}),this.handles\[e\]=\".ui-resizable-\"+e,this.element.append(o);this.\_renderAxis=function(e){var
i,s,n,o;e=e\|\|this.element;for(i in
this.handles)this.handles\[i\].constructor===String?this.handles\[i\]=this.element.children(this.handles\[i\]).first().show():(this.handles\[i\].jquery\|\|this.handles\[i\].nodeType)&&(this.handles\[i\]=t(this.handles\[i\]),this.\_on(this.handles\[i\],{mousedown:r.\_mouseDown})),this.elementIsWrapper&&this.originalElement\[0\].nodeName.match(/\^(textarea\|input\|select\|button)\$/i)&&(s=t(this.handles\[i\],this.element),o=/sw\|ne\|nw\|se\|n\|s/.test(i)?s.outerHeight():s.outerWidth(),n=\[\"padding\",/ne\|nw\|n/.test(i)?\"Top\":/se\|sw\|s/.test(i)?\"Bottom\":/\^e\$/.test(i)?\"Right\":\"Left\"\].join(\"\"),e.css(n,o),this.\_proportionallyResize()),this.\_handles=this.\_handles.add(this.handles\[i\])},this.\_renderAxis(this.element),this.\_handles=this.\_handles.add(this.element.find(\".ui-resizable-handle\")),this.\_handles.disableSelection(),this.\_handles.on(\"mouseover\",function(){r.resizing\|\|(this.className&&(o=this.className.match(/ui-resizable-(se\|sw\|ne\|nw\|n\|e\|s\|w)/i)),r.axis=o&&o\[1\]?o\[1\]:\"se\")}),a.autoHide&&(this.\_handles.hide(),this.\_addClass(\"ui-resizable-autohide\"))},\_removeHandles:function(){this.\_handles.remove()},\_mouseCapture:function(e){var
i,s,n=!1;for(i in
this.handles)s=t(this.handles\[i\])\[0\],(s===e.target\|\|t.contains(s,e.target))&&(n=!0);return!this.options.disabled&&n},\_mouseStart:function(e){var
i,s,n,o=this.options,a=this.element;return
this.resizing=!0,this.\_renderProxy(),i=this.\_num(this.helper.css(\"left\")),s=this.\_num(this.helper.css(\"top\")),o.containment&&(i+=t(o.containment).scrollLeft()\|\|0,s+=t(o.containment).scrollTop()\|\|0),this.offset=this.helper.offset(),this.position={left:i,top:s},this.size=this.\_helper?{width:this.helper.width(),height:this.helper.height()}:{width:a.width(),height:a.height()},this.originalSize=this.\_helper?{width:a.outerWidth(),height:a.outerHeight()}:{width:a.width(),height:a.height()},this.sizeDiff={width:a.outerWidth()-a.width(),height:a.outerHeight()-a.height()},this.originalPosition={left:i,top:s},this.originalMousePosition={left:e.pageX,top:e.pageY},this.aspectRatio=\"number\"==typeof
o.aspectRatio?o.aspectRatio:this.originalSize.width/this.originalSize.height\|\|1,n=t(\".ui-resizable-\"+this.axis).css(\"cursor\"),t(\"body\").css(\"cursor\",\"auto\"===n?this.axis+\"-resize\":n),this.\_addClass(\"ui-resizable-resizing\"),this.\_propagate(\"start\",e),!0},\_mouseDrag:function(e){var
i,s,n=this.originalMousePosition,o=this.axis,a=e.pageX-n.left\|\|0,r=e.pageY-n.top\|\|0,h=this.\_change\[o\];return
this.\_updatePrevProperties(),h?(i=h.apply(this,\[e,a,r\]),this.\_updateVirtualBoundaries(e.shiftKey),(this.\_aspectRatio\|\|e.shiftKey)&&(i=this.\_updateRatio(i,e)),i=this.\_respectSize(i,e),this.\_updateCache(i),this.\_propagate(\"resize\",e),s=this.\_applyChanges(),!this.\_helper&&this.\_proportionallyResizeElements.length&&this.\_proportionallyResize(),t.isEmptyObject(s)\|\|(this.\_updatePrevProperties(),this.\_trigger(\"resize\",e,this.ui()),this.\_applyChanges()),!1):!1},\_mouseStop:function(e){this.resizing=!1;var
i,s,n,o,a,r,h,l=this.options,c=this;return
this.\_helper&&(i=this.\_proportionallyResizeElements,s=i.length&&/textarea/i.test(i\[0\].nodeName),n=s&&this.\_hasScroll(i\[0\],\"left\")?0:c.sizeDiff.height,o=s?0:c.sizeDiff.width,a={width:c.helper.width()-o,height:c.helper.height()-n},r=parseFloat(c.element.css(\"left\"))+(c.position.left-c.originalPosition.left)\|\|null,h=parseFloat(c.element.css(\"top\"))+(c.position.top-c.originalPosition.top)\|\|null,l.animate\|\|this.element.css(t.extend(a,{top:h,left:r})),c.helper.height(c.size.height),c.helper.width(c.size.width),this.\_helper&&!l.animate&&this.\_proportionallyResize()),t(\"body\").css(\"cursor\",\"auto\"),this.\_removeClass(\"ui-resizable-resizing\"),this.\_propagate(\"stop\",e),this.\_helper&&this.helper.remove(),!1},\_updatePrevProperties:function(){this.prevPosition={top:this.position.top,left:this.position.left},this.prevSize={width:this.size.width,height:this.size.height}},\_applyChanges:function(){var
t={};return
this.position.top!==this.prevPosition.top&&(t.top=this.position.top+\"px\"),this.position.left!==this.prevPosition.left&&(t.left=this.position.left+\"px\"),this.size.width!==this.prevSize.width&&(t.width=this.size.width+\"px\"),this.size.height!==this.prevSize.height&&(t.height=this.size.height+\"px\"),this.helper.css(t),t},\_updateVirtualBoundaries:function(t){var
e,i,s,n,o,a=this.options;o={minWidth:this.\_isNumber(a.minWidth)?a.minWidth:0,maxWidth:this.\_isNumber(a.maxWidth)?a.maxWidth:1/0,minHeight:this.\_isNumber(a.minHeight)?a.minHeight:0,maxHeight:this.\_isNumber(a.maxHeight)?a.maxHeight:1/0},(this.\_aspectRatio\|\|t)&&(e=o.minHeight\*this.aspectRatio,s=o.minWidth/this.aspectRatio,i=o.maxHeight\*this.aspectRatio,n=o.maxWidth/this.aspectRatio,e\>o.minWidth&&(o.minWidth=e),s\>o.minHeight&&(o.minHeight=s),o.maxWidth\>i&&(o.maxWidth=i),o.maxHeight\>n&&(o.maxHeight=n)),this.\_vBoundaries=o},\_updateCache:function(t){this.offset=this.helper.offset(),this.\_isNumber(t.left)&&(this.position.left=t.left),this.\_isNumber(t.top)&&(this.position.top=t.top),this.\_isNumber(t.height)&&(this.size.height=t.height),this.\_isNumber(t.width)&&(this.size.width=t.width)},\_updateRatio:function(t){var
e=this.position,i=this.size,s=this.axis;return
this.\_isNumber(t.height)?t.width=t.height\*this.aspectRatio:this.\_isNumber(t.width)&&(t.height=t.width/this.aspectRatio),\"sw\"===s&&(t.left=e.left+(i.width-t.width),t.top=null),\"nw\"===s&&(t.top=e.top+(i.height-t.height),t.left=e.left+(i.width-t.width)),t},\_respectSize:function(t){var
e=this.\_vBoundaries,i=this.axis,s=this.\_isNumber(t.width)&&e.maxWidth&&e.maxWidtht.width,a=this.\_isNumber(t.height)&&e.minHeight&&e.minHeight\>t.height,r=this.originalPosition.left+this.originalSize.width,h=this.originalPosition.top+this.originalSize.height,l=/sw\|nw\|w/.test(i),c=/nw\|ne\|n/.test(i);return
o&&(t.width=e.minWidth),a&&(t.height=e.minHeight),s&&(t.width=e.maxWidth),n&&(t.height=e.maxHeight),o&&l&&(t.left=r-e.minWidth),s&&l&&(t.left=r-e.maxWidth),a&&c&&(t.top=h-e.minHeight),n&&c&&(t.top=h-e.maxHeight),t.width\|\|t.height\|\|t.left\|\|!t.top?t.width\|\|t.height\|\|t.top\|\|!t.left\|\|(t.left=null):t.top=null,t},\_getPaddingPlusBorderDimensions:function(t){for(var
e=0,i=\[\],s=\[t.css(\"borderTopWidth\"),t.css(\"borderRightWidth\"),t.css(\"borderBottomWidth\"),t.css(\"borderLeftWidth\")\],n=\[t.css(\"paddingTop\"),t.css(\"paddingRight\"),t.css(\"paddingBottom\"),t.css(\"paddingLeft\")\];4\>e;e++)i\[e\]=parseFloat(s\[e\])\|\|0,i\[e\]+=parseFloat(n\[e\])\|\|0;return{height:i\[0\]+i\[2\],width:i\[1\]+i\[3\]}},\_proportionallyResize:function(){if(this.\_proportionallyResizeElements.length)for(var
t,e=0,i=this.helper\|\|this.element;this.\_proportionallyResizeElements.length\>e;e++)t=this.\_proportionallyResizeElements\[e\],this.outerDimensions\|\|(this.outerDimensions=this.\_getPaddingPlusBorderDimensions(t)),t.css({height:i.height()-this.outerDimensions.height\|\|0,width:i.width()-this.outerDimensions.width\|\|0})},\_renderProxy:function(){var
e=this.element,i=this.options;this.elementOffset=e.offset(),this.\_helper?(this.helper=this.helper\|\|t(\"

::: {style="overflow:hidden;"}
:::

\"),this.\_addClass(this.helper,this.\_helper),this.helper.css({width:this.element.outerWidth(),height:this.element.outerHeight(),position:\"absolute\",left:this.elementOffset.left+\"px\",top:this.elementOffset.top+\"px\",zIndex:++i.zIndex}),this.helper.appendTo(\"body\").disableSelection()):this.helper=this.element
},\_change:{e:function(t,e){return{width:this.originalSize.width+e}},w:function(t,e){var
i=this.originalSize,s=this.originalPosition;return{left:s.left+e,width:i.width-e}},n:function(t,e,i){var
s=this.originalSize,n=this.originalPosition;return{top:n.top+i,height:s.height-i}},s:function(t,e,i){return{height:this.originalSize.height+i}},se:function(e,i,s){return
t.extend(this.\_change.s.apply(this,arguments),this.\_change.e.apply(this,\[e,i,s\]))},sw:function(e,i,s){return
t.extend(this.\_change.s.apply(this,arguments),this.\_change.w.apply(this,\[e,i,s\]))},ne:function(e,i,s){return
t.extend(this.\_change.n.apply(this,arguments),this.\_change.e.apply(this,\[e,i,s\]))},nw:function(e,i,s){return
t.extend(this.\_change.n.apply(this,arguments),this.\_change.w.apply(this,\[e,i,s\]))}},\_propagate:function(e,i){t.ui.plugin.call(this,e,\[i,this.ui()\]),\"resize\"!==e&&this.\_trigger(e,i,this.ui())},plugins:{},ui:function(){return{originalElement:this.originalElement,element:this.element,helper:this.helper,position:this.position,size:this.size,originalSize:this.originalSize,originalPosition:this.originalPosition}}}),t.ui.plugin.add(\"resizable\",\"animate\",{stop:function(e){var
i=t(this).resizable(\"instance\"),s=i.options,n=i.\_proportionallyResizeElements,o=n.length&&/textarea/i.test(n\[0\].nodeName),a=o&&i.\_hasScroll(n\[0\],\"left\")?0:i.sizeDiff.height,r=o?0:i.sizeDiff.width,h={width:i.size.width-r,height:i.size.height-a},l=parseFloat(i.element.css(\"left\"))+(i.position.left-i.originalPosition.left)\|\|null,c=parseFloat(i.element.css(\"top\"))+(i.position.top-i.originalPosition.top)\|\|null;i.element.animate(t.extend(h,c&&l?{top:c,left:l}:{}),{duration:s.animateDuration,easing:s.animateEasing,step:function(){var
s={width:parseFloat(i.element.css(\"width\")),height:parseFloat(i.element.css(\"height\")),top:parseFloat(i.element.css(\"top\")),left:parseFloat(i.element.css(\"left\"))};n&&n.length&&t(n\[0\]).css({width:s.width,height:s.height}),i.\_updateCache(s),i.\_propagate(\"resize\",e)}})}}),t.ui.plugin.add(\"resizable\",\"containment\",{start:function(){var
e,i,s,n,o,a,r,h=t(this).resizable(\"instance\"),l=h.options,c=h.element,u=l.containment,d=u
instanceof
t?u.get(0):/parent/.test(u)?c.parent().get(0):u;d&&(h.containerElement=t(d),/document/.test(u)\|\|u===document?(h.containerOffset={left:0,top:0},h.containerPosition={left:0,top:0},h.parentData={element:t(document),left:0,top:0,width:t(document).width(),height:t(document).height()\|\|document.body.parentNode.scrollHeight}):(e=t(d),i=\[\],t(\[\"Top\",\"Right\",\"Left\",\"Bottom\"\]).each(function(t,s){i\[t\]=h.\_num(e.css(\"padding\"+s))}),h.containerOffset=e.offset(),h.containerPosition=e.position(),h.containerSize={height:e.innerHeight()-i\[3\],width:e.innerWidth()-i\[1\]},s=h.containerOffset,n=h.containerSize.height,o=h.containerSize.width,a=h.\_hasScroll(d,\"left\")?d.scrollWidth:o,r=h.\_hasScroll(d)?d.scrollHeight:n,h.parentData={element:d,left:s.left,top:s.top,width:a,height:r}))},resize:function(e){var
i,s,n,o,a=t(this).resizable(\"instance\"),r=a.options,h=a.containerOffset,l=a.position,c=a.\_aspectRatio\|\|e.shiftKey,u={top:0,left:0},d=a.containerElement,p=!0;d\[0\]!==document&&/static/.test(d.css(\"position\"))&&(u=h),l.left\<(a.\_helper?h.left:0)&&(a.size.width=a.size.width+(a.\_helper?a.position.left-h.left:a.position.left-u.left),c&&(a.size.height=a.size.width/a.aspectRatio,p=!1),a.position.left=r.helper?h.left:0),l.top\<(a.\_helper?h.top:0)&&(a.size.height=a.size.height+(a.\_helper?a.position.top-h.top:a.position.top),c&&(a.size.width=a.size.height\*a.aspectRatio,p=!1),a.position.top=a.\_helper?h.top:0),n=a.containerElement.get(0)===a.element.parent().get(0),o=/relative\|absolute/.test(a.containerElement.css(\"position\")),n&&o?(a.offset.left=a.parentData.left+a.position.left,a.offset.top=a.parentData.top+a.position.top):(a.offset.left=a.element.offset().left,a.offset.top=a.element.offset().top),i=Math.abs(a.sizeDiff.width+(a.\_helper?a.offset.left-u.left:a.offset.left-h.left)),s=Math.abs(a.sizeDiff.height+(a.\_helper?a.offset.top-u.top:a.offset.top-h.top)),i+a.size.width\>=a.parentData.width&&(a.size.width=a.parentData.width-i,c&&(a.size.height=a.size.width/a.aspectRatio,p=!1)),s+a.size.height\>=a.parentData.height&&(a.size.height=a.parentData.height-s,c&&(a.size.width=a.size.height\*a.aspectRatio,p=!1)),p\|\|(a.position.left=a.prevPosition.left,a.position.top=a.prevPosition.top,a.size.width=a.prevSize.width,a.size.height=a.prevSize.height)},stop:function(){var
e=t(this).resizable(\"instance\"),i=e.options,s=e.containerOffset,n=e.containerPosition,o=e.containerElement,a=t(e.helper),r=a.offset(),h=a.outerWidth()-e.sizeDiff.width,l=a.outerHeight()-e.sizeDiff.height;e.\_helper&&!i.animate&&/relative/.test(o.css(\"position\"))&&t(this).css({left:r.left-n.left-s.left,width:h,height:l}),e.\_helper&&!i.animate&&/static/.test(o.css(\"position\"))&&t(this).css({left:r.left-n.left-s.left,width:h,height:l})}}),t.ui.plugin.add(\"resizable\",\"alsoResize\",{start:function(){var
e=t(this).resizable(\"instance\"),i=e.options;t(i.alsoResize).each(function(){var
e=t(this);e.data(\"ui-resizable-alsoresize\",{width:parseFloat(e.width()),height:parseFloat(e.height()),left:parseFloat(e.css(\"left\")),top:parseFloat(e.css(\"top\"))})})},resize:function(e,i){var
s=t(this).resizable(\"instance\"),n=s.options,o=s.originalSize,a=s.originalPosition,r={height:s.size.height-o.height\|\|0,width:s.size.width-o.width\|\|0,top:s.position.top-a.top\|\|0,left:s.position.left-a.left\|\|0};t(n.alsoResize).each(function(){var
e=t(this),s=t(this).data(\"ui-resizable-alsoresize\"),n={},o=e.parents(i.originalElement\[0\]).length?\[\"width\",\"height\"\]:\[\"width\",\"height\",\"top\",\"left\"\];t.each(o,function(t,e){var
i=(s\[e\]\|\|0)+(r\[e\]\|\|0);i&&i\>=0&&(n\[e\]=i\|\|null)}),e.css(n)})},stop:function(){t(this).removeData(\"ui-resizable-alsoresize\")}}),t.ui.plugin.add(\"resizable\",\"ghost\",{start:function(){var
e=t(this).resizable(\"instance\"),i=e.size;e.ghost=e.originalElement.clone(),e.ghost.css({opacity:.25,display:\"block\",position:\"relative\",height:i.height,width:i.width,margin:0,left:0,top:0}),e.\_addClass(e.ghost,\"ui-resizable-ghost\"),t.uiBackCompat!==!1&&\"string\"==typeof
e.options.ghost&&e.ghost.addClass(this.options.ghost),e.ghost.appendTo(e.helper)},resize:function(){var
e=t(this).resizable(\"instance\");e.ghost&&e.ghost.css({position:\"relative\",height:e.size.height,width:e.size.width})},stop:function(){var
e=t(this).resizable(\"instance\");e.ghost&&e.helper&&e.helper.get(0).removeChild(e.ghost.get(0))}}),t.ui.plugin.add(\"resizable\",\"grid\",{resize:function(){var
e,i=t(this).resizable(\"instance\"),s=i.options,n=i.size,o=i.originalSize,a=i.originalPosition,r=i.axis,h=\"number\"==typeof
s.grid?\[s.grid,s.grid\]:s.grid,l=h\[0\]\|\|1,c=h\[1\]\|\|1,u=Math.round((n.width-o.width)/l)\*l,d=Math.round((n.height-o.height)/c)\*c,p=o.width+u,f=o.height+d,m=s.maxWidth&&p\>s.maxWidth,g=s.maxHeight&&f\>s.maxHeight,\_=s.minWidth&&s.minWidth\>p,v=s.minHeight&&s.minHeight\>f;s.grid=h,\_&&(p+=l),v&&(f+=c),m&&(p-=l),g&&(f-=c),/\^(se\|s\|e)\$/.test(r)?(i.size.width=p,i.size.height=f):/\^(ne)\$/.test(r)?(i.size.width=p,i.size.height=f,i.position.top=a.top-d):/\^(sw)\$/.test(r)?(i.size.width=p,i.size.height=f,i.position.left=a.left-u):((0\>=f-c\|\|0\>=p-l)&&(e=i.\_getPaddingPlusBorderDimensions(this)),f-c\>0?(i.size.height=f,i.position.top=a.top-d):(f=c-e.height,i.size.height=f,i.position.top=a.top+o.height-f),p-l\>0?(i.size.width=p,i.position.left=a.left-u):(p=l-e.width,i.size.width=p,i.position.left=a.left+o.width-p))}}),t.ui.resizable});/\*\*
\* Copyright (c) 2007 Ariel Flesler - aflesler ○ gmail • com \|
https://github.com/flesler \* Licensed under MIT \* \@author Ariel
Flesler \* \@version 2.1.2 \*/ ;(function(f){\"use
strict\";\"function\"===typeof
define&&define.amd?define(\[\"jquery\"\],f):\"undefined\"!==typeof
module&&module.exports?module.exports=f(require(\"jquery\")):f(jQuery)})(function(\$){\"use
strict\";function
n(a){return!a.nodeName\|\|-1!==\$.inArray(a.nodeName.toLowerCase(),\[\"iframe\",\"\#document\",\"html\",\"body\"\])}function
h(a){return \$.isFunction(a)\|\|\$.isPlainObject(a)?a:{top:a,left:a}}var
p=\$.scrollTo=function(a,d,b){return
\$(window).scrollTo(a,d,b)};p.defaults={axis:\"xy\",duration:0,limit:!0};\$.fn.scrollTo=function(a,d,b){\"object\"===
typeof d&&(b=d,d=0);\"function\"===typeof
b&&(b={onAfter:b});\"max\"===a&&(a=9E9);b=\$.extend({},p.defaults,b);d=d\|\|b.duration;var
u=b.queue&&1=f\[g\]?0:Math.min(f\[g\],n));!a&&1-1){targetElements.on(evt+EVENT\_NAMESPACE,function
elementToggle(event){\$.powerTip.toggle(this,event)})}else{targetElements.on(evt+EVENT\_NAMESPACE,function
elementOpen(event){\$.powerTip.show(this,event)})}});\$.each(options.closeEvents,function(idx,evt){if(\$.inArray(evt,options.openEvents)\<0){targetElements.on(evt+EVENT\_NAMESPACE,function
elementClose(event){\$.powerTip.hide(this,!isMouseEvent(event))})}});targetElements.on(\"keydown\"+EVENT\_NAMESPACE,function
elementKeyDown(event){if(event.keyCode===27){\$.powerTip.hide(this,true)}})}return
targetElements};\$.fn.powerTip.defaults={fadeInTime:200,fadeOutTime:100,followMouse:false,popupId:\"powerTip\",popupClass:null,intentSensitivity:7,intentPollInterval:100,closeDelay:100,placement:\"n\",smartPlacement:false,offset:10,mouseOnToPopup:false,manual:false,openEvents:\[\"mouseenter\",\"focus\"\],closeEvents:\[\"mouseleave\",\"blur\"\]};\$.fn.powerTip.smartPlacementLists={n:\[\"n\",\"ne\",\"nw\",\"s\"\],e:\[\"e\",\"ne\",\"se\",\"w\",\"nw\",\"sw\",\"n\",\"s\",\"e\"\],s:\[\"s\",\"se\",\"sw\",\"n\"\],w:\[\"w\",\"nw\",\"sw\",\"e\",\"ne\",\"se\",\"n\",\"s\",\"w\"\],nw:\[\"nw\",\"w\",\"sw\",\"n\",\"s\",\"se\",\"nw\"\],ne:\[\"ne\",\"e\",\"se\",\"n\",\"s\",\"sw\",\"ne\"\],sw:\[\"sw\",\"w\",\"nw\",\"s\",\"n\",\"ne\",\"sw\"\],se:\[\"se\",\"e\",\"ne\",\"s\",\"n\",\"nw\",\"se\"\],\"nw-alt\":\[\"nw-alt\",\"n\",\"ne-alt\",\"sw-alt\",\"s\",\"se-alt\",\"w\",\"e\"\],\"ne-alt\":\[\"ne-alt\",\"n\",\"nw-alt\",\"se-alt\",\"s\",\"sw-alt\",\"e\",\"w\"\],\"sw-alt\":\[\"sw-alt\",\"s\",\"se-alt\",\"nw-alt\",\"n\",\"ne-alt\",\"w\",\"e\"\],\"se-alt\":\[\"se-alt\",\"s\",\"sw-alt\",\"ne-alt\",\"n\",\"nw-alt\",\"e\",\"w\"\]};\$.powerTip={show:function
apiShowTip(element,event){if(isMouseEvent(event)){trackMouse(event);session.previousX=event.pageX;session.previousY=event.pageY;\$(element).data(DATA\_DISPLAYCONTROLLER).show()}else{\$(element).first().data(DATA\_DISPLAYCONTROLLER).show(true,true)}return
element},reposition:function
apiResetPosition(element){\$(element).first().data(DATA\_DISPLAYCONTROLLER).resetPosition();return
element},hide:function apiCloseTip(element,immediate){var
displayController;immediate=element?immediate:true;if(element){displayController=\$(element).first().data(DATA\_DISPLAYCONTROLLER)}else
if(session.activeHover){displayController=session.activeHover.data(DATA\_DISPLAYCONTROLLER)}if(displayController){displayController.hide(immediate)}return
element},toggle:function
apiToggle(element,event){if(session.activeHover&&session.activeHover.is(element)){\$.powerTip.hide(element,!isMouseEvent(event))}else{\$.powerTip.show(element,event)}return
element}};\$.powerTip.showTip=\$.powerTip.show;\$.powerTip.closeTip=\$.powerTip.hide;function
CSSCoordinates(){var
me=this;me.top=\"auto\";me.left=\"auto\";me.right=\"auto\";me.bottom=\"auto\";me.set=function(property,value){if(\$.isNumeric(value)){me\[property\]=Math.round(value)}}}function
DisplayController(element,options,tipController){var
hoverTimer=null,myCloseDelay=null;function
openTooltip(immediate,forceOpen){cancelTimer();if(!element.data(DATA\_HASACTIVEHOVER)){if(!immediate){session.tipOpenImminent=true;hoverTimer=setTimeout(function
intentDelay(){hoverTimer=null;checkForIntent()},options.intentPollInterval)}else{if(forceOpen){element.data(DATA\_FORCEDOPEN,true)}closeAnyDelayed();tipController.showTip(element)}}else{cancelClose()}}function
closeTooltip(disableDelay){if(myCloseDelay){myCloseDelay=session.closeDelayTimeout=clearTimeout(myCloseDelay);session.delayInProgress=false}cancelTimer();session.tipOpenImminent=false;if(element.data(DATA\_HASACTIVEHOVER)){element.data(DATA\_FORCEDOPEN,false);if(!disableDelay){session.delayInProgress=true;session.closeDelayTimeout=setTimeout(function
closeDelay(){session.closeDelayTimeout=null;tipController.hideTip(element);session.delayInProgress=false;myCloseDelay=null},options.closeDelay);myCloseDelay=session.closeDelayTimeout}else{tipController.hideTip(element)}}}function
checkForIntent(){var
xDifference=Math.abs(session.previousX-session.currentX),yDifference=Math.abs(session.previousY-session.currentY),totalDifference=xDifference+yDifference;if(totalDifference\",{id:options.popupId});if(\$body.length===0){\$body=\$(\"body\")}\$body.append(tipElement);session.tooltips=session.tooltips?session.tooltips.add(tipElement):tipElement}if(options.followMouse){if(!tipElement.data(DATA\_HASMOUSEMOVE)){\$document.on(\"mousemove\"+EVENT\_NAMESPACE,positionTipOnCursor);\$window.on(\"scroll\"+EVENT\_NAMESPACE,positionTipOnCursor);tipElement.data(DATA\_HASMOUSEMOVE,true)}}function
beginShowTip(element){element.data(DATA\_HASACTIVEHOVER,true);tipElement.queue(function
queueTipInit(next){showTip(element);next()})}function
showTip(element){var
tipContent;if(!element.data(DATA\_HASACTIVEHOVER)){return}if(session.isTipOpen){if(!session.isClosing){hideTip(session.activeHover)}tipElement.delay(100).queue(function
queueTipAgain(next){showTip(element);next()});return}element.trigger(\"powerTipPreRender\");tipContent=getTooltipContent(element);if(tipContent){tipElement.empty().append(tipContent)}else{return}element.trigger(\"powerTipRender\");session.activeHover=element;session.isTipOpen=true;tipElement.data(DATA\_MOUSEONTOTIP,options.mouseOnToPopup);tipElement.addClass(options.popupClass);if(!options.followMouse\|\|element.data(DATA\_FORCEDOPEN)){positionTipOnElement(element);session.isFixedTipOpen=true}else{positionTipOnCursor()}if(!element.data(DATA\_FORCEDOPEN)&&!options.followMouse){\$document.on(\"click\"+EVENT\_NAMESPACE,function
documentClick(event){var
target=event.target;if(target!==element\[0\]){if(options.mouseOnToPopup){if(target!==tipElement\[0\]&&!\$.contains(tipElement\[0\],target)){\$.powerTip.hide()}}else{\$.powerTip.hide()}}})}if(options.mouseOnToPopup&&!options.manual){tipElement.on(\"mouseenter\"+EVENT\_NAMESPACE,function
tipMouseEnter(){if(session.activeHover){session.activeHover.data(DATA\_DISPLAYCONTROLLER).cancel()}});tipElement.on(\"mouseleave\"+EVENT\_NAMESPACE,function
tipMouseLeave(){if(session.activeHover){session.activeHover.data(DATA\_DISPLAYCONTROLLER).hide()}})}tipElement.fadeIn(options.fadeInTime,function
fadeInCallback(){if(!session.desyncTimeout){session.desyncTimeout=setInterval(closeDesyncedTip,500)}element.trigger(\"powerTipOpen\")})}function
hideTip(element){session.isClosing=true;session.isTipOpen=false;session.desyncTimeout=clearInterval(session.desyncTimeout);element.data(DATA\_HASACTIVEHOVER,false);element.data(DATA\_FORCEDOPEN,false);\$document.off(\"click\"+EVENT\_NAMESPACE);tipElement.off(EVENT\_NAMESPACE);tipElement.fadeOut(options.fadeOutTime,function
fadeOutCallback(){var coords=new
CSSCoordinates;session.activeHover=null;session.isClosing=false;session.isFixedTipOpen=false;tipElement.removeClass();coords.set(\"top\",session.currentY+options.offset);coords.set(\"left\",session.currentX+options.offset);tipElement.css(coords);element.trigger(\"powerTipClose\")})}function
positionTipOnCursor(){var
tipWidth,tipHeight,coords,collisions,collisionCount;if(!session.isFixedTipOpen&&(session.isTipOpen\|\|session.tipOpenImminent&&tipElement.data(DATA\_HASMOUSEMOVE))){tipWidth=tipElement.outerWidth();tipHeight=tipElement.outerHeight();coords=new
CSSCoordinates;coords.set(\"top\",session.currentY+options.offset);coords.set(\"left\",session.currentX+options.offset);collisions=getViewportCollisions(coords,tipWidth,tipHeight);if(collisions!==Collision.none){collisionCount=countFlags(collisions);if(collisionCount===1){if(collisions===Collision.right){coords.set(\"left\",session.scrollLeft+session.windowWidth-tipWidth)}else
if(collisions===Collision.bottom){coords.set(\"top\",session.scrollTop+session.windowHeight-tipHeight)}}else{coords.set(\"left\",session.currentX-tipWidth-options.offset);coords.set(\"top\",session.currentY-tipHeight-options.offset)}}tipElement.css(coords)}}function
positionTipOnElement(element){var
priorityList,finalPlacement;if(options.smartPlacement\|\|options.followMouse&&element.data(DATA\_FORCEDOPEN)){priorityList=\$.fn.powerTip.smartPlacementLists\[options.placement\];\$.each(priorityList,function(idx,pos){var
collisions=getViewportCollisions(placeTooltip(element,pos),tipElement.outerWidth(),tipElement.outerHeight());finalPlacement=pos;return
collisions!==Collision.none})}else{placeTooltip(element,options.placement);finalPlacement=options.placement}tipElement.removeClass(\"w
nw sw e ne se n s w se-alt sw-alt ne-alt
nw-alt\");tipElement.addClass(finalPlacement)}function
placeTooltip(element,placement){var
iterationCount=0,tipWidth,tipHeight,coords=new
CSSCoordinates;coords.set(\"top\",0);coords.set(\"left\",0);tipElement.css(coords);do{tipWidth=tipElement.outerWidth();tipHeight=tipElement.outerHeight();coords=placementCalculator.compute(element,placement,tipWidth,tipHeight,options.offset);tipElement.css(coords)}while(++iterationCount\<=5&&(tipWidth!==tipElement.outerWidth()\|\|tipHeight!==tipElement.outerHeight()));return
coords}function closeDesyncedTip(){var
isDesynced=false,hasDesyncableCloseEvent=\$.grep(\[\"mouseleave\",\"mouseout\",\"blur\",\"focusout\"\],function(eventType){return
\$.inArray(eventType,options.closeEvents)!==-1}).length\>0;if(session.isTipOpen&&!session.isClosing&&!session.delayInProgress&&hasDesyncableCloseEvent){if(session.activeHover.data(DATA\_HASACTIVEHOVER)===false\|\|session.activeHover.is(\":disabled\")){isDesynced=true}else
if(!isMouseOver(session.activeHover)&&!session.activeHover.is(\":focus\")&&!session.activeHover.data(DATA\_FORCEDOPEN)){if(tipElement.data(DATA\_MOUSEONTOTIP)){if(!isMouseOver(tipElement)){isDesynced=true}}else{isDesynced=true}}if(isDesynced){hideTip(session.activeHover)}}}this.showTip=beginShowTip;this.hideTip=hideTip;this.resetPosition=positionTipOnElement}function
isSvgElement(element){return
Boolean(window.SVGElement&&element\[0\]instanceof SVGElement)}function
isMouseEvent(event){return
Boolean(event&&\$.inArray(event.type,MOUSE\_EVENTS)\>-1&&typeof
event.pageX===\"number\")}function
initTracking(){if(!session.mouseTrackingActive){session.mouseTrackingActive=true;getViewportDimensions();\$(getViewportDimensions);\$document.on(\"mousemove\"+EVENT\_NAMESPACE,trackMouse);\$window.on(\"resize\"+EVENT\_NAMESPACE,trackResize);\$window.on(\"scroll\"+EVENT\_NAMESPACE,trackScroll)}}function
getViewportDimensions(){session.scrollLeft=\$window.scrollLeft();session.scrollTop=\$window.scrollTop();session.windowWidth=\$window.width();session.windowHeight=\$window.height()}function
trackResize(){session.windowWidth=\$window.width();session.windowHeight=\$window.height()}function
trackScroll(){var
x=\$window.scrollLeft(),y=\$window.scrollTop();if(x!==session.scrollLeft){session.currentX+=x-session.scrollLeft;session.scrollLeft=x}if(y!==session.scrollTop){session.currentY+=y-session.scrollTop;session.scrollTop=y}}function
trackMouse(event){session.currentX=event.pageX;session.currentY=event.pageY}function
isMouseOver(element){var
elementPosition=element.offset(),elementBox=element\[0\].getBoundingClientRect(),elementWidth=elementBox.right-elementBox.left,elementHeight=elementBox.bottom-elementBox.top;return
session.currentX\>=elementPosition.left&&session.currentX\<=elementPosition.left+elementWidth&&session.currentY\>=elementPosition.top&&session.currentY\<=elementPosition.top+elementHeight}function
getTooltipContent(element){var
tipText=element.data(DATA\_POWERTIP),tipObject=element.data(DATA\_POWERTIPJQ),tipTarget=element.data(DATA\_POWERTIPTARGET),targetElement,content;if(tipText){if(\$.isFunction(tipText)){tipText=tipText.call(element\[0\])}content=tipText}else
if(tipObject){if(\$.isFunction(tipObject)){tipObject=tipObject.call(element\[0\])}if(tipObject.length\>0){content=tipObject.clone(true,true)}}else
if(tipTarget){targetElement=\$(\"\#\"+tipTarget);if(targetElement.length\>0){content=targetElement.html()}}return
content}function
getViewportCollisions(coords,elementWidth,elementHeight){var
viewportTop=session.scrollTop,viewportLeft=session.scrollLeft,viewportBottom=viewportTop+session.windowHeight,viewportRight=viewportLeft+session.windowWidth,collisions=Collision.none;if(coords.topviewportBottom\|\|Math.abs(coords.bottom-session.windowHeight)\>viewportBottom){collisions\|=Collision.bottom}if(coords.leftviewportRight){collisions\|=Collision.left}if(coords.left+elementWidth\>viewportRight\|\|coords.right1)){a.preventDefault();var
c=a.originalEvent.changedTouches\[0\],d=document.createEvent(\"MouseEvents\");d.initMouseEvent(b,!0,!0,window,1,c.screenX,c.screenY,c.clientX,c.clientY,!1,!1,!1,!1,0,null),a.target.dispatchEvent(d)}}if(a.support.touch=\"ontouchend\"in
document,a.support.touch){var
e,b=a.ui.mouse.prototype,c=b.\_mouseInit,d=b.\_mouseDestroy;b.\_touchStart=function(a){var
b=this;!e&&b.\_mouseCapture(a.originalEvent.changedTouches\[0\])&&(e=!0,b.\_touchMoved=!1,f(a,\"mouseover\"),f(a,\"mousemove\"),f(a,\"mousedown\"))},b.\_touchMove=function(a){e&&(this.\_touchMoved=!0,f(a,\"mousemove\"))},b.\_touchEnd=function(a){e&&(f(a,\"mouseup\"),f(a,\"mouseout\"),this.\_touchMoved\|\|f(a,\"click\"),e=!1)},b.\_mouseInit=function(){var
b=this;b.element.bind({touchstart:a.proxy(b,\"\_touchStart\"),touchmove:a.proxy(b,\"\_touchMove\"),touchend:a.proxy(b,\"\_touchEnd\")}),c.call(b)},b.\_mouseDestroy=function(){var
b=this;b.element.unbind({touchstart:a.proxy(b,\"\_touchStart\"),touchmove:a.proxy(b,\"\_touchMove\"),touchend:a.proxy(b,\"\_touchEnd\")}),d.call(b)}}}(jQuery);/\*!
SmartMenus jQuery Plugin - v1.1.0 - September 17, 2017 \*
http://www.smartmenus.org/ \* Copyright Vasil Dinkov, Vadikom Web Ltd.
http://vadikom.com; Licensed MIT \*/(function(t){\"function\"==typeof
define&&define.amd?define(\[\"jquery\"\],t):\"object\"==typeof
module&&\"object\"==typeof
module.exports?module.exports=t(require(\"jquery\")):t(jQuery)})(function(\$){function
initMouseDetection(t){var
e=\".smartmenus\_mouse\";if(mouseDetectionEnabled\|\|t)mouseDetectionEnabled&&t&&(\$(document).off(e),mouseDetectionEnabled=!1);else{var
i=!0,s=null,o={mousemove:function(t){var
e={x:t.pageX,y:t.pageY,timeStamp:(new Date).getTime()};if(s){var
o=Math.abs(s.x-e.x),a=Math.abs(s.y-e.y);if((o\>0\|\|a\>0)&&2\>=o&&2\>=a&&300\>=e.timeStamp-s.timeStamp&&(mouse=!0,i)){var
n=\$(t.target).closest(\"a\");n.is(\"a\")&&\$.each(menuTrees,function(){return
\$.contains(this.\$root\[0\],n\[0\])?(this.itemEnter({currentTarget:n\[0\]}),!1):void
0}),i=!1}}s=e}};o\[touchEvents?\"touchstart\":\"pointerover pointermove
pointerout MSPointerOver MSPointerMove
MSPointerOut\"\]=function(t){isTouchEvent(t.originalEvent)&&(mouse=!1)},\$(document).on(getEventsNS(o,e)),mouseDetectionEnabled=!0}}function
isTouchEvent(t){return!/\^(4\|mouse)\$/.test(t.pointerType)}function
getEventsNS(t,e){e\|\|(e=\"\");var i={};for(var s in t)i\[s.split(\"
\").join(e+\" \")+e\]=t\[s\];return i}var
menuTrees=\[\],mouse=!1,touchEvents=\"ontouchstart\"in
window,mouseDetectionEnabled=!1,requestAnimationFrame=window.requestAnimationFrame\|\|function(t){return
setTimeout(t,1e3/60)},cancelAnimationFrame=window.cancelAnimationFrame\|\|function(t){clearTimeout(t)},canAnimate=!!\$.fn.animate;return
\$.SmartMenus=function(t,e){this.\$root=\$(t),this.opts=e,this.rootId=\"\",this.accessIdPrefix=\"\",this.\$subArrow=null,this.activatedItems=\[\],this.visibleSubMenus=\[\],this.showTimeout=0,this.hideTimeout=0,this.scrollTimeout=0,this.clickActivated=!1,this.focusActivated=!1,this.zIndexInc=0,this.idInc=0,this.\$firstLink=null,this.\$firstSub=null,this.disabled=!1,this.\$disableOverlay=null,this.\$touchScrollingSub=null,this.cssTransforms3d=\"perspective\"in
t.style\|\|\"webkitPerspective\"in
t.style,this.wasCollapsible=!1,this.init()},\$.extend(\$.SmartMenus,{hideAll:function(){\$.each(menuTrees,function(){this.menuHideAll()})},destroy:function(){for(;menuTrees.length;)menuTrees\[0\].destroy();initMouseDetection(!0)},prototype:{init:function(t){var
e=this;if(!t){menuTrees.push(this),this.rootId=((new
Date).getTime()+Math.random()+\"\").replace(/\\D/g,\"\"),this.accessIdPrefix=\"sm-\"+this.rootId+\"-\",this.\$root.hasClass(\"sm-rtl\")&&(this.opts.rightToLeftSubMenus=!0);var
i=\".smartmenus\";this.\$root.data(\"smartmenus\",this).attr(\"data-smartmenus-id\",this.rootId).dataSM(\"level\",1).on(getEventsNS({\"mouseover
focusin\":\$.proxy(this.rootOver,this),\"mouseout
focusout\":\$.proxy(this.rootOut,this),keydown:\$.proxy(this.rootKeyDown,this)},i)).on(getEventsNS({mouseenter:\$.proxy(this.itemEnter,this),mouseleave:\$.proxy(this.itemLeave,this),mousedown:\$.proxy(this.itemDown,this),focus:\$.proxy(this.itemFocus,this),blur:\$.proxy(this.itemBlur,this),click:\$.proxy(this.itemClick,this)},i),\"a\"),i+=this.rootId,this.opts.hideOnClick&&\$(document).on(getEventsNS({touchstart:\$.proxy(this.docTouchStart,this),touchmove:\$.proxy(this.docTouchMove,this),touchend:\$.proxy(this.docTouchEnd,this),click:\$.proxy(this.docClick,this)},i)),\$(window).on(getEventsNS({\"resize
orientationchange\":\$.proxy(this.winResize,this)},i)),this.opts.subIndicators&&(this.\$subArrow=\$(\"\").addClass(\"sub-arrow\"),this.opts.subIndicatorsText&&this.\$subArrow.html(this.opts.subIndicatorsText)),initMouseDetection()}if(this.\$firstSub=this.\$root.find(\"ul\").each(function(){e.menuInit(\$(this))}).eq(0),this.\$firstLink=this.\$root.find(\"a\").eq(0),this.opts.markCurrentItem){var
s=/(index\|default)\\.\[\^\#\\?\\/\]\*/i,o=/\#.\*/,a=window.location.href.replace(s,\"\"),n=a.replace(o,\"\");this.\$root.find(\"a\").each(function(){var
t=this.href.replace(s,\"\"),i=\$(this);(t==a\|\|t==n)&&(i.addClass(\"current\"),e.opts.markCurrentTree&&i.parentsUntil(\"\[data-smartmenus-id\]\",\"ul\").each(function(){\$(this).dataSM(\"parent-a\").addClass(\"current\")}))})}this.wasCollapsible=this.isCollapsible()},destroy:function(t){if(!t){var
e=\".smartmenus\";this.\$root.removeData(\"smartmenus\").removeAttr(\"data-smartmenus-id\").removeDataSM(\"level\").off(e),e+=this.rootId,\$(document).off(e),\$(window).off(e),this.opts.subIndicators&&(this.\$subArrow=null)}this.menuHideAll();var
i=this;this.\$root.find(\"ul\").each(function(){var
t=\$(this);t.dataSM(\"scroll-arrows\")&&t.dataSM(\"scroll-arrows\").remove(),t.dataSM(\"shown-before\")&&((i.opts.subMenusMinWidth\|\|i.opts.subMenusMaxWidth)&&t.css({width:\"\",minWidth:\"\",maxWidth:\"\"}).removeClass(\"sm-nowrap\"),t.dataSM(\"scroll-arrows\")&&t.dataSM(\"scroll-arrows\").remove(),t.css({zIndex:\"\",top:\"\",left:\"\",marginLeft:\"\",marginTop:\"\",display:\"\"})),0==(t.attr(\"id\")\|\|\"\").indexOf(i.accessIdPrefix)&&t.removeAttr(\"id\")}).removeDataSM(\"in-mega\").removeDataSM(\"shown-before\").removeDataSM(\"scroll-arrows\").removeDataSM(\"parent-a\").removeDataSM(\"level\").removeDataSM(\"beforefirstshowfired\").removeAttr(\"role\").removeAttr(\"aria-hidden\").removeAttr(\"aria-labelledby\").removeAttr(\"aria-expanded\"),this.\$root.find(\"a.has-submenu\").each(function(){var
t=\$(this);0==t.attr(\"id\").indexOf(i.accessIdPrefix)&&t.removeAttr(\"id\")}).removeClass(\"has-submenu\").removeDataSM(\"sub\").removeAttr(\"aria-haspopup\").removeAttr(\"aria-controls\").removeAttr(\"aria-expanded\").closest(\"li\").removeDataSM(\"sub\"),this.opts.subIndicators&&this.\$root.find(\"span.sub-arrow\").remove(),this.opts.markCurrentItem&&this.\$root.find(\"a.current\").removeClass(\"current\"),t\|\|(this.\$root=null,this.\$firstLink=null,this.\$firstSub=null,this.\$disableOverlay&&(this.\$disableOverlay.remove(),this.\$disableOverlay=null),menuTrees.splice(\$.inArray(this,menuTrees),1))},disable:function(t){if(!this.disabled){if(this.menuHideAll(),!t&&!this.opts.isPopup&&this.\$root.is(\":visible\")){var
e=this.\$root.offset();this.\$disableOverlay=\$(\'

::: {.sm-jquery-disable-overlay}
:::

\').css({position:\"absolute\",top:e.top,left:e.left,width:this.\$root.outerWidth(),height:this.\$root.outerHeight(),zIndex:this.getStartZIndex(!0),opacity:0}).appendTo(document.body)}this.disabled=!0}},docClick:function(t){return
this.\$touchScrollingSub?(this.\$touchScrollingSub=null,void
0):((this.visibleSubMenus.length&&!\$.contains(this.\$root\[0\],t.target)\|\|\$(t.target).closest(\"a\").length)&&this.menuHideAll(),void
0)},docTouchEnd:function(){if(this.lastTouch){if(!(!this.visibleSubMenus.length\|\|void
0!==this.lastTouch.x2&&this.lastTouch.x1!=this.lastTouch.x2\|\|void
0!==this.lastTouch.y2&&this.lastTouch.y1!=this.lastTouch.y2\|\|this.lastTouch.target&&\$.contains(this.\$root\[0\],this.lastTouch.target))){this.hideTimeout&&(clearTimeout(this.hideTimeout),this.hideTimeout=0);var
t=this;this.hideTimeout=setTimeout(function(){t.menuHideAll()},350)}this.lastTouch=null}},docTouchMove:function(t){if(this.lastTouch){var
e=t.originalEvent.touches\[0\];this.lastTouch.x2=e.pageX,this.lastTouch.y2=e.pageY}},docTouchStart:function(t){var
e=t.originalEvent.touches\[0\];this.lastTouch={x1:e.pageX,y1:e.pageY,target:e.target}},enable:function(){this.disabled&&(this.\$disableOverlay&&(this.\$disableOverlay.remove(),this.\$disableOverlay=null),this.disabled=!1)},getClosestMenu:function(t){for(var
e=\$(t).closest(\"ul\");e.dataSM(\"in-mega\");)e=e.parent().closest(\"ul\");return
e\[0\]\|\|null},getHeight:function(t){return
this.getOffset(t,!0)},getOffset:function(t,e){var
i;\"none\"==t.css(\"display\")&&(i={position:t\[0\].style.position,visibility:t\[0\].style.visibility},t.css({position:\"absolute\",visibility:\"hidden\"}).show());var
s=t\[0\].getBoundingClientRect&&t\[0\].getBoundingClientRect(),o=s&&(e?s.height\|\|s.bottom-s.top:s.width\|\|s.right-s.left);return
o\|\|0===o\|\|(o=e?t\[0\].offsetHeight:t\[0\].offsetWidth),i&&t.hide().css(i),o},getStartZIndex:function(t){var
e=parseInt(this\[t?\"\$root\":\"\$firstSub\"\].css(\"z-index\"));return!t&&isNaN(e)&&(e=parseInt(this.\$root.css(\"z-index\"))),isNaN(e)?1:e},getTouchPoint:function(t){return
t.touches&&t.touches\[0\]\|\|t.changedTouches&&t.changedTouches\[0\]\|\|t},getViewport:function(t){var
e=t?\"Height\":\"Width\",i=document.documentElement\[\"client\"+e\],s=window\[\"inner\"+e\];return
s&&(i=Math.min(i,s)),i},getViewportHeight:function(){return
this.getViewport(!0)},getViewportWidth:function(){return
this.getViewport()},getWidth:function(t){return
this.getOffset(t)},handleEvents:function(){return!this.disabled&&this.isCSSOn()},handleItemEvents:function(t){return
this.handleEvents()&&!this.isLinkInMegaMenu(t)},isCollapsible:function(){return\"static\"==this.\$firstSub.css(\"position\")},isCSSOn:function(){return\"inline\"!=this.\$firstLink.css(\"display\")},isFixed:function(){var
t=\"fixed\"==this.\$root.css(\"position\");return
t\|\|this.\$root.parentsUntil(\"body\").each(function(){return\"fixed\"==\$(this).css(\"position\")?(t=!0,!1):void
0}),t},isLinkInMegaMenu:function(t){return
\$(this.getClosestMenu(t\[0\])).hasClass(\"mega-menu\")},isTouchMode:function(){return!mouse\|\|this.opts.noMouseOver\|\|this.isCollapsible()},itemActivate:function(t,e){var
i=t.closest(\"ul\"),s=i.dataSM(\"level\");if(s\>1&&(!this.activatedItems\[s-2\]\|\|this.activatedItems\[s-2\]\[0\]!=i.dataSM(\"parent-a\")\[0\])){var
o=this;\$(i.parentsUntil(\"\[data-smartmenus-id\]\",\"ul\").get().reverse()).add(i).each(function(){o.itemActivate(\$(this).dataSM(\"parent-a\"))})}if((!this.isCollapsible()\|\|e)&&this.menuHideSubMenus(this.activatedItems\[s-1\]&&this.activatedItems\[s-1\]\[0\]==t\[0\]?s:s-1),this.activatedItems\[s-1\]=t,this.\$root.triggerHandler(\"activate.smapi\",t\[0\])!==!1){var
a=t.dataSM(\"sub\");a&&(this.isTouchMode()\|\|!this.opts.showOnClick\|\|this.clickActivated)&&this.menuShow(a)}},itemBlur:function(t){var
e=\$(t.currentTarget);this.handleItemEvents(e)&&this.\$root.triggerHandler(\"blur.smapi\",e\[0\])},itemClick:function(t){var
e=\$(t.currentTarget);if(this.handleItemEvents(e)){if(this.\$touchScrollingSub&&this.\$touchScrollingSub\[0\]==e.closest(\"ul\")\[0\])return
this.\$touchScrollingSub=null,t.stopPropagation(),!1;if(this.\$root.triggerHandler(\"click.smapi\",e\[0\])===!1)return!1;var
i=\$(t.target).is(\".sub-arrow\"),s=e.dataSM(\"sub\"),o=s?2==s.dataSM(\"level\"):!1,a=this.isCollapsible(),n=/toggle\$/.test(this.opts.collapsibleBehavior),r=/link\$/.test(this.opts.collapsibleBehavior),h=/\^accordion/.test(this.opts.collapsibleBehavior);if(s&&!s.is(\":visible\")){if((!r\|\|!a\|\|i)&&(this.opts.showOnClick&&o&&(this.clickActivated=!0),this.itemActivate(e,h),s.is(\":visible\")))return
this.focusActivated=!0,!1}else if(a&&(n\|\|i))return
this.itemActivate(e,h),this.menuHide(s),n&&(this.focusActivated=!1),!1;return
this.opts.showOnClick&&o\|\|e.hasClass(\"disabled\")\|\|this.\$root.triggerHandler(\"select.smapi\",e\[0\])===!1?!1:void
0}},itemDown:function(t){var
e=\$(t.currentTarget);this.handleItemEvents(e)&&e.dataSM(\"mousedown\",!0)},itemEnter:function(t){var
e=\$(t.currentTarget);if(this.handleItemEvents(e)){if(!this.isTouchMode()){this.showTimeout&&(clearTimeout(this.showTimeout),this.showTimeout=0);var
i=this;this.showTimeout=setTimeout(function(){i.itemActivate(e)},this.opts.showOnClick&&1==e.closest(\"ul\").dataSM(\"level\")?1:this.opts.showTimeout)}this.\$root.triggerHandler(\"mouseenter.smapi\",e\[0\])}},itemFocus:function(t){var
e=\$(t.currentTarget);this.handleItemEvents(e)&&(!this.focusActivated\|\|this.isTouchMode()&&e.dataSM(\"mousedown\")\|\|this.activatedItems.length&&this.activatedItems\[this.activatedItems.length-1\]\[0\]==e\[0\]\|\|this.itemActivate(e,!0),this.\$root.triggerHandler(\"focus.smapi\",e\[0\]))},itemLeave:function(t){var
e=\$(t.currentTarget);this.handleItemEvents(e)&&(this.isTouchMode()\|\|(e\[0\].blur(),this.showTimeout&&(clearTimeout(this.showTimeout),this.showTimeout=0)),e.removeDataSM(\"mousedown\"),this.\$root.triggerHandler(\"mouseleave.smapi\",e\[0\]))},menuHide:function(t){if(this.\$root.triggerHandler(\"beforehide.smapi\",t\[0\])!==!1&&(canAnimate&&t.stop(!0,!0),\"none\"!=t.css(\"display\"))){var
e=function(){t.css(\"z-index\",\"\")};this.isCollapsible()?canAnimate&&this.opts.collapsibleHideFunction?this.opts.collapsibleHideFunction.call(this,t,e):t.hide(this.opts.collapsibleHideDuration,e):canAnimate&&this.opts.hideFunction?this.opts.hideFunction.call(this,t,e):t.hide(this.opts.hideDuration,e),t.dataSM(\"scroll\")&&(this.menuScrollStop(t),t.css({\"touch-action\":\"\",\"-ms-touch-action\":\"\",\"-webkit-transform\":\"\",transform:\"\"}).off(\".smartmenus\_scroll\").removeDataSM(\"scroll\").dataSM(\"scroll-arrows\").hide()),t.dataSM(\"parent-a\").removeClass(\"highlighted\").attr(\"aria-expanded\",\"false\"),t.attr({\"aria-expanded\":\"false\",\"aria-hidden\":\"true\"});var
i=t.dataSM(\"level\");this.activatedItems.splice(i-1,1),this.visibleSubMenus.splice(\$.inArray(t,this.visibleSubMenus),1),this.\$root.triggerHandler(\"hide.smapi\",t\[0\])}},menuHideAll:function(){this.showTimeout&&(clearTimeout(this.showTimeout),this.showTimeout=0);for(var
t=this.opts.isPopup?1:0,e=this.visibleSubMenus.length-1;e\>=t;e\--)this.menuHide(this.visibleSubMenus\[e\]);this.opts.isPopup&&(canAnimate&&this.\$root.stop(!0,!0),this.\$root.is(\":visible\")&&(canAnimate&&this.opts.hideFunction?this.opts.hideFunction.call(this,this.\$root):this.\$root.hide(this.opts.hideDuration))),this.activatedItems=\[\],this.visibleSubMenus=\[\],this.clickActivated=!1,this.focusActivated=!1,this.zIndexInc=0,this.\$root.triggerHandler(\"hideAll.smapi\")},menuHideSubMenus:function(t){for(var
e=this.activatedItems.length-1;e\>=t;e\--){var
i=this.activatedItems\[e\].dataSM(\"sub\");i&&this.menuHide(i)}},menuInit:function(t){if(!t.dataSM(\"in-mega\")){t.hasClass(\"mega-menu\")&&t.find(\"ul\").dataSM(\"in-mega\",!0);for(var
e=2,i=t\[0\];(i=i.parentNode.parentNode)!=this.\$root\[0\];)e++;var
s=t.prevAll(\"a\").eq(-1);s.length\|\|(s=t.prevAll().find(\"a\").eq(-1)),s.addClass(\"has-submenu\").dataSM(\"sub\",t),t.dataSM(\"parent-a\",s).dataSM(\"level\",e).parent().dataSM(\"sub\",t);var
o=s.attr(\"id\")\|\|this.accessIdPrefix+
++this.idInc,a=t.attr(\"id\")\|\|this.accessIdPrefix+
++this.idInc;s.attr({id:o,\"aria-haspopup\":\"true\",\"aria-controls\":a,\"aria-expanded\":\"false\"}),t.attr({id:a,role:\"group\",\"aria-hidden\":\"true\",\"aria-labelledby\":o,\"aria-expanded\":\"false\"}),this.opts.subIndicators&&s\[this.opts.subIndicatorsPos\](this.\$subArrow.clone())}},menuPosition:function(t){var
e,i,s=t.dataSM(\"parent-a\"),o=s.closest(\"li\"),a=o.parent(),n=t.dataSM(\"level\"),r=this.getWidth(t),h=this.getHeight(t),u=s.offset(),l=u.left,c=u.top,d=this.getWidth(s),m=this.getHeight(s),p=\$(window),f=p.scrollLeft(),v=p.scrollTop(),b=this.getViewportWidth(),S=this.getViewportHeight(),g=a.parent().is(\"\[data-sm-horizontal-sub\]\")\|\|2==n&&!a.hasClass(\"sm-vertical\"),M=this.opts.rightToLeftSubMenus&&!o.is(\"\[data-sm-reverse\]\")\|\|!this.opts.rightToLeftSubMenus&&o.is(\"\[data-sm-reverse\]\"),w=2==n?this.opts.mainMenuSubOffsetX:this.opts.subMenusSubOffsetX,T=2==n?this.opts.mainMenuSubOffsetY:this.opts.subMenusSubOffsetY;if(g?(e=M?d-r-w:w,i=this.opts.bottomToTopSubMenus?-h-T:m+T):(e=M?w-r:d-w,i=this.opts.bottomToTopSubMenus?m-T-h:T),this.opts.keepInViewport){var
y=l+e,I=c+i;if(M&&f\>y?e=g?f-y+e:d-w:!M&&y+r\>f+b&&(e=g?f+b-r-y+e:w-r),g\|\|(S\>h&&I+h\>v+S?i+=v+S-h-I:(h\>=S\|\|v\>I)&&(i+=v-I)),g&&(I+h\>v+S+.49\|\|v\>I)\|\|!g&&h\>S+.49){var
x=this;t.dataSM(\"scroll-arrows\")\|\|t.dataSM(\"scroll-arrows\",\$(\[\$(\'[[]{.scroll-up-arrow}]{.scroll-up}\')\[0\],\$(\'[[]{.scroll-down-arrow}]{.scroll-down}\')\[0\]\]).on({mouseenter:function(){t.dataSM(\"scroll\").up=\$(this).hasClass(\"scroll-up\"),x.menuScroll(t)},mouseleave:function(e){x.menuScrollStop(t),x.menuScrollOut(t,e)},\"mousewheel
DOMMouseScroll\":function(t){t.preventDefault()}}).insertAfter(t));var
A=\".smartmenus\_scroll\";if(t.dataSM(\"scroll\",{y:this.cssTransforms3d?0:i-m,step:1,itemH:m,subH:h,arrowDownH:this.getHeight(t.dataSM(\"scroll-arrows\").eq(1))}).on(getEventsNS({mouseover:function(e){x.menuScrollOver(t,e)},mouseout:function(e){x.menuScrollOut(t,e)},\"mousewheel
DOMMouseScroll\":function(e){x.menuScrollMousewheel(t,e)}},A)).dataSM(\"scroll-arrows\").css({top:\"auto\",left:\"0\",marginLeft:e+(parseInt(t.css(\"border-left-width\"))\|\|0),width:r-(parseInt(t.css(\"border-left-width\"))\|\|0)-(parseInt(t.css(\"border-right-width\"))\|\|0),zIndex:t.css(\"z-index\")}).eq(g&&this.opts.bottomToTopSubMenus?0:1).show(),this.isFixed()){var
C={};C\[touchEvents?\"touchstart touchmove touchend\":\"pointerdown
pointermove pointerup MSPointerDown MSPointerMove
MSPointerUp\"\]=function(e){x.menuScrollTouch(t,e)},t.css({\"touch-action\":\"none\",\"-ms-touch-action\":\"none\"}).on(getEventsNS(C,A))}}}t.css({top:\"auto\",left:\"0\",marginLeft:e,marginTop:i-m})},menuScroll:function(t,e,i){var
s,o=t.dataSM(\"scroll\"),a=t.dataSM(\"scroll-arrows\"),n=o.up?o.upEnd:o.downEnd;if(!e&&o.momentum){if(o.momentum\*=.92,s=o.momentum,.5\>s)return
this.menuScrollStop(t),void 0}else
s=i\|\|(e\|\|!this.opts.scrollAccelerate?this.opts.scrollStep:Math.floor(o.step));var
r=t.dataSM(\"level\");if(this.activatedItems\[r-1\]&&this.activatedItems\[r-1\].dataSM(\"sub\")&&this.activatedItems\[r-1\].dataSM(\"sub\").is(\":visible\")&&this.menuHideSubMenus(r-1),o.y=o.up&&o.y\>=n\|\|!o.up&&n\>=o.y?o.y:Math.abs(n-o.y)\>s?o.y+(o.up?s:-s):n,t.css(this.cssTransforms3d?{\"-webkit-transform\":\"translate3d(0,
\"+o.y+\"px, 0)\",transform:\"translate3d(0, \"+o.y+\"px,
0)\"}:{marginTop:o.y}),mouse&&(o.up&&o.y\>o.downEnd\|\|!o.up&&o.y0;t.dataSM(\"scroll-arrows\").eq(i?0:1).is(\":visible\")&&(t.dataSM(\"scroll\").up=i,this.menuScroll(t,!0))}e.preventDefault()},menuScrollOut:function(t,e){mouse&&(/\^scroll-(up\|down)/.test((e.relatedTarget\|\|\"\").className)\|\|(t\[0\]==e.relatedTarget\|\|\$.contains(t\[0\],e.relatedTarget))&&this.getClosestMenu(e.relatedTarget)==t\[0\]\|\|t.dataSM(\"scroll-arrows\").css(\"visibility\",\"hidden\"))},menuScrollOver:function(t,e){if(mouse&&!/\^scroll-(up\|down)/.test(e.target.className)&&this.getClosestMenu(e.target)==t\[0\]){this.menuScrollRefreshData(t);var
i=t.dataSM(\"scroll\"),s=\$(window).scrollTop()-t.dataSM(\"parent-a\").offset().top-i.itemH;t.dataSM(\"scroll-arrows\").eq(0).css(\"margin-top\",s).end().eq(1).css(\"margin-top\",s+this.getViewportHeight()-i.arrowDownH).end().css(\"visibility\",\"visible\")}},menuScrollRefreshData:function(t){var
e=t.dataSM(\"scroll\"),i=\$(window).scrollTop()-t.dataSM(\"parent-a\").offset().top-e.itemH;this.cssTransforms3d&&(i=-(parseFloat(t.css(\"margin-top\"))-i)),\$.extend(e,{upEnd:i,downEnd:i+this.getViewportHeight()-e.subH})},menuScrollStop:function(t){return
this.scrollTimeout?(cancelAnimationFrame(this.scrollTimeout),this.scrollTimeout=0,t.dataSM(\"scroll\").step=1,!0):void
0},menuScrollTouch:function(t,e){if(e=e.originalEvent,isTouchEvent(e)){var
i=this.getTouchPoint(e);if(this.getClosestMenu(i.target)==t\[0\]){var
s=t.dataSM(\"scroll\");if(/(start\|down)\$/i.test(e.type))this.menuScrollStop(t)?(e.preventDefault(),this.\$touchScrollingSub=t):this.\$touchScrollingSub=null,this.menuScrollRefreshData(t),\$.extend(s,{touchStartY:i.pageY,touchStartTime:e.timeStamp});else
if(/move\$/i.test(e.type)){var o=void
0!==s.touchY?s.touchY:s.touchStartY;if(void
0!==o&&o!=i.pageY){this.\$touchScrollingSub=t;var a=i.pageY\>o;void
0!==s.up&&s.up!=a&&\$.extend(s,{touchStartY:i.pageY,touchStartTime:e.timeStamp}),\$.extend(s,{up:a,touchY:i.pageY}),this.menuScroll(t,!0,Math.abs(i.pageY-o))}e.preventDefault()}else
void
0!==s.touchY&&((s.momentum=15\*Math.pow(Math.abs(i.pageY-s.touchStartY)/(e.timeStamp-s.touchStartTime),2))&&(this.menuScrollStop(t),this.menuScroll(t),e.preventDefault()),delete
s.touchY)}}},menuShow:function(t){if((t.dataSM(\"beforefirstshowfired\")\|\|(t.dataSM(\"beforefirstshowfired\",!0),this.\$root.triggerHandler(\"beforefirstshow.smapi\",t\[0\])!==!1))&&this.\$root.triggerHandler(\"beforeshow.smapi\",t\[0\])!==!1&&(t.dataSM(\"shown-before\",!0),canAnimate&&t.stop(!0,!0),!t.is(\":visible\"))){var
e=t.dataSM(\"parent-a\"),i=this.isCollapsible();if((this.opts.keepHighlighted\|\|i)&&e.addClass(\"highlighted\"),i)t.removeClass(\"sm-nowrap\").css({zIndex:\"\",width:\"auto\",minWidth:\"\",maxWidth:\"\",top:\"\",left:\"\",marginLeft:\"\",marginTop:\"\"});else{if(t.css(\"z-index\",this.zIndexInc=(this.zIndexInc\|\|this.getStartZIndex())+1),(this.opts.subMenusMinWidth\|\|this.opts.subMenusMaxWidth)&&(t.css({width:\"auto\",minWidth:\"\",maxWidth:\"\"}).addClass(\"sm-nowrap\"),this.opts.subMenusMinWidth&&t.css(\"min-width\",this.opts.subMenusMinWidth),this.opts.subMenusMaxWidth)){var
s=this.getWidth(t);t.css(\"max-width\",this.opts.subMenusMaxWidth),s\>this.getWidth(t)&&t.removeClass(\"sm-nowrap\").css(\"width\",this.opts.subMenusMaxWidth)}this.menuPosition(t)}var
o=function(){t.css(\"overflow\",\"\")};i?canAnimate&&this.opts.collapsibleShowFunction?this.opts.collapsibleShowFunction.call(this,t,o):t.show(this.opts.collapsibleShowDuration,o):canAnimate&&this.opts.showFunction?this.opts.showFunction.call(this,t,o):t.show(this.opts.showDuration,o),e.attr(\"aria-expanded\",\"true\"),t.attr({\"aria-expanded\":\"true\",\"aria-hidden\":\"false\"}),this.visibleSubMenus.push(t),this.\$root.triggerHandler(\"show.smapi\",t\[0\])}},popupHide:function(t){this.hideTimeout&&(clearTimeout(this.hideTimeout),this.hideTimeout=0);var
e=this;this.hideTimeout=setTimeout(function(){e.menuHideAll()},t?1:this.opts.hideTimeout)},popupShow:function(t,e){if(!this.opts.isPopup)return
alert(\'SmartMenus jQuery Error:\\n\\nIf you want to show this menu via
the \"popupShow\" method, set the isPopup:true option.\'),void
0;if(this.hideTimeout&&(clearTimeout(this.hideTimeout),this.hideTimeout=0),this.\$root.dataSM(\"shown-before\",!0),canAnimate&&this.\$root.stop(!0,!0),!this.\$root.is(\":visible\")){this.\$root.css({left:t,top:e});var
i=this,s=function(){i.\$root.css(\"overflow\",\"\")};canAnimate&&this.opts.showFunction?this.opts.showFunction.call(this,this.\$root,s):this.\$root.show(this.opts.showDuration,s),this.visibleSubMenus\[0\]=this.\$root}},refresh:function(){this.destroy(!0),this.init(!0)},rootKeyDown:function(t){if(this.handleEvents())switch(t.keyCode){case
27:var
e=this.activatedItems\[0\];if(e){this.menuHideAll(),e\[0\].focus();var
i=e.dataSM(\"sub\");i&&this.menuHide(i)}break;case 32:var
s=\$(t.target);if(s.is(\"a\")&&this.handleItemEvents(s)){var
i=s.dataSM(\"sub\");i&&!i.is(\":visible\")&&(this.itemClick({currentTarget:t.target}),t.preventDefault())}}},rootOut:function(t){if(this.handleEvents()&&!this.isTouchMode()&&t.target!=this.\$root\[0\]&&(this.hideTimeout&&(clearTimeout(this.hideTimeout),this.hideTimeout=0),!this.opts.showOnClick\|\|!this.opts.hideOnClick)){var
e=this;this.hideTimeout=setTimeout(function(){e.menuHideAll()},this.opts.hideTimeout)}},rootOver:function(t){this.handleEvents()&&!this.isTouchMode()&&t.target!=this.\$root\[0\]&&this.hideTimeout&&(clearTimeout(this.hideTimeout),this.hideTimeout=0)},winResize:function(t){if(this.handleEvents()){if(!(\"onorientationchange\"in
window)\|\|\"orientationchange\"==t.type){var
e=this.isCollapsible();this.wasCollapsible&&e\|\|(this.activatedItems.length&&this.activatedItems\[this.activatedItems.length-1\]\[0\].blur(),this.menuHideAll()),this.wasCollapsible=e}}else
if(this.\$disableOverlay){var
i=this.\$root.offset();this.\$disableOverlay.css({top:i.top,left:i.left,width:this.\$root.outerWidth(),height:this.\$root.outerHeight()})}}}}),\$.fn.dataSM=function(t,e){return
e?this.data(t+\"\_smartmenus\",e):this.data(t+\"\_smartmenus\")},\$.fn.removeDataSM=function(t){return
this.removeData(t+\"\_smartmenus\")},\$.fn.smartmenus=function(options){if(\"string\"==typeof
options){var args=arguments,method=options;return
Array.prototype.shift.call(args),this.each(function(){var
t=\$(this).data(\"smartmenus\");t&&t\[method\]&&t\[method\].apply(t,args)})}return
this.each(function(){var
dataOpts=\$(this).data(\"sm-options\")\|\|null;if(dataOpts)try{dataOpts=eval(\"(\"+dataOpts+\")\")}catch(e){dataOpts=null,alert(\'ERROR\\n\\nSmartMenus
jQuery init:\\nInvalid \"data-sm-options\" attribute value
syntax.\')}new
\$.SmartMenus(this,\$.extend({},\$.fn.smartmenus.defaults,options,dataOpts))})},\$.fn.smartmenus.defaults={isPopup:!1,mainMenuSubOffsetX:0,mainMenuSubOffsetY:0,subMenusSubOffsetX:0,subMenusSubOffsetY:0,subMenusMinWidth:\"10em\",subMenusMaxWidth:\"20em\",subIndicators:!0,subIndicatorsPos:\"append\",subIndicatorsText:\"\",scrollStep:30,scrollAccelerate:!0,showTimeout:250,hideTimeout:500,showDuration:0,showFunction:null,hideDuration:0,hideFunction:function(t,e){t.fadeOut(200,e)},collapsibleShowDuration:0,collapsibleShowFunction:function(t,e){t.slideDown(200,e)},collapsibleHideDuration:0,collapsibleHideFunction:function(t,e){t.slideUp(200,e)},showOnClick:!1,hideOnClick:!0,noMouseOver:!1,keepInViewport:!0,keepHighlighted:!0,markCurrentItem:!1,markCurrentTree:!0,rightToLeftSubMenus:!1,bottomToTopSubMenus:!1,collapsibleBehavior:\"default\"},\$});

</div>

</div>
