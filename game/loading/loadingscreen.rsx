component.Screen

screen {
  background(color(black))
  text {
    color(white)
    content("Loading...")
    typography(ROTT 2.4)
  }

  wait(time(3))
  charge.gameassets()

  when(state == "finish") {
    redirect(route(game/game3D/gamefirst.mjs))
  }
}
