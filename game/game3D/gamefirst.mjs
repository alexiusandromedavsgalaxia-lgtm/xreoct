set class SceneConfig {
  main class config {
    describe Scene as 3D {
      mainConfig.archive = ".3dconfig"
      mainConfig.path = ./(game/game3D/config.3dconfig)

      mainExperience.archive = ".cpi"
      mainExperience.path = ./(game/game3D/mainscene.cpi)
    }
  }
}

export default SceneConfig
