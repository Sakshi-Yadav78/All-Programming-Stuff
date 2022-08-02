
// Node Server to handle socket io connections
const io = require('socket.io')(8000)
const users = {};

io.on('connection', socket =>{
      socket.on('new-user-joined', name=>{
         //console.log("New user", name);
        const transport = socket.conn.transport.name; // in most cases, "polling"
        users[socket.id] = name;
        socket.broadcast.emit('user-joined', name);

        socket.conn.on("upgrade", () => {
          const upgradedTransport = socket.conn.transport.name; // in most cases, "websocket"
        });
    });

    socket.on('send', message =>{
        socket.broadcast.emit('receive', {message: message, name: users[socket.id]})
    });

    socket.on('disconnect', message =>{
        socket.broadcast.emit('left', users[socket.id]);
        delete users[socket.id];
    });
})