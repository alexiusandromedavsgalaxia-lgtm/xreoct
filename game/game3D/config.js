SET class 3DConfig {{
  meta-characters = 0110010001010101010101011010101001010110010101010101010100101
  main-operation = 0xUClS01C2DAS900PW!PKDF9211KSF
  main-coder = XreoctRuntime3DMotor
  main-language = X3DR
}}
STRICT rule set main {{
UNABLE.git(git).git 
                   if command include "git" = status.locked()
  log.(Git Process Locked) 
}}
