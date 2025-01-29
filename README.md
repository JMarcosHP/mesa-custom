# Mesa Custom Build for Fedora

## 🚀 Overview
Mesa build from Fedora Sources repository with additional codecs enabled.

## 🎥 Codecs Support
- VA-API support
- VDPAU support
- All video codecs enabled
- Hardware acceleration
- Multimedia encoding/decoding

This repository is designed to be used alongside **ffmpeg** full package and **@multimedia** group from RPM Fusion to play the restricted codecs. While their use is not mandatory, it is highly recommended.

## Steps to Get Started

### 1. Enable the mesa-custom Repository
Run the following command in your terminal to enable the mesa-git repository:

```bash
sudo dnf copr enable jmarcoshp/mesa-custom
```

### 2. Recommended: Enable Additional Repositories

For the best experience, it is suggested to enable RPM Fusion:

https://rpmfusion.org/Configuration

### 3. Recommended: Install full codecs support from RPM Fusion:

https://rpmfusion.org/Howto/Multimedia

### 4. Package update
Run the following command in your terminal or use the GUI software management tool on your system.

  ```bash
  sudo dnf  update --refresh   -y
  sudo dnf install mesa-va-drivers mesa-vdpau-drivers --repo copr/jmarcoshp
