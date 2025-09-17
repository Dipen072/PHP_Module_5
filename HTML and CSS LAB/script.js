// Get elements
const lightbox = document.getElementById("lightbox");
const lightboxImg = document.getElementById("lightbox-img");
const caption = document.getElementById("caption");
const closeBtn = document.querySelector(".close");

// Open lightbox when image is clicked
document.querySelectorAll(".gallery-img").forEach(img => {
  img.addEventListener("click", () => {
    lightbox.style.display = "block";
    lightboxImg.src = img.src;
    caption.textContent = img.alt;
  });
});

// Close lightbox
closeBtn.addEventListener("click", () => {
  lightbox.style.display = "none";
});

// Close when clicking outside image
lightbox.addEventListener("click", (e) => {
  if (e.target === lightbox) {
    lightbox.style.display = "none";
  }
});
