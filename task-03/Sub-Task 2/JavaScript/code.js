const { isUtf8 } = require('buffer');
const fs = require('fs');

fs.readFile('/Users/a.t.yaswanthreddy/VS Code/Club/Task 1 Sub Task 2/Ruby/input.txt', 'utf8', (err, data) => {
    if(err){
        console.error(err);
        return;
    }

    fs.writeFile('output.txt', data, err => {
    if (err){
        console.err;
        return;
        }
    });
});
