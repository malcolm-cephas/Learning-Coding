

const http = require('http');
const os = require('os');
const path = require('path');
const EventEmitter = require('events');

const customEmitter = new EventEmitter();


customEmitter.on('reqReceived', (url) => {
    console.log(`Request received for: ${url}`);
});

const server = http.createServer((req, res) => {
    customEmitter.emit('reqReceived', req.url);

    res.writeHead(200, { 'Content-Type': 'application/json' });


    const osInfo = {
        platform: os.platform(),
        freeMem: os.freemem(),
        totalMem: os.totalmem(),
        uptime: os.uptime()
    };


    const pathInfo = {
        name: path.basename(__filename),
        dir: path.dirname(__filename),
        ext: path.extname(__filename)
    };

    const response = {
        message: "Node.js System Info",
        os: osInfo,
        path: pathInfo
    };

    res.end(JSON.stringify(response, null, 2));
});

const PORT = 3000;
server.listen(PORT, () => {
    console.log(`Server running at http:
});
