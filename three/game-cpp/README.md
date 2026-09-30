# Xreoct — game-cpp

Reimplementación de la rama game usando C++20 para el núcleo y JavaScript ES modules para loading, UI/configuración e idiomas.

Estructura:
- CMakeLists.txt
- include/xreoct/engine.hpp
- include/xreoct/scene.hpp
- include/xreoct/map.hpp
- include/xreoct/character.hpp
- include/xreoct/config.hpp
- src/*.cpp
- js/*.js

Correspondencia:
- gamefirst.mjs + config.3dconfig -> engine.* + CMake
- mainscene.cpi -> scene.*
- map.cpi -> map.*
- character.cpi -> character.*
- loadingscreen.rsx -> js/loading.js
- mainstart.rsx -> js/start.js
- configmenu.rsx -> js/config.js
- language.rs -> js/languages.js

La implementación nueva vive fuera de game y conserva game como referencia.
