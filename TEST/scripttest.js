const form = document.querySelector('');
const input = document.querySelector("[name='todo']");
const todoList = document.getElementById('todos');

const existingTodos = JSON.parse(localStorage.getItem('todos'));
const todoData = existingTodos || [];

todoData.forEach(todo => {
 addTodo(todo);
});

form.onsubmit = (event) => {
 event.preventDefault();
 addTodo(input.value);
}