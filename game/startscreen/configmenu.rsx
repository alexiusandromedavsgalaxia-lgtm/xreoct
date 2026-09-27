component.ConfigMenu
ConfigMenu {
  screen {
    background(color: #000810)

    title(
      content("CONFIGURATION")
    )

    control.volume {
      label(content("VOLUME"))
      slider(
        value(100)
        range(0, 100)
        action(SetVolume)
      )
    }

    control.brightness {
      label(content("BRIGHTNESS"))
      slider(
        value(100)
        range(0, 100)
        action(SetBrightness)
      )
    }

    button.close {
      content("CLOSE")
      action(CloseConfigMenu)
    }
  }
}

export default ConfigMenu
