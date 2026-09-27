.(archiveName: "splashscreen")
  .(archiveRoute: "xreoct/game/splash/splashscreen.rsx")
if user OpenApp return Splash

Splash {
  time(0, 0, 00)(screenBackground: #010002 (black))
return Animation 

Animation {
  <asset>examplelogo.png<\asset>
.drawlogo(
  time(1, 0, 03)
  draw(logo(part(1, 2)))
            time(1, 0, 05)
            draw(logo(part(1, 4)))
                      time(1, 0, 07)
                      draw(logo(part(1, 06)))
                                time(1, 0, 09)
                                draw(logo(part(1, 09)))
                                          time(1, 1, 00)
                                          draw(logo(part(2)));
                                                    );
return export default AnimationLogo;
return TextAnimation                                               
                                               
                                               TextAnimation {
                                          const TEXT [ "Keplerians Horror Games" ];
                                                 .type-text(
                                                   time(1, 0, 05)
                                                   draw(text(part(1, 5)))
                                                             time(1, 1, 00)
                                                             draw(text(part(2)))
                                                   )
}
