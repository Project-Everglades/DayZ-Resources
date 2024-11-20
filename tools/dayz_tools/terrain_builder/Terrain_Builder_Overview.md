# 🛠️ Terrain Builder Overview 📋

**Terrain Builder (TB)** is an integral part of DayZ Tools, specifically designed for creating and modifying terrain in DayZ. It allows you to shape landscapes, place objects, and edit textures, all while visualizing changes in real-time using Bulldozer.

## ⭐ What Terrain Builder Offers

Terrain Builder provides extensive features for designing custom terrains, such as:

- **🌍 Terrain Shaping**: Modify the land to create hills, valleys, and plateaus.
- **🏠 Object Placement**: Place buildings, roads, trees, and other objects.
- **📏 Real-Time Adjustment**: Preview changes in real-time using the **Bulldozer** tool.
- **🛣️ Road Networks and Pathways**: Create complex networks of roads and paths.

## 🚀 Why Use Terrain Builder?

**Terrain Builder** is a powerful tool that offers direct modification of terrain and object placement, which makes it essential for creating immersive environments in DayZ. Some of its key features are:

| Feature                      | Description                                                                                                                                                   |
|-----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Real-Time Visualization** | Use the **Bulldozer** tool to visualize the changes you make as you shape the terrain or place objects.                                                        |
| **Precise Object Placement**| Place and adjust objects with precision. Unlike other tools, **Terrain Builder** lets you hard-code objects into the map, which can have performance benefits on server start-up. |

## 📊 Terrain Builder vs. Editor Insights

There are often questions about what **Terrain Builder** can do that the **DayZ Editor** cannot. Here is a great insight shared by **Duncan**

