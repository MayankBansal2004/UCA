var express = require("express");
var app = express();

app.listen(8080);
app.use('/',express.static('./fee'))
app.use("/",()=>{
    console.log('hello from the start')
});