pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        sh 'c++  src/*.cpp -lSDL2 -lSDL2_image'
      }
    }

  }
}