> [Source: Discord Community Insight](https://discord.com/channels/1007407426208796783/1082665758431129741/1307704885399126177), a community member, regarding the advantages of **Terrain Builder**:
>
> "When you place objects through **Terrain Builder** (TB), they get hard-coded into the map, making it easier and lighter on server start-up. With the **Editor**, objects are added as scripts that force the server to aggressively spawn all that stuff upon server start. This approach can be terrible for server performance in the long run, especially for complex game modes like **Stalker**, which involve numerous scripts and mods. Many server owners may prefer to avoid heavily scripted maps or may simply bake the objects themselves.
>
> A good middle ground is to place objects in **Editor** first and then export them to **TB**, which provides flexibility and efficiency. Personally, I prefer **Terrain Builder** since you can adjust terrain in real time." - **Duncan**

This community insight highlights the practical benefits of using **Terrain Builder**, especially for server performance and creating well-optimized maps.

### 🔑 Key Points from Duncan's Insight:

- **Hard-Coded Objects in TB**: Objects placed through **Terrain Builder** are hard-coded, resulting in easier and lighter server start-up.
- **Scripted Objects in Editor**: Objects added via **DayZ Editor** are added as scripts, which can negatively affect server performance.
- **Server Performance**: Using **Terrain Builder** is more efficient for servers with complex game modes or heavy scripts.
- **Balanced Approach**: A practical solution is to start with **DayZ Editor** for initial object placement and then export to **Terrain Builder** for refinement.
- **Real-Time Terrain Adjustment**: **Terrain Builder** offers real-time terrain adjustments, making it a preferred choice for Duncan.

## 🏗️ Object Placement and Terrain Editing

### 🏞️ Creating and Modifying Terrain

- **Height Adjustments**: Sculpt hills, valleys, and other landforms using the terrain editing tools.
- **Texture Application**: Apply different textures for dirt, grass, roads, and more.

### 🏘️ Placing Objects

- **Using Object Libraries**: Choose from a wide range of available models in the **Object Library** to enrich your terrain. Review the Additional details on [Adding Objects](./Add_Objects.md).
- **Road and Path Creation**: Create roads and paths to link key locations. Review the [Terrain Processor](../terrain_processor/Terrain_Processor_Overview.md) guide on how to automatically generate objects, including roads and paths with Terrain Builder.

### 🔄 Combining with Other Tools

- **Importing from Editor**: Objects placed using **DayZ Editor** can be exported and then refined in **Terrain Builder**. This approach allows for quick prototyping in **Editor** followed by precise adjustments and optimization in **TB**.

## 🛠️ Tips for Working with Terrain Builder

- **Use Bulldozer Frequently**: The real-time preview makes a big difference when trying to create realistic landscapes.
- **Export Often**: Keep backups and export progress regularly to prevent losing work if the software crashes.
- **Balance Between TB and Editor**: Consider starting object placements in **Editor** and then importing them into **TB** for the best balance between efficiency and server performance.

## 🏗️ Terrain Builder Project Setup Guide

This guide provides an overview of the recommended folder structure and essential files needed to set up a custom map in DayZ using Terrain Builder. It includes descriptions of each key folder and file, as well as step-by-step instructions for organizing and configuring your project.

## 🔧 Configuration Templates

In the `config_templates` folder, you’ll find essential configuration files that serve as starting points for your custom terrain project:

- [**`layers.cfg`**](config_templates/source/layers.cfg): Maps colors in your mask file to specific textures. Adjust this file to match the textures and colors you are using in your project.
- [**`config.cpp`**](config_templates/world/config.cpp): Sets up primary terrain parameters like map size, grid details, and pathfinding settings. Customize paths and settings based on your project requirements.

### How to Use

1. **Copy Files**: Copy `layers.cfg` and `config.cpp` from the `config_templates` folder into your project’s source or data folders as needed.
2. **Modify Paths and Parameters**: Update the file paths and any other parameters to fit the structure of your own project.

Refer to this documentation for additional guidance on configuring these files.

## 📁 Key Files in Terrain Builder Projects

When working with Terrain Builder, there are several important files that play a critical role in building and configuring your map:

1. [**`layers.cfg`**](config_templates/source/layers.cfg): Defines how different textures and materials are applied to your terrain based on the mask image.
2. [**`maplegend.png`**](config_templates/source/MapLegend.png): Visual representation of color codes used in `layers.cfg`.
3. **`mask.png`**: An image file where different colors represent various terrain types, such as grass, roads, and water.
4. **`heightmap.asc`**:
   - ASCII grid file containing elevation data for your terrain.
   - Generated by one of the following tools: `GQIS` and `L3DT`
   - This file is critical as it forms the foundation for your 3D map by storing elevation information. Think of it as a 2D version of your terrain that defines the x, y (like in a math graph), and also includes the z (height) coordinates. For example, if you want to create a hill, the heightmap defines how steep or gradual the slope is, directly impacting how the physical terrain appears and interacts within the game environment. Think of this as a 2D version of your map that stores the x & y (like in a math graph) coordinates.
5. **`satmap.bmp`**: High-resolution satellite image used as the base texture for your terrain.
6. [**`config.cpp`**](config_templates/world/config.cpp): Configuration file defining various terrain parameters, such as map size, grid size, and object placements.

## 🚀 Setting Up Your Terrain Builder Project

Follow these steps to set up your Terrain Builder project for DayZ map creation:

1. **Prepare Your Heightmap**:
   - Create or obtain a `heightmap.asc` file that represents the elevation data for your terrain.
   - This file determines the physical shape and features of your landscape.

2. **Design Your Mask**:
   - Develop a `mask.png` where different colors correspond to various terrain types (e.g., green for grass, blue for water).
   - Ensure this aligns with the mappings in your `layers.cfg` and matches colors in `maplegend.png`.

3. **Configure Layers**:
   - Edit the `layers.cfg` to map colors in your mask to specific textures.
   - Ensure that the `maplegend.png` accurately represents these mappings.

4. **Set Up Configurations**:
   - Define your terrain's parameters in the `config.cpp` file, including map size, grid size, and other essential settings.

5. **Organize Your Folders**:
   - Place each file in its appropriate folder (`source`, `data`, `navmesh`, `world`) to maintain organization and ensure Terrain Builder can locate all necessary files.

6. **Run Terrain Builder**:
   - Open Terrain Builder and load your project files. Follow standard map-building practices, using the textures, elevation data, and objects specified in your folders.

## 📂 Project Folder Structure

Organizing your project files systematically is crucial for efficient workflow and compatibility with Terrain Builder. Here’s a suggested folder structure:

### Top-Level Folders

- **ce/**: Contains configuration files that manage game mechanics, spawn points, economy, and environmental zones.
- **data/**: Holds processed data files, including terrain layers and configuration files.
- **navmesh/**: Contains navigation mesh data and configuration specific to AI pathfinding.
- **source/**: Stores all raw source files, including heightmaps, masks, and layer configuration files.
- **world/**: Contains world-specific configuration files for the map.

## 📋 Folder Details

### `data/` - Processed Data Files

The **data** folder includes important files generated or used by Terrain Builder.

- **config.cpp**: The main configuration file that sets terrain parameters and map details.
- **layers/**: Contains individual `M_000_000_lca.paa` and `M_000_000_lca.png` files, which are layered terrain textures for applying detailed textures to specific map segments.

**Best Practice**: Organize your data files logically, ensuring that terrain parameters are clearly documented. Keep track of different versions to maintain consistency across updates.

### `ce/` - Central Economy & Configuration Files

The **ce** folder includes XML files defining game economy, spawn points, and environment configurations.

#### Subfolders and Files

- **db/**:
  - **`economy.xml`**: Configures the economic system for loot distribution.
  - **`events.xml`**: Defines random events across the map.
  - **`globals.xml`**: Contains global variables affecting the map.
  - **`types.xml`**: Specifies item types and spawn probabilities.

- **env/**:
  - **`brownbear_territories.xml`**: Territory zones for brown bears.
  - **`zombie_territories.xml`**: Defines zones where zombies spawn.

#### Other Files

- **`areaflags.map`**: Defines specific area flags on the map.
- **Various `cfg*.xml` files**: Configure player spawn points, environment settings, and group clustering.

**Best Practice**: Maintain a consistent naming convention for XML files and regularly validate them to ensure accuracy. Document any changes made to these configurations to facilitate troubleshooting.

### `navmesh/` - Navigation Mesh

The **navmesh** folder holds data related to AI navigation across the map.

- **config.cpp**: Configuration for pathfinding and AI behavior on the map.

### `source/` - Source Files

The **source** folder stores raw data used by Terrain Builder to create and render the terrain.

- **AllObjects/**: Contains a list of all objects that can be used or referenced within the map.
- **images/**: Stores images like `default_mask.png`, `heightmap.asc`, `satmap.bmp`, and `normals.bmp` for map textures and elevation data.
- **L3DT/**: Contains files generated by the L3DT terrain generator software.
- **shapefiles/**: Contains GIS data files used to define specific areas or shapes on the map.
- **TerrainBuilder/**: Stores `.v4d`, `.v4w`, and `.tml` files for map rendering.

### `world/` - World-Specific Assets

The **world** folder typically includes additional assets or configurations that apply specifically to the world you're building.

- **config.cpp**: Contains map-specific configuration for rendering and gameplay.
- **`CustomMap.hpp`** and **`CustomMap.wrp`**: Files essential for defining the world’s layout and wrapping the map data in a usable format.

## 🤝 Community Insights and Learning Resources

- **Join Discord Communities**: There are many **Discord servers** where modders discuss **Terrain Builder** tips and best practices. Connecting with others can be a great way to improve your skills and learn new techniques.

For more details and step-by-step tutorials, refer to the [official DayZ modding documentation](https://community.bistudio.com/wiki/DayZ).

---

By leveraging **Terrain Builder** effectively, you can create complex and engaging terrains while optimizing server performance. Remember to balance your workflow between **Editor** and **Terrain Builder** to get the best of both worlds! 🌟
