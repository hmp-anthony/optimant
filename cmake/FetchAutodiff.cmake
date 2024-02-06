include(ExternalProject)

ExternalProject_Add(
  autodiff
  GIT_REPOSITORY https://github.com/hmp-anthony/autodiff
  GIT_TAG origin 
  )

ExternalProject_Get_Property(autodiff install_dir)

include_directories(${install_dir}/src/autodiff)
