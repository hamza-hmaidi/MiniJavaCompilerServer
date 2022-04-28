const express = require('express')
const app = express()
const { exec } = require("child_process");
const fs = require('fs');
const port = 3000


app.use(express.json());
app.use(express.urlencoded({ extended: true }));

var allowCrossDomain = function(req, res, next) {
    res.header("Access-Control-Allow-Origin", "*");
    res.header('Access-Control-Allow-Methods', 'GET,PUT,POST,DELETE');
    res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept, Cache-Control");

    // intercept OPTIONS method
    if ('OPTIONS' == req.method) {
      res.send(200);
    }
    else {
      next();
    }
};
app.use(allowCrossDomain);

const test = `public int ComputeFac(int a,bool c){
    int p;
    int p1;
    int p2;
    if (a < 1)
        p2 = 1 ;
    else
        p2 = p * (this.ComputeFac(5,6<5)) ; 
    return p2 ;
}`
  


app.post('/run',(req,res)=>{
    console.log(req.body.program)
    var output ="";
    program = req.body.program;
    try{
        fs.writeFileSync('./file.txt', program);
        // file written successfully
      }catch (err){
        console.error(err);
    }
    
    command = "python script.py && ./app< test.txt"
    exec(command, (error, stdout, stderr) => {
    if (error) {
        console.log(`error: ${error.message}`);
        return;
    }
    if (stderr) {
        console.log();
        output=output + `stderr: ${stderr}`
        }
    
    output=output +`stdout: ${stdout}`;
    console.log(output);
    res.send({"output":output} )
    });
})

// app.get('/run', (req, res) => {
    

//   })

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})


