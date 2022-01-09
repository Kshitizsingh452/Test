// //file system

// const http=require('http')
// const port=8080;
// const server=http.createServer((req,res)=>{
//     // console.log(req);
//     if(req.url==='/'){
//         res.end('WelcomeTo Home Page')
//     }

//     if (req.url === '/about') {
//       res.end("WelcomeTo About Page");
//     }

//     res.end(`
//     <h1>OOPS Sorry!!!!</h1>
//     <p>We cant seem to find the page</p>
//     <a href="/">Back Home</a>
//     `);

// })

// server.listen(port);
const http = require("http");

const PORT = 5001;
const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.end("Home Page");
  } else if (req.url === "/about") {
    res.end("About Page");
  } else {
    res.end("Error page <h1>Oops</h1> ");
  }
});

server.listen(PORT, () => {
  console.log(`Server is listening on port: ${PORT}`);
});
