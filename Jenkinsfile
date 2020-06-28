
pipeline {
    agent { 
        dockerfile {
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'chmod +x scripts/build.sh'
                sh 'scripts/build.sh'
                //archiveArtifacts artifacts: 'build/bin/*', fingerprint: true
            }
        }
        stage('Run') {
            steps {
                sh 'chmod +x scripts/run_tests.sh'
                sh 'scripts/run_tests.sh'
            }
        }
    }
    post {
        always {
            deleteDir()
        }
    }
}