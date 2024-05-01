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
JavaScript code in this file \*/ function convertToId(search) { var
result = \'\'; for (i=0;i do a search { this.Search(); } }
this.OnSearchSelectKey = function(evt) { var e = (evt) ? evt :
window.event; // for IE if (e.keyCode==40 && this.searchIndex0) // Up {
this.searchIndex\--; this.OnSelectItem(this.searchIndex); } else if
(e.keyCode==13 \|\| e.keyCode==27) {
this.OnSelectItem(this.searchIndex); this.CloseSelectionWindow();
this.DOMSearchField().focus(); } return false; } // \-\-\-\-\-\-\-\--
Actions // Closes the results window. this.CloseResultsWindow =
function() { this.DOMPopupSearchResultsWindow().style.display =
\'none\'; this.DOMSearchClose().style.display = \'none\';
this.Activate(false); } this.CloseSelectionWindow = function() {
this.DOMSearchSelectWindow().style.display = \'none\'; } // Performs a
search. this.Search = function() { this.keyTimeout = 0; // strip leading
whitespace var searchValue = this.DOMSearchField().value.replace(/\^ +/,
\"\"); var code = searchValue.toLowerCase().charCodeAt(0); var idxChar =
searchValue.substr(0, 1).toLowerCase(); if ( 0xD800 \<= code && code \<=
0xDBFF && searchValue \> 1) // surrogate pair { idxChar =
searchValue.substr(0, 2); } var resultsPage; var resultsPageWithSearch;
var hasResultsPage; var idx =
indexSectionsWithContent\[this.searchIndex\].indexOf(idxChar); if
(idx!=-1) { var hexCode=idx.toString(16); resultsPage = this.resultsPath
+ \'/\' + indexSectionNames\[this.searchIndex\] + \'\_\' + hexCode +
this.extension; resultsPageWithSearch =
resultsPage+\'?\'+escape(searchValue); hasResultsPage = true; } else //
nothing available for this search term { resultsPage = this.resultsPath
+ \'/nomatches\' + this.extension; resultsPageWithSearch = resultsPage;
hasResultsPage = false; } window.frames.MSearchResults.location =
resultsPageWithSearch; var domPopupSearchResultsWindow =
this.DOMPopupSearchResultsWindow(); if
(domPopupSearchResultsWindow.style.display!=\'block\') { var
domSearchBox = this.DOMSearchBox(); this.DOMSearchClose().style.display
= \'inline-block\'; if (this.insideFrame) { var domPopupSearchResults =
this.DOMPopupSearchResults(); domPopupSearchResultsWindow.style.position
= \'relative\'; domPopupSearchResultsWindow.style.display = \'block\';
var width = document.body.clientWidth - 8; // the -8 is for IE :-(
domPopupSearchResultsWindow.style.width = width + \'px\';
domPopupSearchResults.style.width = width + \'px\'; } else { var
domPopupSearchResults = this.DOMPopupSearchResults(); var left =
getXPos(domSearchBox) + 150; // domSearchBox.offsetWidth; var top =
getYPos(domSearchBox) + 20; // domSearchBox.offsetHeight + 1;
domPopupSearchResultsWindow.style.display = \'block\'; left -=
domPopupSearchResults.offsetWidth; domPopupSearchResultsWindow.style.top
= top + \'px\'; domPopupSearchResultsWindow.style.left = left + \'px\';
} } this.lastSearchValue = searchValue; this.lastResultsPage =
resultsPage; } // \-\-\-\-\-\-\-- Activation Functions // Activates or
deactivates the search panel, resetting things to // their default
values if necessary. this.Activate = function(isActive) { if (isActive
\|\| // open it this.DOMPopupSearchResultsWindow().style.display ==
\'block\' ) { this.DOMSearchBox().className = \'MSearchBoxActive\'; var
searchField = this.DOMSearchField(); if (searchField.value ==
this.searchLabel) // clear \"Search\" term upon entry {
searchField.value = \'\'; this.searchActive = true; } } else if
(!isActive) // directly remove the panel { this.DOMSearchBox().className
= \'MSearchBoxInactive\'; this.DOMSearchField().value =
this.searchLabel; this.searchActive = false; this.lastSearchValue = \'\'
this.lastResultsPage = \'\'; } } } //
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
// The class that handles everything on the search results page.
function SearchResults(name) { // The number of matches from the last
run of . this.lastMatchCount = 0; this.lastKey = 0; this.repeatOn =
false; // Toggles the visibility of the passed element ID.
this.FindChildElement = function(id) { var parentElement =
document.getElementById(id); var element = parentElement.firstChild;
while (element && element!=parentElement) { if
(element.nodeName.toLowerCase() == \'div\' && element.className ==
\'SRChildren\') { return element; } if (element.nodeName.toLowerCase()
== \'div\' && element.hasChildNodes()) { element = element.firstChild; }
else if (element.nextSibling) { element = element.nextSibling; } else {
do { element = element.parentNode; } while (element &&
element!=parentElement && !element.nextSibling); if (element &&
element!=parentElement) { element = element.nextSibling; } } } }
this.Toggle = function(id) { var element = this.FindChildElement(id); if
(element) { if (element.style.display == \'block\') {
element.style.display = \'none\'; } else { element.style.display =
\'block\'; } } } // Searches for the passed string. If there is no
parameter, // it takes it from the URL query. // // Always returns true,
since other documents may try to call it // and that may or may not be
possible. this.Search = function(search) { if (!search) // get search
word from URL { search = window.location.search; search =
search.substring(1); // Remove the leading \'?\' search =
unescape(search); } search = search.replace(/\^ +/, \"\"); // strip
leading spaces search = search.replace(/ +\$/, \"\"); // strip trailing
spaces search = search.toLowerCase(); search = convertToId(search); var
resultRows = document.getElementsByTagName(\"div\"); var matches = 0;
var i = 0; while (i \< resultRows.length) { var row =
resultRows.item(i); if (row.className == \"SRResult\") { var
rowMatchName = row.id.toLowerCase(); rowMatchName =
rowMatchName.replace(/\^sr\\d\*\_/, \'\'); // strip \'sr123\_\' if
(search.length\<=rowMatchName.length && rowMatchName.substr(0,
search.length)==search) { row.style.display = \'block\'; matches++; }
else { row.style.display = \'none\'; } } i++; }
document.getElementById(\"Searching\").style.display=\'none\'; if
(matches == 0) // no results {
document.getElementById(\"NoMatches\").style.display=\'block\'; } else
// at least one result {
document.getElementById(\"NoMatches\").style.display=\'none\'; }
this.lastMatchCount = matches; return true; } // return the first item
with index index or higher that is visible this.NavNext =
function(index) { var focusItem; while (1) { var focusName =
\'Item\'+index; focusItem = document.getElementById(focusName); if
(focusItem && focusItem.parentNode.parentNode.style.display==\'block\')
{ break; } else if (!focusItem) // last element { break; }
focusItem=null; index++; } return focusItem; } this.NavPrev =
function(index) { var focusItem; while (1) { var focusName =
\'Item\'+index; focusItem = document.getElementById(focusName); if
(focusItem && focusItem.parentNode.parentNode.style.display==\'block\')
{ break; } else if (!focusItem) // last element { break; }
focusItem=null; index\--; } return focusItem; } this.ProcessKeys =
function(e) { if (e.type == \"keydown\") { this.repeatOn = false;
this.lastKey = e.keyCode; } else if (e.type == \"keypress\") { if
(!this.repeatOn) { if (this.lastKey) this.repeatOn = true; return false;
// ignore first keypress after keydown } } else if (e.type == \"keyup\")
{ this.lastKey = 0; this.repeatOn = false; } return this.lastKey!=0; }
this.Nav = function(evt,itemIndex) { var e = (evt) ? evt : window.event;
// for IE if (e.keyCode==13) return true; if (!this.ProcessKeys(e))
return false; if (this.lastKey==38) // Up { var newIndex = itemIndex-1;
var focusItem = this.NavPrev(newIndex); if (focusItem) { var child =
this.FindChildElement(focusItem.parentNode.parentNode.id); if (child &&
child.style.display == \'block\') // children visible { var n=0; var
tmpElem; while (1) // search for last child { tmpElem =
document.getElementById(\'Item\'+newIndex+\'\_c\'+n); if (tmpElem) {
focusItem = tmpElem; } else // found it! { break; } n++; } } } if
(focusItem) { focusItem.focus(); } else // return focus to search field
{ parent.document.getElementById(\"MSearchField\").focus(); } } else if
(this.lastKey==40) // Down { var newIndex = itemIndex+1; var focusItem;
var item = document.getElementById(\'Item\'+itemIndex); var elem =
this.FindChildElement(item.parentNode.parentNode.id); if (elem &&
elem.style.display == \'block\') // children visible { focusItem =
document.getElementById(\'Item\'+itemIndex+\'\_c0\'); } if (!focusItem)
focusItem = this.NavNext(newIndex); if (focusItem) focusItem.focus(); }
else if (this.lastKey==39) // Right { var item =
document.getElementById(\'Item\'+itemIndex); var elem =
this.FindChildElement(item.parentNode.parentNode.id); if (elem)
elem.style.display = \'block\'; } else if (this.lastKey==37) // Left {
var item = document.getElementById(\'Item\'+itemIndex); var elem =
this.FindChildElement(item.parentNode.parentNode.id); if (elem)
elem.style.display = \'none\'; } else if (this.lastKey==27) // Escape {
parent.searchBox.CloseResultsWindow();
parent.document.getElementById(\"MSearchField\").focus(); } else if
(this.lastKey==13) // Enter { return true; } return false; }
this.NavChild = function(evt,itemIndex,childIndex) { var e = (evt) ? evt
: window.event; // for IE if (e.keyCode==13) return true; if
(!this.ProcessKeys(e)) return false; if (this.lastKey==38) // Up { if
(childIndex\>0) { var newIndex = childIndex-1;
document.getElementById(\'Item\'+itemIndex+\'\_c\'+newIndex).focus(); }
else // already at first child, jump to parent {
document.getElementById(\'Item\'+itemIndex).focus(); } } else if
(this.lastKey==40) // Down { var newIndex = childIndex+1; var elem =
document.getElementById(\'Item\'+itemIndex+\'\_c\'+newIndex); if (!elem)
// last child, jump to parent next parent { elem =
this.NavNext(itemIndex+1); } if (elem) { elem.focus(); } } else if
(this.lastKey==27) // Escape { parent.searchBox.CloseResultsWindow();
parent.document.getElementById(\"MSearchField\").focus(); } else if
(this.lastKey==13) // Enter { return true; } return false; } } function
setKeyActions(elem,action) { elem.setAttribute(\'onkeydown\',action);
elem.setAttribute(\'onkeypress\',action);
elem.setAttribute(\'onkeyup\',action); } function
setClassAttr(elem,attr) { elem.setAttribute(\'class\',attr);
elem.setAttribute(\'className\',attr); } function createResults() { var
results = document.getElementById(\"SRResults\"); for (var e=0; e
