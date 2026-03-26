/* Exp 2: Client-side Validation and Exp 1 functionality */

document.getElementById('regForm').addEventListener('submit', function(e) {
    e.preventDefault();
    const name = document.getElementById('regName').value;
    const email = document.getElementById('regEmail').value;
    const pass = document.getElementById('regPass').value;
    const msg = document.getElementById('regMsg');

    // Simple validation (Exp 2)
    if (name.length < 3) {
        msg.textContent = "Name must be at least 3 characters.";
        return;
    }
    if (!email.includes('@')) {
        msg.textContent = "Please enter a valid email address.";
        return;
    }
    if (pass.length < 6) {
        msg.textContent = "Password must be at least 6 characters.";
        return;
    }

    msg.style.color = "green";
    msg.textContent = "Registration Successful!";
    this.reset();
});

// Shopping Cart (Exp 1 Logic)
let cart = [];
let total = 0;

document.querySelectorAll('.add-btn').forEach((btn, index) => {
    btn.addEventListener('click', () => {
        const itemNames = ["Item 1", "Item 2", "Item 3", "Item 4"];
        const itemPrices = [10, 20, 15, 25];
        
        cart.push(itemNames[index]);
        total += itemPrices[index];
        updateCart();
    });
});

function updateCart() {
    const cartList = document.getElementById('cartItems');
    const totalPriceSpan = document.getElementById('totalPrice');
    
    cartList.innerHTML = "";
    if (cart.length === 0) {
        cartList.innerHTML = "<li>Your cart is empty.</li>";
    } else {
        cart.forEach(item => {
            let li = document.createElement('li');
            li.textContent = item;
            cartList.appendChild(li);
        });
    }
    totalPriceSpan.textContent = total;
}
