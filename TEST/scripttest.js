const form = document.querySelector('');
const input = document.querySelector("[name='todo']");
const todoList = document.getElementById('todos');

const existingTodos = JSON.parse(localStorage.getItem('todos'));
const todoData = existingTodos || [];

todoData.forEach(todo => {
 addTodo(todo);
});

function addTodo(todoText) {
 todoData.push(todoText);
 const li = document.createElement('li');
 li.innerHTML = todoText;
 todoList.appendChild(li);
 localStorage.setItem('todos', JSON.stringify(todoData));
}

form.onsubmit = (event) => {
 event.preventDefault();
 addTodo(input.value);
}