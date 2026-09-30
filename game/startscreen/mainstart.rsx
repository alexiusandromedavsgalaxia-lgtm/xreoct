component.Screen

screen {
  background(color: #000810)

  toptext(
    font(LHF Signmaker 2 Fancy)
    color(#115003)
    content("Evil" + Shift("Light"))
  )

  element.version {
    const GAMEVERSION [
      "beta v0.5"
    ]

    position(.?locate.toptext place: under)
    font(Origin 1)
  }

  element.configbutton {
    const GAMECONFIGURATIONMENUICON [
      "config"
    ]

    action(open.(xreoct/game/startscreen/configmenu.rsx))
  }

  element.playbutton {
    position(.?locate.versioncomponent place: under)
    size(5, 3)(scsize(3))
    content(text("PLAY"))
    font(Roboto HQ)
    action(redirect.route(game/loading/loadingscreen.rsx))
  }
}
