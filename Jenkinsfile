pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        sh 'c++ src/main.cpp -lSDL2 -lSDL2_image'
      }
    }

  }
}