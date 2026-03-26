

const express = require('express');
const app = express();
app.use(express.json());

let students = [
    { id: 1, name: "Naveen", age: 21 },
    { id: 2, name: "Madhu", age: 22 }
];


app.get('/api/students', (req, res) => {
    res.json(students);
});


app.post('/api/students', (req, res) => {
    const student = {
        id: students.length + 1,
        name: req.body.name,
        age: req.body.age
    };
    students.push(student);
    res.status(201).json(student);
});


app.put('/api/students/:id', (req, res) => {
    const student = students.find(s => s.id === parseInt(req.params.id));
    if (!student) return res.status(404).send("Student not found.");

    student.name = req.body.name;
    res.json(student);
});


app.delete('/api/students/:id', (req, res) => {
    const student = students.find(s => s.id === parseInt(req.params.id));
    if (!student) return res.status(404).send("Student not found.");

    const index = students.indexOf(student);
    students.splice(index, 1);
    res.json(student);
});

const PORT = 5000;
app.listen(PORT, () => {
    console.log(`Express REST API running at http:
});
