  
    .ws-media-content-container.has-image:not(.ws-safe-mode) {
      transition: opacity 1s;
      opacity: 0;
    }

    ::slotted(a),
    ::slotted(picture) {
      display: block;
    }

    ::slotted(a.ws-visible),
    ::slotted(picture.ws-visible),
    ::slotted(img.ws-visible),
    .ws-media-content-container.loaded.ws-safe-mode,
    .ws-media-content-container.loaded:not(.ws-safe-mode) {
      opacity: 1;
    }
  