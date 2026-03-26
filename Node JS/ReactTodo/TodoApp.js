

import React, { useState } from 'react';

const TodoApp = () => {
    const [tasks, setTasks] = useState([]);
    const [input, setInput] = useState("");

    const addTask = () => {
        if (input.trim()) {
            setTasks([...tasks, { id: Date.now(), text: input, done: false }]);
            setInput("");
        }
    };

    const toggleTask = (id) => {
        setTasks(tasks.map(t => t.id === id ? { ...t, done: !t.done } : t));
    };

    const deleteTask = (id) => {
        setTasks(tasks.filter(t => t.id !== id));
    };

    return (
        <div className="todo-container">
            <h1>React TODO App</h1>
            <input
                type="text"
                value={input}
                onChange={(e) => setInput(e.target.value)}
                placeholder="New task..."
            />
            <button onClick={addTask}>Add</button>
            <ul>
                {tasks.map(task => (
                    <li key={task.id} style={{ textDecoration: task.done ? 'line-through' : 'none' }}>
                        {task.text}
                        <button onClick={() => toggleTask(task.id)}>✔</button>
                        <button onClick={() => deleteTask(task.id)}>✖</button>
                    </li>
                ))}
            </ul>
        </div>
    );
};

export default TodoApp;
