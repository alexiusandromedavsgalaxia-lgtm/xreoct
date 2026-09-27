component.Screen
screen {
background(color: #000810);
  toptext(
    font(LHF Signmaker 2 Fancy);
    color( #115003);
    content( "Evil" + Shift("Light"))
  )
  element.version {
const GAMEVERSION [
  "beta v0.5"
  ];
position(
  .?locate.toptext place: under
);
font(Origin 1)
}

element.configbutton {
const GAMECONFIGURATIONMENUICON [
  <hlink>encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTNxT4rIBVe2zHqcaf8IH3dTvgyzdcmsEgiNozCMGH_dw&s=10<\hlink>;
 <hlink-https>"yes"<hlink-https>;
  backgroundAction(downloadAsset; saveOnCache);
  if download = true {
  <asset>~/game/cache/assets/configiconasset.cache<\asset>;
};
  ];
};

element.playbutton {
postion(
  .?locate.versioncomponent place: under);
size(5, 3)(scsize(3));
content(text("PLAY");
font(Roboto HQ);
action(redirect.route(game/loading/loadingscreen.rsx)
       }
       }
  
