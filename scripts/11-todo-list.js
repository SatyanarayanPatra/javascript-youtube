const todoArray = [];
function handleAdd () {
	const inputElement = document.querySelector('input');
	const inputValue = inputElement.value.trim();
	todoArray.push(inputValue);
	console.log(todoArray);
}

const todoList = ['make dinner', 'wash dishes', 'watch youtube'];

for (let item of todoList) {
	console.log(item);
}

const nums = [1, 2, 3, 4];

const value = nums.reduce((acc, num) => {
	return acc + num;
});

console.log(value);

const doubledNums = nums.map((num) => (num * 2));
console.log(doubledNums);