
pipeline {
    agent { 
        dockerfile {
            //args '-u root'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'chmod +x scripts/build_gcc.sh'
                sh 'scripts/build_gcc.sh'
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