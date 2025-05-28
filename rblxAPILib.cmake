# This .cmake file contatins a rblxAPILib target
# it can be included as include(rblxAPILib)

add_library(rblxAPILib INTERFACE)
target_include_directories(rblxAPILib INTERFACE include)