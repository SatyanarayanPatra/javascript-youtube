const buttons = document.querySelectorAll('.gaming');

buttons.forEach((button) => {
	button.addEventListener('click', function () {
		// Remove `is-toggled` class from all buttons
		buttons.forEach((btn) => btn.classList.remove('is-toggled'));

		// Add `is-toggled` class to the clicked button
		button.classList.add('is-toggled');
	});
});
