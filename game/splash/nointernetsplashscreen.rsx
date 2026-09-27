.(archiveName: "nointernetsplashscreen.rsx")
.(archiveRoute: "xreoct/game/splash/nointernetsplashscreen.rsx")
if user OpenApp & internet = false
return NoInternetSplash
NoInternetSplash {
  time(0, 0, 00)(screenBackground( #010004 (black)))
return Animation
}
Animation {
  <asset>examplelogo.png<\asset>
.drawlogo(
  import default drawLogo
  return AnimateText
  )
}
AnimateText {
  import default AnimText
return Advertence 
}

Advertence {
.title("Wir haben festgestellt, dass das Gerät vom Wi-Fi-Netzwerk oder den mobilen Datennetz getrennt ist.")
.content("Dies kann sich auf das Gameplay mit Funktionen wie Computern oder das Herunterladen virtueller Artikel auf Maschinen auswirken.")
.buttons(
  const BUTTONWi-Fi [ text("Active Wi-Fi")Action(Request!Wi-FiActivation) ]
  const BUTTONContinue [ text("Continue without Wi-Fi")Action(ContinueGame) ]
  )
}
