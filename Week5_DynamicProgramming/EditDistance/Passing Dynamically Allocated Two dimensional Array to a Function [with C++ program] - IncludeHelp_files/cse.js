(function(opts_){var f=this,g=/^[\w+/_-]+[=]{0,2}$/,h=null,k=function(a){var b=typeof a;if("object"==b)if(a){if(a instanceof Array)return"array";if(a instanceof Object)return b;var c=Object.prototype.toString.call(a);if("[object Window]"==c)return"object";if("[object Array]"==c||"number"==typeof a.length&&"undefined"!=typeof a.splice&&"undefined"!=typeof a.propertyIsEnumerable&&!a.propertyIsEnumerable("splice"))return"array";if("[object Function]"==c||"undefined"!=typeof a.call&&"undefined"!=typeof a.propertyIsEnumerable&&
!a.propertyIsEnumerable("call"))return"function"}else return"null";else if("function"==b&&"undefined"==typeof a.call)return"object";return b},l=function(a,b){function c(){}c.prototype=b.prototype;a.h=b.prototype;a.prototype=new c;a.prototype.constructor=a;a.g=function(a,c,m){for(var d=Array(arguments.length-2),e=2;e<arguments.length;e++)d[e-2]=arguments[e];return b.prototype[c].apply(a,d)}};var n=function(a){if(Error.captureStackTrace)Error.captureStackTrace(this,n);else{var b=Error().stack;b&&(this.stack=b)}a&&(this.message=String(a))};l(n,Error);n.prototype.name="CustomError";var p=function(a,b){a=a.split("%s");for(var c="",e=a.length-1,d=0;d<e;d++)c+=a[d]+(d<b.length?b[d]:"%s");n.call(this,c+a[e])};l(p,n);p.prototype.name="AssertionError";var q=function(a,b,c){if(!a){var e="Assertion failed";if(b){e+=": "+b;var d=Array.prototype.slice.call(arguments,2)}throw new p(""+e,d||[]);}},r=function(a,b){throw new p("Failure"+(a?": "+a:""),Array.prototype.slice.call(arguments,1));};var t=function(a,b){var c=(c=a&&a.ownerDocument)&&(c.defaultView||c.parentWindow)||f;if("undefined"!=typeof c[b]&&"undefined"!=typeof c.Location&&"undefined"!=typeof c.Element){var e=typeof a;q(a&&(a instanceof c[b]||!(a instanceof c.Location||a instanceof c.Element)),"Argument is not a %s (or a non-Element, non-Location mock); got: %s",b,"object"==e&&null!=a||"function"==e?a.constructor.displayName||a.constructor.name||Object.prototype.toString.call(a):void 0===a?"undefined":null===a?"null":typeof a)}};var w=function(a,b){this.b=a===u&&b||"";this.c=v};w.prototype.toString=function(){return"Const{"+this.b+"}"};var x=function(a){if(a instanceof w&&a.constructor===w&&a.c===v)return a.b;r("expected object of type Const, got '"+a+"'");return"type_error:Const"},v={},u={};var A=function(){this.a="";this.f=y};A.prototype.toString=function(){return"TrustedResourceUrl{"+this.a+"}"};
var B=function(a){if(a instanceof A&&a.constructor===A&&a.f===y)return a.a;r("expected object of type TrustedResourceUrl, got '"+a+"' of type "+k(a));return"type_error:TrustedResourceUrl"},F=function(a,b){var c=x(a);if(!C.test(c))throw Error("Invalid TrustedResourceUrl format: "+c);a=c.replace(D,function(a,d){if(!Object.prototype.hasOwnProperty.call(b,d))throw Error('Found marker, "'+d+'", in format string, "'+c+'", but no valid label mapping found in args: '+JSON.stringify(b));a=b[d];return a instanceof
w?x(a):encodeURIComponent(String(a))});return E(a)},D=/%{(\w+)}/g,C=/^(?:https:)?\/\/[0-9a-z.:[\]-]+\/|^\/[^\/\\]|^about:blank#/i,G=/^([^?#]*)(\?[^#]*)?(#[\s\S]*)?/,I=function(a){var b=aa;a=F(ba,a);a=B(a);a=G.exec(a);var c=a[3]||"";return E(a[1]+H("?",a[2]||"",b)+H("#",c,void 0))},y={},E=function(a){var b=new A;b.a=a;return b},H=function(a,b,c){if(null==c)return b;if("string"==typeof c)return c?a+encodeURIComponent(c):"";for(var e in c){var d=c[e];d="array"==k(d)?d:[d];for(var m=0;m<d.length;m++){var z=
d[m];null!=z&&(b||(b=a),b+=(b.length>a.length?"&":"")+encodeURIComponent(e)+"="+encodeURIComponent(String(z)))}}return b};var ca=new w(u,"https://www.google.com/cse/static/style/look/%{versionDir}%{versionSlash}%{theme}.css"),J=new w(u,"https://www.google.com/cse/static/element/%{versionDir}%{versionSlash}default+%{lang}.css"),ba=new w(u,"https://www.google.com/cse/static/element/%{versionDir}%{versionSlash}cse_element__%{lang}.js"),K=new w(u,"/");window.__gcse=window.__gcse||{};window.__gcse.ct=(new Date).getTime();
window.__gcse.scb=function(){var a=window.__gcse;L()||delete opts_.rawCss;google.search.cse.element.init(opts_)&&("explicit"!=a.parsetags?"complete"==document.readyState||"interactive"==document.readyState?(google.search.cse.element.go(),a.callback&&a.callback()):google.setOnLoadCallback(function(){google.search.cse.element.go();a.callback&&a.callback()},!0):a.callback&&a.callback())};function L(){return!(window.__gcse&&window.__gcse.plainStyle)}
function M(a){var b=document.createElement("link");b.type="text/css";t(b,"HTMLLinkElement");b.rel="stylesheet";q(a instanceof A,'URL must be TrustedResourceUrl because "rel" contains "stylesheet"');b.href=B(a);return b};var N,aa=opts_.usqp?{usqp:opts_.usqp}:{},O=opts_.language.toLowerCase();N=opts_.cselibVersion?I({versionDir:opts_.cselibVersion,versionSlash:K,lang:O}):I({versionDir:"",versionSlash:"",lang:O});var P=window.__gcse.scb,Q=document.createElement("script");t(Q,"HTMLScriptElement");Q.src=B(N);var R;if(null===h){var S;a:{var T=f.document,U=T.querySelector&&T.querySelector("script[nonce]");if(U){var V=U.nonce||U.getAttribute("nonce");if(V&&g.test(V)){S=V;break a}}S=null}h=S||""}
(R=h)&&Q.setAttribute("nonce",R);Q.type="text/javascript";P&&(Q.onload=P);document.getElementsByTagName("head")[0].appendChild(Q);
if(L()){document.getElementsByTagName("head")[0].appendChild(M(opts_.cselibVersion?F(J,{versionDir:opts_.cselibVersion,versionSlash:K,lang:opts_.language}):F(J,{versionDir:"",versionSlash:"",lang:opts_.language})));var W,X=opts_.uiOptions.cssThemeVersion||(opts_.uiOptions.forceV2LookAndFeel?2:void 0),Y=opts_.theme.toLowerCase(),Z=X?"v"+X:Y.match(/v2_/g)?"v2":"",da=Y.replace("v2_","");W=F(ca,{versionDir:Z,versionSlash:Z?K:"",theme:da});document.getElementsByTagName("head")[0].appendChild(M(W))};
})({
  "cx": "006831746953521642389:w6b7nwokmyg",
  "language": "en",
  "theme": "V2_DEFAULT",
  "uiOptions": {
    "resultsUrl": "",
    "enableAutoComplete": true,
    "enableImageSearch": true,
    "imageSearchLayout": "popup",
    "resultSetSize": "filtered_cse",
    "enableOrderBy": true,
    "orderByOptions": [{
      "label": "Relevance",
      "key": ""
    }, {
      "label": "Date",
      "key": "date"
    }],
    "overlayResults": true,
    "enableMobileLayout": false,
    "numTopRefinements": -1,
    "enableSpeech": true,
    "forceV2LookAndFeel": true,
    "hideElementBranding": false,
    "cssThemeVersion": 2,
    "mobileLayout": "disabled",
    "isSafeSearchActive": false
  },
  "protocol": "https",
  "rawCss": ".gsc-control-cse{font-family:arial, sans-serif}.gsc-control-cse .gsc-table-result{font-family:arial, sans-serif}",
  "cse_token": "AKaTTZg-Dqykaio9gstNQEWX8WA1:1550666665523",
  "isHostedPage": false,
  "exp": ["csqr"],
  "cselibVersion": "f4c84ae71301c012",
  "usqp": "CAI\u003d"
});