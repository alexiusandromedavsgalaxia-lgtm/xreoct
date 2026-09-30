enter avoid; main download;
#include <3DCharacter>;
main AVOID [[
  set main character;
set main view;
set main map;
main avoid
]]

main UserView {{
  <perspective>zoom<0>;characterview<0></perspective>;
if ctd::sty(main object; character object);
when character(sty::stdd(main object(set void(object, hitbox))));
set hitbox(all(avoid(object main((
avoid [[
main {{
createHitbox {{
set {set(*reactangle(around.object((arround(int)))))}
}}
]]
))
}}
avoid CharacterGrab {{
grabObject(mainGrab(set object; character(set)))
}}
