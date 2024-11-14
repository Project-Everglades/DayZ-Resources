# 🌍 DayZ-Resources Overview 🚀

This repository provides comprehensive resources, tools, and guides for **DayZ modding and development**, covering **Map Creation**, **Mod Creation**, and other DayZ-related projects.

## 📑 Table of Contents

- [Introduction](#introduction)
- [General Resources](#general-resources)
  - [Required Applications](#required-applications)
  - [Optional Applications](#optional-applications)
- [Map Creation](#map-creation)
  - [Creating Maps from Scratch](#creating-maps-from-scratch)
  - [Creating Maps from Satellite Images](#creating-maps-from-satellite-images)
- [Custom Mod Creation](#custom-mod-creation)
  - [Object Building](#object-building)
  - [3D Modeling and Asset Creation](#3d-modeling-and-asset-creation)
- [Setting Up the P Drive](#setting-up-the-p-drive)
- [Contributing](#contributing)
- [License](#license)

---

## 🎮 Introduction

Welcome to **DayZ-Resources**, your go-to repository for all things related to DayZ modding and map creation. This repository includes everything from application requirements to specific tutorials on creating and customizing maps and mods. Whether you're just starting or are a seasoned modder, we've got the resources to help you bring your ideas to life! ✨

---

## 🛠️ General Resources

These are the general resources required to get started with DayZ modding and map creation.

### ✅ Required Applications

A list of essential applications for DayZ development, including installation and setup instructions:

- [**Notepad++**](/tools/notepad_plus_plus/notepad_plus_plus.md) – ✏️ for editing configuration files.
- [**Blender**](/tools/blender/blender.md) – 🖌️ for creating and editing 3D models.
- [**AutoDesk Fusion**](https://www.autodesk.com/products/fusion-360/personal) – 🖌️ for creating and editing 3D models. Can you the `Personal Use` version for free which offers a different perspective than `Blender` with creating 3D models.
- [**Git Bash**](/tools/gitbash/gitbash_overview.md) – 🌳 for version control and repository management.
- [**DayZ Tools**](/tools/dayz_tools/DayZ_Tools_Overview.md) – 🔧 essential for modding and map creation.
- **PBO Manager** – 📦 for working with PBO files in DayZ.

### ✨ Optional Applications

Optional tools that can enhance your workflow or provide additional functionality:

- **Visual Studio 2022 (Community Edition)** – 💻 for coding and scripting.
- **Substance Painter** – 🎨 for texturing 3D models.
- **World Creator 2.0** – 🌍 for procedural terrain generation.
- **MindMeister** – 💡 for brainstorming and organizing ideas.

---

## 🗺️ Map Creation

### 🏗️ Creating Maps from Scratch

A complete guide to creating maps for DayZ from the ground up. This includes setting up terrain, adding vegetation, buildings, and other environmental details.

- **📂 Folder Information** – Organizing your map files and project structure.
- **🗺️ Map Signs and Landmarks** – Adding signs and key landmarks to maps.
- **🏠 Special Buildings and Texture Details** – Enhancing your maps with custom buildings and textures.
- **💧 Creating Lakes & Waterways** – Adding natural water bodies to your maps.
- **🛣️ Create Roadways (TP)** – Building roads and pathways in your terrain.

### 🌍 Creating Maps from Satellite Images

Instructions on how to use satellite images as a basis for creating realistic DayZ maps.

- **🛰️ Extracting Game Data** – Pulling data from existing maps and satellite sources.
- [**QGIS**](/tools/qgis/QGIS_Overview.md) & [**L3DT Pro**](/tools/l3dt/L3DT_Overview.md) – 🌐 Using Geographic Information System (GIS) tools for accurate terrain mapping.
- **⚠️ Map Frame Issue** – Resolving common issues related to map frames and scaling.
- **🖥️ DayZ Offline Mode** – Testing maps locally before uploading to servers.

---

## 🛠️ Custom Mod Creation

### 🏗️ Object Building

Guides and tools for creating custom objects within the DayZ environment, including buildings, furniture, and other assets.

- **🔧 DayZ Editor** – A tool for creating and placing objects in your maps.
- [**Terrain Builder**](/tools/dayz_tools/terrain_builder/Terrain_Builder_Overview.md) – 🏞️ Setting up terrain elements and placing objects in the world.
- [**Adding Objects**](/tools/dayz_tools/terrain_builder/Add_Objects.md) – 🏠 Detailed instructions on adding custom objects to your DayZ maps.

### 🎨 3D Modeling and Asset Creation

Resources for creating 3D models and assets to use in custom DayZ mods.

- **🔍 Sources for 3D Models** – Recommended sites and resources for finding or creating 3D models.
- **🖌️ Asset Modeling** – Techniques for modeling and texturing assets specifically for DayZ.
- **👥 Dev As A Team - DayZ** – Tips and best practices for collaborating on DayZ modding projects.

---

## 💾 Setting Up the P Drive

The **P Drive** is a critical part of the modding workflow, serving as your modding workspace where you can safely make changes to game files without affecting the original installation.

### 🛠️ How to Set Up the P Drive

1. **Mount the P Drive in DayZ Tools**:
   - Open **DayZ Tools**.
   - Go to **Tools > Dismount Drive P** if it's already mounted and needs to be reset.
   - Then select **Tools > Workbench** to mount the **P Drive**.

   ![DayZ Tools Mount P Drive](images/dayz_tools_p_drive_mount.png)

2. **Verify the P Drive is Mounted**:
   - The **P Drive** should appear in **File Explorer** as a new drive. This is your workspace for modifying DayZ files.

3. **Ensure Consistent Paths**:
   - Make sure DayZ Tools and DayZ are installed on the same drive. Consistent paths are critical for the P Drive to function correctly and to prevent errors during the modding process.

> **Tip**: Think of the **P Drive** as your sandbox – a safe place to make changes without touching the core game files! 🏖️

---

## 🤝 Contributing

We welcome contributions from the DayZ community! If you have a tool, resource, or insight to share, please follow these steps to contribute:

1. **Fork the repository**.
2. **Create a branch** for your changes (`git checkout -b feature/YourFeature`).
3. **Commit your changes** (`git commit -m 'Add new feature'`).
4. **Push to the branch** (`git push origin feature/YourFeature`).
5. **Open a Pull Request**.

Please ensure your contributions are well-documented and align with the purpose of this repository. Collaboration is key to making the DayZ modding community even better! 🌟

---

## 📜 License

This repository uses a dual-license system:

- **GPL-3.0**: Applies to all code resources in this repository, including scripts, tools, and code files. You can view the full license text in the [LICENSE.md](LICENSE.md) file.
- **CC BY-SA 4.0**: Applies to documentation, images, and other non-code resources. You can view the full license text in the [LICENSE-CC-BY-SA-4.0.md](LICENSE-CC-BY-SA-4.0.md) file.

Please ensure you adhere to the appropriate license based on the type of resource you’re using or modifying.

---

By following these guides, using the tools, and leveraging the resources provided, you'll be able to take your DayZ modding to the next level. Happy modding! 🎉
