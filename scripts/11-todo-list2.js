const arrayList = [];
function handleAdd() {
	const inputElement = document.querySelector('input');
	arrayList.push(inputElement.value);
	const listElement = document.querySelector('.list');
	let listElementData = ``;
	for (let i = 0; i < arrayList.length; i++) {
		listElementData += `<p>${arrayList[i]}</p>`
	}
	listElement.innerHTML = listElementData;
}