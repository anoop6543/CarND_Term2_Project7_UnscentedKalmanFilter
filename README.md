### Self Driving Car Nano Degree Program ###
### Module 2 - Sensor Fusion and Localization ###
### Project Name - Unscented-Kalman-Filter ###

Project Owner - VISWA ANOOP NERELLA

Submitted to - Udacity

Steps involved in the Project

1. To initialize the UKF module.
2. Calculate and adjust the process noise.
3. Compute the Augmented Sigma Points.
4. Compute the Prediction of Sigma Points.
5. Predict State Mean Vector and Process Covariance Matrix.
6. Calculate and Update the State using Laser and Radar Measurement.
7. Calculate the Cross Relation Matrix and Kalman Gain.
8. Calculate NIS for state prediction after the update step.
9. Calculate RMSE for px, py, vx and vy.

### Building the Project and Execution ###

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make` 
   * On windows, you may need to run: `cmake .. -G "Unix Makefiles" && make`
4. Run it: `./UnscentedKF`
5. See the results in Simulator

### Results on various Tests ###


# All the results of various experiments are stored in [images] (./images) folder in the repository


#Various Conditions tested on the code

1. laser - true, radar - false, std_a_ = 3.0, std_yawdd_ = 0.3,p(1,1) = 0.15, p(2,2) = 0.15
2. laser - false, radar - true, std_a_ = 3.0, std_yawdd_ = 0.3,p(1,1) = 0.15, p(2,2) = 0.15
3. laser - true, radar - true, std_a_ = 3.0, std_yawdd_ = 0.3,p(1,1) = 0.15, p(2,2) = 0.15
4. laser - true, radar - true, std_a_ = 3.0, std_yawdd_ = 0.3,p(1,1) = 1.0, p(2,2) = 1.0
5. laser - true, radar - true, std_a_ = 3.0, std_yawdd_ = 3.0,p(1,1) = 0.15, p(2,2) = 0.15
6. laser - true, radar - true, std_a_ = 3.0, std_yawdd_ = 3.0,p(1,1) = 1.0, p(2,2) = 1.0