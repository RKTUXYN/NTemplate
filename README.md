# NTemplate
Native Template Parser Addon for Node.js

<b>Example</b>:
```js
var tparser = require( './release/ntemplate' );

var html = undefined;

tparser.runScript( `for(let p=0; p<10; p++)console.log('Script is running...' + p)` );

html = tparser.parse( __dirname, __dirname + "\\test\\nested_template.html.html" );
console.log( html );

html = tparser.parse( __dirname, __dirname + "\\test\\nested_template.html.html" );
console.log( html );

html = tparser.parse( __dirname, __dirname + "\\test\\script_template.html.html", this );
console.log( html  );

for ( let i = 0; i < 10000; i++ ) {
    let _html = tparser.parse( __dirname, __dirname + "\\test\\nested_template.html" );
    console.log( _html);
};

let settings = {
    root_dir: "SERVER ROOT DIRECTORY",
    page_path: "REQUIST PAGE PATH",
    data: "array/object/undefined",
    isAsync: "boolean [true/false]",
    callback: function ( rsp ) { }
};
/**resp = {
    is_error: false,
    err_msg: "NOPE",
    result: "HTML RESULT HERE!!!"
};*/
tparser.parseo( {
    root_dir: __dirname,
    page_path: __dirname + "\\test\\index.html",
    data: this,
    isAsync: true,
    callback: function ( rsp ) {
        if ( rsp.is_error ) {
            console.log( rsp.err_msg );
        } else {
            console.log( rsp.result );
        }
    }
} );
tparser.parseo( {
    root_dir: __dirname,
    page_path: __dirname + "\\test\\nested_template.html",
    data: this,
    isAsync: false,
    callback: function ( rsp ) {
        if ( rsp.is_error ) {
            console.log( rsp.err_msg );
        } else {
            console.log( rsp.result );
        }
    }
} );
let resp = tparser.parseo( {
    root_dir: __dirname,
    page_path: __dirname + "\\test\\nested_template.html",
    data: this,
    isAsync: false
} );
```
